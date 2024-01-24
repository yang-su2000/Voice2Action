using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

namespace xrc_students_fa2023_sp06_en268_jx288_ys724.Runtime
{
    public class InteractableTarget : MonoBehaviour
    {
        private XRGrabInteractable m_Interactable;
        private Vector3 m_TargetPosition;
        private Vector3 m_OriginalPosition;
        private const float k_LerpDuration = 2f;
        private float m_LerpTimer; // = 0f;
        private bool m_IsLerp;
        public bool m_IsVoodoo; // = false;
        public Transform m_OriginObject; // = null;
        private LineRenderer m_ConnectingLine; // = null;
        private ShapeController m_ShapeController;

        [SerializeField]
        private Material m_LineMaterial;

        public ShapeController shapeController
        {
            get => m_ShapeController;
            set => m_ShapeController = value;
        }
        private void Start()
        {
            // Finds and stores the Panel that holds all of the selected Interactable objects into the m_ExpandPanel variable
            // m_ExpandPanel = GameObject.Find("ExpandPanel");
            
            m_Interactable = gameObject.GetComponent<XRGrabInteractable>();
            // Add event listeners to the Interactable
            m_Interactable.activated.AddListener(OnActivated);
            m_Interactable.selectEntered.AddListener(VoodooOnSelected);
            m_Interactable.hoverEntered.AddListener(DrawConnectingLines);
            m_Interactable.hoverExited.AddListener(RemoveConnectingLines);
            SceneManager.activateInteractable += ExpandResponse;
            SceneManager.destroyObjectNotGrabbed += DestroyUnGrabbedVoodoo;
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

            // Sets the end positions of the line that connects the voodoo object with the original object 
            if (m_ConnectingLine)
            {
                m_ConnectingLine.SetPosition(0, transform.position);
                m_ConnectingLine.SetPosition(1, m_OriginalPosition);
            }
        }

        private void DrawConnectingLines(HoverEnterEventArgs args)
        {
            // If the Interactable Target object is not a Voodoo Object, do not draw connecting lines.
            if (!m_IsVoodoo)
            {
                return;
            }

            if (!m_LineMaterial)
            {
                return;
            }
            
            // Get the components LineRenderer component; if it doesn't exist, Add the Component.
            m_ConnectingLine = gameObject.GetComponent<LineRenderer>();
            if (m_ConnectingLine == null)m_ConnectingLine = gameObject.AddComponent<LineRenderer>();
            
            // Sets the UI & positions of the Connecting Line game object.
            m_ConnectingLine.material = m_LineMaterial;
            m_ConnectingLine.useWorldSpace = true;
            m_ConnectingLine.startWidth = 0.01f;
            m_ConnectingLine.endWidth = 0.01f;
            m_ConnectingLine.SetPosition(0, transform.position);
            m_ConnectingLine.SetPosition(1, m_OriginalPosition);
        }

        private void RemoveConnectingLines(HoverExitEventArgs args)
        {
            if (!m_ConnectingLine)
            {
                return;
            }
            Destroy(m_ConnectingLine);
            m_ConnectingLine = null;
        }
        
        private void OnActivated(ActivateEventArgs args)
        {
            if (m_IsVoodoo) return;
            SceneManager.notify_activated(transform);
        }
        
        /// <summary>
        /// Sets the variables (original position, target position, and isLerp) for calculation of Vector for Lerp
        /// </summary>
        /// <param name="position">Target position the Voodoo object should Lerp to</param>
        public void SetVariablesForLerp(Vector3 position)
        {
            m_OriginalPosition = transform.position;
            m_TargetPosition = position;
            m_IsLerp = true;
        }

        /// <summary>
        /// Creates a voodoo object of the Interactable Target
        /// </summary>
        public ShapeController MakeVoodoo()
        {
            var voodoo = Instantiate(gameObject);
            m_ShapeController = voodoo.GetComponent<ShapeController>();
            m_ShapeController.InitShape();

            // Change the position of the voodoo to the transform position. 
            voodoo.transform.position = transform.position;
            voodoo.transform.rotation = SceneManager.m_ExpandPanel.transform.rotation;
            m_ShapeController.interactableTarget.m_IsVoodoo = true;
            m_ShapeController.interactableTarget.m_OriginObject = transform;
            
            // Set UI for voodoo object
            foreach (var renderer1 in m_ShapeController.renderers)
            {
                var material = renderer1.material;
                material.SetFloat("_Mode", 2);
                var color = material.color;
                color.a = 1;
                material.color = color;
            }
            // if (voodoo.GetComponent<Renderer>() != null)
            // {
            //     Material material = voodoo.GetComponent<Renderer>().material;
            //     material.SetFloat("_Mode", 2);
            //     Color color = material.color;
            //     color.a = 1;
            //     material.color = color;
            // }
            return shapeController;
        }
        
        private void ExpandResponse(Transform interactableActivated)
        {
            
            if (m_IsVoodoo)
            {
                Destroy(gameObject);
            }
            //<Ask Harald>
            // Only bring in objects that are of a certain distance away from the object when an interactable target is selected
            /*if ((transform.position - interactableActivated.position).magnitude < 1)
            {
                ShapeController voodooController = MakeVoodoo();
                SceneManager.add_Expanding_and_Voodoo(ShapeController, voodooController);
            }*/
            //</Ask Harald>
            
        }

        private void VoodooOnSelected(SelectEnterEventArgs args)
        {
            if(!m_IsVoodoo) return;
            Destroy(m_ConnectingLine);
            m_ConnectingLine = null;
            SceneManager.notify_Voodoo_selected(transform);
        }
        
        private void DestroyUnGrabbedVoodoo(Transform grabbedVoodooTransform)
        {
            // When you pick a Voodoo Object, destroys the rest of the Voodoo Objects that were not selected
            if (m_IsVoodoo & (grabbedVoodooTransform != transform))
            {
                Destroy(gameObject);
            }
        }

        private void OnDisable()
        {
            // Remove Listeners and Events
            m_Interactable.activated.RemoveListener(OnActivated);
            m_Interactable.selectEntered.RemoveListener(VoodooOnSelected);
            m_Interactable.hoverEntered.RemoveListener(DrawConnectingLines);
            m_Interactable.hoverExited.RemoveListener(RemoveConnectingLines);
            SceneManager.activateInteractable -= ExpandResponse;
            SceneManager.destroyObjectNotGrabbed -= DestroyUnGrabbedVoodoo;
        }
    }
}
