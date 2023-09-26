using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class InteractableTarget : MonoBehaviour
{
    private XRGrabInteractable m_Interactable;
    private Vector3 m_TargetPosition;
    private Vector3 m_OriginalPosition;
    private float m_LerpDuration = 2f;
    private float m_LerpTimer = 0f;
    private bool m_IsLerping;
    public bool isVoodoo = false;
    public Transform originObject = null;
    private LineRenderer m_ConnectingLine = null;
    private GameObject m_ExpandPanel;
    private ShapeController m_ShapeController;

    public ShapeController shapeController
    {
        get => m_ShapeController;
        set => m_ShapeController = value;
    }
    void Start()
    {
        //Finds and stores the Panel that holds all of the selected Interactable objects into the m_ExpandPanel variable
        m_ExpandPanel = GameObject.Find("ExpandPanel");
        
        m_Interactable = gameObject.GetComponent<XRGrabInteractable>();
        //Add event listeners to the Interactable
        m_Interactable.activated.AddListener(OnActivated);
        m_Interactable.selectEntered.AddListener(VoodooOnSelected);
        m_Interactable.hoverEntered.AddListener(DrawConnectingLines);
        m_Interactable.hoverExited.AddListener(RemoveConnectingLines);
        SceneManager.ActivateInteractable += ExpandResponse;
        SceneManager.destory_object_not_grabbed += DestroyUnGrabbedVoodoo;
    }

    // Update is called once per frame
    void Update()
    {
        //If the Target is currently "Lerp"ing
        if (m_IsLerping)
        {

            //Calculates the position to interpolate to and assigns it to the Object's transform position
            float deltaTime = Time.deltaTime;
            m_LerpTimer += deltaTime;
            float deltaInterpolation = Mathf.Min(m_LerpTimer / m_LerpDuration, 1f);
            Vector3 interpolatedPosition = Vector3.Lerp(m_OriginalPosition, m_TargetPosition, deltaInterpolation);
            transform.position = interpolatedPosition;
            
            //Reset the Lerp Timer if it exceeds LerpDuration
            if (m_LerpTimer >= m_LerpDuration)
            {
                m_IsLerping = false;
                m_LerpTimer = 0f;
            }
        }

        //Sets the end positions of the line that connects the voodoo object with the original object 
        if (m_ConnectingLine)
        {
            m_ConnectingLine.SetPosition(0, transform.position);
            m_ConnectingLine.SetPosition(1, m_OriginalPosition);
        }
    }

    void DrawConnectingLines(HoverEnterEventArgs args)
    {
        //If the Interactable Target object is not a Voodoo Object, do not draw connecting lines.
        if (!isVoodoo)
        {
            return;
        }
        
        //Get the components LineRenderer component; if it doesn't exist, Add the Component.
        m_ConnectingLine = gameObject.GetComponent<LineRenderer>();
        if (m_ConnectingLine == null)m_ConnectingLine = gameObject.AddComponent<LineRenderer>();
        
        //Sets the UI & positions of the Connecting Line game object.
        m_ConnectingLine.material = Resources.Load<Material>("Materials/LineMaterial");
        m_ConnectingLine.useWorldSpace = true;
        m_ConnectingLine.startWidth = 0.01f;
        m_ConnectingLine.endWidth = 0.01f;
        m_ConnectingLine.SetPosition(0, transform.position);
        m_ConnectingLine.SetPosition(1, m_OriginalPosition);
    }

    void RemoveConnectingLines(HoverExitEventArgs args)
    {
        Destroy(m_ConnectingLine);
        m_ConnectingLine = null;
    }
    
    void OnActivated(ActivateEventArgs args)
    {
        if (isVoodoo) return;
        SceneManager.notify_activated(transform);
    }
    /// <summary>
    /// Sets the variables (original position, target position, and isLerping) for calculation of Vector for Lerping
    /// </summary>
    /// <param name="position">Target position the Voodoo object should Lerp to</param>
    public void SetVariablesForLerping(Vector3 position)
    {
        m_OriginalPosition = transform.position;
        m_TargetPosition = position;
        m_IsLerping = true;
    }

    /// <summary>
    /// Creates a voodoo object of the Interactable Target
    /// </summary>
    public ShapeController MakeVoodoo()
    {
        GameObject voodoo = Instantiate(gameObject);
        m_ShapeController = voodoo.GetComponent<ShapeController>();
        m_ShapeController.InitShape();

        //Change the position of the voodoo to the transform position. 
        voodoo.transform.position = transform.position;
        voodoo.transform.rotation = m_ExpandPanel.transform.rotation;
        m_ShapeController.interactableTarget.isVoodoo = true;
        m_ShapeController.interactableTarget.originObject = transform;
        
        //Set UI for voodoo object
        foreach (Renderer renderer in m_ShapeController.renderers)
        {
            Material material = renderer.material;
            material.SetFloat("_Mode", 2);
            Color color = material.color;
            color.a = 1;
            material.color = color;
        }
        return shapeController;
    }
    
    void ExpandResponse(Transform interactableActivated)
    {
        
        if (isVoodoo)
        {
            Destroy(gameObject);
        }
        //<Ask Harald>
        // Only bring in objects that are of a certain distance away from the object when an interactable target is selected
        /*if ((transform.position - interactableActivated.position).magnitude < 1)
        {
            ShapeController voodooController = MakeVoodoo();
            SceneManager.add_Expanding_and_Voodoo(shapeController, voodooController);
        }*/
        //</Ask Harald>
        
    }

    private void VoodooOnSelected(SelectEnterEventArgs args)
    {
        if(!isVoodoo) return;
        Destroy(m_ConnectingLine);
        m_ConnectingLine = null;
        SceneManager.notify_Voodoo_selected(transform);
    }
    void DestroyUnGrabbedVoodoo(Transform grabbedVoodooTransform)
    {
        //When you pick a Voodoo Object, destroys the rest of the Voodoo Objects that were not selected
        if (isVoodoo & (grabbedVoodooTransform != transform))
        {
            Destroy(gameObject);
        }
    }

    private void OnDisable()
    {
        //Remove Listeners and Events
        m_Interactable.activated.RemoveListener(OnActivated);
        m_Interactable.selectEntered.RemoveListener(VoodooOnSelected);
        m_Interactable.hoverEntered.RemoveListener(DrawConnectingLines);
        m_Interactable.hoverExited.RemoveListener(RemoveConnectingLines);
        SceneManager.ActivateInteractable -= ExpandResponse;
        SceneManager.destory_object_not_grabbed -= DestroyUnGrabbedVoodoo;
    }
}
