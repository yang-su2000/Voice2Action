using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

namespace XRC.Students.Voice2Action
{
    /// <summary>
    /// Implements proxy manipulation in Expand. <br/>
    /// When the user hovers enter the proxy object, an information panel will be displayed to show the status of the actual game object. <br/>
    /// The user can customize the display by overriding (My)ShapeController.GetShapeInfo(...). <br/>
    /// </summary>
    public class InteractableTarget : MonoBehaviour
    {
        /// <value>The line material of the line renderer that connects the proxy to the original object </value>
        [SerializeField]
        private Material m_LineMaterial;
        
        /// <value>XRGrabInteractable component of the object</value>
        private XRGrabInteractable m_Interactable;
        
        /// <value>Target position in the Expand Panel</value>
        private Vector3 m_TargetPosition;
        
        /// <value>Original position in the scene</value>
        private Vector3 m_OriginalPosition;
        
        /// <value>Time for the lerp action to complete</value>
        private float m_LerpTimer; // = 0f;
        
        /// <value>If is lerp</value>
        private bool m_IsLerp; // = false;
        
        /// <value>The line renderer that connects the proxy to the original object </value>
        private LineRenderer m_ConnectingLine; // = null;
        
        /// <value>The shape controller that points to the proxy game object</value>
        private ShapeController m_ShapeController;
        
        /// <value> The Duration of the Lerp motion of the proxy when it moves from the original location to the expand panel.</value>
        private const float k_LerpDuration = 2f;
        
        /// <value>The Scene Manager instance</value>
        public static SceneManager sceneManager { get; set; }
        
        /// <value>Checks if the Interactable Target is a proxy object</value>
        public bool isProxy { get; set; }
        
        /// <value>Stores the transform value of the original object of the interactable target</value>
        public Transform originObject { get; private set; }
        
        private void Start()
        {
            m_Interactable = gameObject.GetComponent<XRGrabInteractable>();
            
            // Add event listeners to the Interactable
            m_Interactable.activated.AddListener(OnActivated);
            m_Interactable.selectEntered.AddListener(ProxyOnSelected);
            m_Interactable.hoverEntered.AddListener(DrawConnectingLines);
            m_Interactable.hoverExited.AddListener(RemoveConnectingLines);
            sceneManager.activateInteractable += ExpandResponse;
            sceneManager.destroyObjectNotGrabbed += DestroyUnGrabbedProxy;
        }
        
        private void Update()
        {
            // If the Target is currently "Lerp"ing
            if (m_IsLerp)
            {
                // Calculates the position to interpolate to and assigns it to the Object's transform position
                var deltaTime = Time.deltaTime;
                m_LerpTimer += deltaTime;
                var deltaInterpolation = Mathf.Min(m_LerpTimer / k_LerpDuration, 1f);
                var interpolatedPosition = Vector3.Lerp(m_OriginalPosition, m_TargetPosition, deltaInterpolation);
                transform.position = interpolatedPosition;
                
                // Reset the Lerp Timer if it exceeds LerpDuration
                if (m_LerpTimer >= k_LerpDuration)
                {
                    m_IsLerp = false;
                    m_LerpTimer = 0f;
                }
            }

            // Sets the end positions of the line that connects the proxy object with the original object 
            if (m_ConnectingLine)
            {
                m_ConnectingLine.SetPosition(0, transform.position);
                m_ConnectingLine.SetPosition(1, m_OriginalPosition);
            }
        }

        /// <summary>
        /// Draw a line between proxy and original object.
        /// </summary>
        /// <param name="args">Auto parsed by XRI, invoked when user hovers</param>
        private void DrawConnectingLines(HoverEnterEventArgs args)
        {
            // If the Interactable Target object is not a Proxy Object, do not draw connecting lines.
            if (!isProxy) return;
            if (!m_LineMaterial) return;
            
            // Get the components LineRenderer component; if it doesn't exist, Add the Component.
            m_ConnectingLine = gameObject.GetComponent<LineRenderer>();
            if (m_ConnectingLine == null) m_ConnectingLine = gameObject.AddComponent<LineRenderer>();
            
            // Sets the UI & positions of the Connecting Line game object.
            m_ConnectingLine.material = m_LineMaterial;
            m_ConnectingLine.useWorldSpace = true;
            m_ConnectingLine.startWidth = 0.01f;
            m_ConnectingLine.endWidth = 0.01f;
            m_ConnectingLine.SetPosition(0, transform.position);
            m_ConnectingLine.SetPosition(1, m_OriginalPosition);
        }

        /// <summary>
        /// Removes the line renderers that are connected from the proxy to the original object.
        /// </summary>
        /// <param name="args">Auto parsed by XRI</param>
        private void RemoveConnectingLines(HoverExitEventArgs args)
        {
            if (!m_ConnectingLine) return;
            Destroy(m_ConnectingLine);
            m_ConnectingLine = null;
        }
        
        /// <summary>
        /// Function that is called when the InteractableTarget is "activated".
        /// </summary>
        /// <param name="args">Auto parsed by XRI</param>
        private void OnActivated(ActivateEventArgs args)
        {
            if (isProxy) return;
            sceneManager.NotifyActivated(transform);
        }
        
        /// <summary>
        /// response to expand action, destroy previous proxy.
        /// </summary>
        /// <param name="interactableActivated"></param>
        private void ExpandResponse(Transform interactableActivated)
        {
            if (isProxy) Destroy(gameObject);
        }
        
        /// <summary>
        /// Function that is called when a proxy object is selected.
        /// </summary>
        /// <param name="args">Auto parsed by XRI</param>
        private void ProxyOnSelected(SelectEnterEventArgs args)
        {
            if (!isProxy) return;
            Destroy(m_ConnectingLine);
            m_ConnectingLine = null;
            sceneManager.NotifyProxySelected(transform);
        }
        
        /// <summary>
        /// Destroys all proxy objects that aren't selected in the Expand Panel.
        /// </summary>
        /// <param name="grabbedProxyTransform">Transform value of the proxy that is grabbed from the Expand Panel</param>
        private void DestroyUnGrabbedProxy(Transform grabbedProxyTransform)
        {
            // When you pick a Proxy Object, destroys the rest of the Proxy Objects that were not selected
            if (isProxy & (grabbedProxyTransform != transform))
            {
                Destroy(gameObject);
            }
        }
        
        /// <summary>
        /// Removes all the Listeners and Events.
        /// </summary>
        private void OnDisable()
        {
            // Remove Listeners and Events
            m_Interactable.activated.RemoveListener(OnActivated);
            m_Interactable.selectEntered.RemoveListener(ProxyOnSelected);
            m_Interactable.hoverEntered.RemoveListener(DrawConnectingLines);
            m_Interactable.hoverExited.RemoveListener(RemoveConnectingLines);
            sceneManager.activateInteractable -= ExpandResponse;
            sceneManager.destroyObjectNotGrabbed -= DestroyUnGrabbedProxy;
        }
        
        /// <summary>
        /// Sets the variables (original position, target position, and isLerp) for calculation of Vector for Lerp.
        /// </summary>
        /// <param name="position">Target position the Proxy object should Lerp to</param>
        public void SetVariablesForLerp(Vector3 position)
        {
            m_OriginalPosition = transform.position;
            m_TargetPosition = position;
            m_IsLerp = true;
        }

        /// <summary>
        /// Creates a proxy object of the Interactable Target.
        /// </summary>
        /// <returns>The shape controller of the proxy game object.</returns>
        public ShapeController MakeProxy()
        {
            var proxy = Instantiate(gameObject);
            m_ShapeController = proxy.GetComponent<ShapeController>();
            m_ShapeController.InitShape();
            m_ShapeController.InitMyShape();

            // Change the position of the proxy to the transform position. 
            proxy.transform.position = transform.position;
            proxy.transform.rotation = sceneManager.expandPanel.transform.rotation;
            m_ShapeController.interactableTarget.isProxy = true;
            m_ShapeController.interactableTarget.originObject = transform;
            
            // Set UI for proxy object
            foreach (var renderer1 in m_ShapeController.renderers)
            {
                var material = renderer1.material;
                int modeID = Shader.PropertyToID("_Mode");
                material.SetFloat(modeID, 2);
                var color = material.color;
                color.a = 1;
                material.color = color;
            }
            return m_ShapeController;
        }
    }
}
