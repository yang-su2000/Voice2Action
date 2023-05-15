using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class InteractableTarget : MonoBehaviour
{
    // Start is called before the first frame update
    private XRGrabInteractable interactable;
    private Vector3 targetPosition;
    private Vector3 originalPosition;
    // private int lerpFrames = 60 * 2;
    // private int currentFrame = 0;
    private float lerpDuration = 2f;
    private float lerpTimer = 0f;
    private bool isLerping;
    public bool isVoodoo = false;
    public Transform originObject = null;
    private LineRenderer connecting_line = null;
    private GameObject expandPanel;
    private ShapeController m_ShapeController;

    public ShapeController shapeController
    {
        get => m_ShapeController;
        set => m_ShapeController = value;
    }
    void Start()
    {
        expandPanel = GameObject.Find("ExpandPanel");
        interactable = gameObject.GetComponent<XRGrabInteractable>();
        interactable.activated.AddListener(OnActivated);
        interactable.selectEntered.AddListener(voodoo_on_selected);
        interactable.hoverEntered.AddListener(draw_connecting_lines);
        interactable.hoverExited.AddListener(remove_connecting_lines);
        SceneManager.ActivateInteractable += expand_response;
        SceneManager.destory_object_not_grabbed += destory_not_grabbed;
    }

    // Update is called once per frame
    void Update()
    {
        if (isLerping)
        {
            // (deprecated)
            // float interpolationRatio = (float)currentFrame / lerpFrames;
            // Vector3 interpolatedPosition = Vector3.Lerp(originalPosition, targetPosition, interpolationRatio);
            // transform.position = interpolatedPosition;
            // currentFrame = (currentFrame + 1);
            // if (currentFrame == lerpFrames)
            // {
            //     currentFrame = 0;
            //     isLerping = false;
            // }
            // (new)
            float deltaTime = Time.deltaTime;
            lerpTimer += deltaTime;
            float deltaInterpolation = Mathf.Min(lerpTimer / lerpDuration, 1f);
            Vector3 interpolatedPosition = Vector3.Lerp(originalPosition, targetPosition, deltaInterpolation);
            transform.position = interpolatedPosition;
            if (lerpTimer >= lerpDuration)
            {
                isLerping = false;
                lerpTimer = 0f;
            }
        }
        // if (isVoodoo)
        // {
        //     originObject.transform.rotation = transform.rotation;
        // }
        if (connecting_line)
        {
            connecting_line.SetPosition(0, transform.position);
            connecting_line.SetPosition(1, originalPosition);
        }
    }

    void draw_connecting_lines(HoverEnterEventArgs args)
    {
        if (!isVoodoo)
        {
            return;
        }
        connecting_line = gameObject.GetComponent<LineRenderer>();
        if (connecting_line == null) connecting_line = gameObject.AddComponent<LineRenderer>();
        connecting_line.material = Resources.Load<Material>("Materials/LineMaterial");
        // connecting_line.material.SetColor("_Color", Color.yellow);
        connecting_line.useWorldSpace = true;
        // connecting_line.startColor = Color.yellow;
        // connecting_line.endColor = Color.yellow;
        connecting_line.startWidth = 0.01f;
        connecting_line.endWidth = 0.01f;
        connecting_line.SetPosition(0, transform.position);
        connecting_line.SetPosition(1, originalPosition);
    }

    void remove_connecting_lines(HoverExitEventArgs args)
    {
        Destroy(connecting_line);
        connecting_line = null;
    }
    
    void OnActivated(ActivateEventArgs args)
    {
        if (isVoodoo) return;
        SceneManager.notify_activated(transform);
    }

    public void lerp_to_target_positon(Vector3 position)
    {
        originalPosition = transform.position;
        targetPosition = position;
        isLerping = true;
    }

    public ShapeController makeVoodoo()
    {
        GameObject voodoo = Instantiate(gameObject);
        m_ShapeController = voodoo.GetComponent<ShapeController>();
        m_ShapeController.InitShape();
        // Destroy(voodoo.GetComponent<ShapeController>());
        //change the position of the voodoo to the transform position. 
        voodoo.transform.position = transform.position;
        voodoo.transform.rotation = expandPanel.transform.rotation;
        m_ShapeController.interactableTarget.isVoodoo = true;
        m_ShapeController.interactableTarget.originObject = transform;
        foreach (Renderer renderer in m_ShapeController.renderers)
        {
            Material material = renderer.material;
            material.SetFloat("_Mode", 2);
            Color color = material.color;
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
    
    void expand_response(Transform interactable_activated)
    {
        if (isVoodoo)
        {
            Destroy(gameObject);
        }
        if ((transform.position - interactable_activated.position).magnitude < 1)
        {
            ShapeController voodooController = makeVoodoo();
            SceneManager.add_Expanding_and_Voodoo(shapeController, voodooController);
        }
    }

    private void voodoo_on_selected(SelectEnterEventArgs args)
    {
        if(!isVoodoo) return;

        Destroy(connecting_line);
        connecting_line = null;
        SceneManager.notify_Voodoo_selected(transform);
    }
    void destory_not_grabbed(Transform grabbed_voodoo_transform)
    {
        if (isVoodoo & (grabbed_voodoo_transform != transform))
        {
            Destroy(gameObject);
        }
    }

    private void OnDisable()
    {
        interactable.activated.RemoveListener(OnActivated);
        interactable.selectEntered.RemoveListener(voodoo_on_selected);
        interactable.hoverEntered.RemoveListener(draw_connecting_lines);
        interactable.hoverExited.RemoveListener(remove_connecting_lines);
        SceneManager.ActivateInteractable -= expand_response;
        SceneManager.destory_object_not_grabbed -= destory_not_grabbed;
    }
}
