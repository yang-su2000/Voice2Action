using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using System;
using TMPro;
using Unity.VisualScripting;
using Unity.XR.CoreUtils;
using UnityEngine.UI;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.Inputs;

public class SceneManager : MonoBehaviour
{
    [SerializeField]
    private XRBaseInteractor m_LeftRayInteractor;

    [SerializeField]
    private XRBaseInteractor m_RightRayInteractor;
    
    [SerializeField]
    private Camera xrOriginCamera;

    [SerializeField]
    private GameObject shapeInfoPanel;
    /// <summary>
    /// The currently hovered interactable
    /// </summary>
    private IXRHoverInteractable m_Interactable;
    
    /// <summary>
    /// invoked when one object is being activated. When invoked, it will call all InteractableTarget's
    /// expand_response
    /// </summary>
    public static event Action<Transform> activateInteractable;
    public static event Action<int> activateUI;
    public static event Action<Transform> destoryObjectNotGrabbed;
    public static int m_MaxExpandNum = 8;

    private static List<(ShapeController, ShapeController)> m_ListExpandObject;
    private static GameObject m_ParentExpandedObjects;
    private float m_UpLeftDist = 0.1f;
    public float objectScale;
    public static GameObject m_ExpandPanel;
    private float m_PanelWidth;
    private float m_PanelHeight;

    void Start()
    {
        m_ExpandPanel = GameObject.FindGameObjectWithTag("ExpandPanel");
        m_PanelWidth = m_ExpandPanel.GetComponent<MeshRenderer>().bounds.size.x / 8f;
        m_PanelHeight = m_ExpandPanel.GetComponent<MeshRenderer>().bounds.size.z / 4f;
        m_ListExpandObject = new List<(ShapeController, ShapeController)>();
        m_ParentExpandedObjects = m_ExpandPanel.GetNamedChild("Interactables");
        SetupInteractorEvents();
    }
    private void OnEnable()
    {
        SetupInteractorEvents();
    }

    private void OnDisable()
    {
        TeardownInteractorEvents();
    }

    // Update is called once per frame
    void Update()
    {
        if (m_ListExpandObject.Count > 0)
        {
            update_position();
        }
    }

    private void update_position()
    {
        // ActivateUI?.Invoke(m_List_Expand_Object.Count);
        m_ExpandPanel.SetActive(true);
        // expandPanel.transform.LookAt(xrOriginCamera.transform.position);
        m_ExpandPanel.transform.position = new Vector3(xrOriginCamera.transform.position.x , xrOriginCamera.transform.position.y, xrOriginCamera.transform.position.z + 0.5f);
        m_ExpandPanel.transform.up = (xrOriginCamera.transform.position - m_ExpandPanel.transform.position).normalized;

       // expandPanel.transform.Rotate(expandPanel.transform.right, 90);

        for (int i = 0; i < Mathf.Min(m_ListExpandObject.Count, m_MaxExpandNum); i++)
        {
            (ShapeController original, ShapeController voodoo) = m_ListExpandObject[i];
            
            voodoo.transform.parent = m_ParentExpandedObjects.transform;
            
            //change size of the object so that it fits within the canvas
            Collider collider = original.shapeCollider;
            float expandWidthRatio = collider.bounds.size.x / m_PanelWidth;
            float expandHeightRatio = collider.bounds.size.y / m_PanelHeight;
            float expandLengthRatio = collider.bounds.size.z / Mathf.Min(m_PanelWidth, m_PanelHeight);
            voodoo.transform.localScale /= Mathf.Max(expandHeightRatio, expandWidthRatio, expandLengthRatio);

            //change position of voodoo object
            Vector3 target_position = m_ExpandPanel.transform.position;
            int x_index = i % 4;
            int y_index = i / 4;
            target_position = target_position + m_ExpandPanel.transform.forward * (m_UpLeftDist * (y_index - 1)) + m_ExpandPanel.transform.right * ((x_index - 1) * m_UpLeftDist);
            // target_position = new Vector3(target_position.x + 0.01f, target_position.y + 0.05f, target_position.z  + 0.1f);
            target_position = target_position + m_ExpandPanel.transform.up * 0.05f + m_ExpandPanel.transform.forward * 0.1f - m_ExpandPanel.transform.right * 0.02f;
            //lerp voodoo to expand panel
            voodoo.interactableTarget.lerp_to_target_positon(target_position);
        }
        m_ListExpandObject.Clear();
    }
    /// <summary>
    /// Add original and voodoo object in this function, at the end of the frame, it would lerp all
    /// voodoo object infront of users
    /// </summary>
    /// <param name="original">original ShapeController</param>
    /// <param name="voodoo">Voodoo ShapeController</param>
    public static void add_Expanding_and_Voodoo(ShapeController original, ShapeController voodoo)
    {
        if (m_ListExpandObject.Count < m_MaxExpandNum)
        {
            m_ListExpandObject.Add((original, voodoo));
        }
        else
        {
            Destroy(voodoo.gameObject);
        }
    }

    /// <summary>
    /// Destroy all voodoo object
    /// </summary>
    public static void clearProxys()
    {
        for (int i = m_ParentExpandedObjects.transform.childCount - 1; i >= 0; i--)
        {
            Destroy(m_ParentExpandedObjects.transform.GetChild(i).gameObject);
        }
    }
    
    /// <summary>
    /// tell the sceneManager, some InteractableTarget is being activated
    /// </summary>
    /// <param name="transform">transform of the object being called, used as the center of expand</param>
    public static void notify_activated(Transform transform)
    {
        activateInteractable?.Invoke(transform);
    }
    /// <summary>
    /// notify all Voodoo objects that 1 voodoo object is being grabbed, and destroy the rest
    /// </summary>
    /// <param name="grabbed_voodoo_object">Transform of be voodoo object being grabbed</param>
    public static void notify_Voodoo_selected(Transform grabbed_voodoo_object)
    {
        m_ExpandPanel.SetActive(false);
        destoryObjectNotGrabbed?.Invoke(grabbed_voodoo_object);
    }
    
    //set up listener for hover for right/left RayInteractor
    private void SetupInteractorEvents()
    {
        if (m_LeftRayInteractor != null)
        {
            m_LeftRayInteractor.hoverEntered.AddListener(OnHoverEntered);
            m_LeftRayInteractor.hoverExited.AddListener(OnHoverExited);
        }

        if (m_RightRayInteractor != null)
        {
            m_RightRayInteractor.hoverEntered.AddListener(OnHoverEntered);
            m_RightRayInteractor.hoverExited.AddListener(OnHoverExited);
        }
    }

    
    private void TeardownInteractorEvents()
    {
        if (m_LeftRayInteractor != null)
        {
            m_LeftRayInteractor.hoverEntered.RemoveListener(OnHoverEntered);
            m_LeftRayInteractor.hoverExited.RemoveListener(OnHoverExited);
        }

        if (m_RightRayInteractor != null)
        {
            m_RightRayInteractor.hoverEntered.RemoveListener(OnHoverEntered);
            m_RightRayInteractor.hoverExited.RemoveListener(OnHoverExited);
        }
    }
    
    private void OnHoverEntered(HoverEnterEventArgs args)
    {
        m_Interactable = args.interactableObject;
        if (m_Interactable == null)
        {
            return;
        }
        if (m_Interactable is XRGrabInteractable)
        {
           Outline hoveredOutline =  (m_Interactable as XRGrabInteractable).gameObject.GetComponent<Outline>();
           if (hoveredOutline != null) hoveredOutline.OutlineWidth = 5;
           SetShapeInfo(m_Interactable as XRGrabInteractable, true);
        }
    }
    
    private void OnHoverExited(HoverExitEventArgs args)
    { 
        m_Interactable = args.interactableObject;
        if (m_Interactable is XRGrabInteractable)
        {
            Outline hoveredOutline =  (m_Interactable as XRGrabInteractable).gameObject.GetComponent<Outline>();
            if (hoveredOutline != null) hoveredOutline.OutlineWidth = 0;
            SetShapeInfo(m_Interactable as XRGrabInteractable, false);
        }
    }

    /// <summary>
    /// Display info panel
    /// </summary>
    /// <param name="xrGrabInteractable">Interactable Object that was grabbed by the user</param>
    /// <param name="showPanel">Debug Panel that shows information about the shape</param>
    /// <exception cref="Exception">hovered original object has no shape controller</exception>
    private void SetShapeInfo(XRGrabInteractable xrGrabInteractable, bool showPanel)
    {
        if (!showPanel)
        {
            shapeInfoPanel.SetActive(false);
            return;
        }
        InteractableTarget interactableTarget = xrGrabInteractable.GetComponent<InteractableTarget>();
        if (interactableTarget == null)
        {
            // a random grab interactable that is not an object we are interested in, probably a grabbable panel
            shapeInfoPanel.SetActive(false);
            return;
        }
        if (interactableTarget.isVoodoo == false)
        {
            // only show info on voodoo objects
            shapeInfoPanel.SetActive(false);
            return;
        }
        ShapeController shapeController = interactableTarget.originObject.GetComponent<ShapeController>();
        if (shapeController == null)
        {
            // this could actually be bad, every interactable target should has shape controller attached to it
            shapeInfoPanel.SetActive(false);
            throw new Exception("hovered original object has no shape controller");
        }
        shapeInfoPanel.SetActive(true);
        Text text = shapeInfoPanel.GetComponentInChildren<Text>();
        text.text = shapeController.GetShapeInfo();
    }
}
