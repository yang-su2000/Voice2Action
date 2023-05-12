using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using System;
using Unity.VisualScripting;
using Unity.XR.CoreUtils;
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
    /// <summary>
    /// The currently hovered interactable
    /// </summary>
    private IXRHoverInteractable m_Interactable;
    public static event Action<Transform> ActivateInteractable;
    public static event Action<int> ActivateUI;
    public static event Action<Transform> destory_object_not_grabbed;
    
    public static int maxExpandNum = 8;

    private static List<(ShapeController, ShapeController)> m_List_Expand_Object;
    private static GameObject parentExpandedObjects;
    private float up_left_dist = 0.1f;
    public float objectScale;
    public static GameObject expandPanel;
    private float panelWidth;
    private float panelHeight;
    // Start is called before the first frame update
    void Start()
    {
        expandPanel = GameObject.FindGameObjectWithTag("ExpandPanel");
        panelWidth = expandPanel.GetComponent<MeshRenderer>().bounds.size.x / 8f;
        panelHeight = expandPanel.GetComponent<MeshRenderer>().bounds.size.z / 4f;
        m_List_Expand_Object = new List<(ShapeController, ShapeController)>();
        parentExpandedObjects = expandPanel.GetNamedChild("Interactables");
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
        if (m_List_Expand_Object.Count > 0)
        {
            update_position();
        }
    }

    private void update_position()
    {
        // ActivateUI?.Invoke(m_List_Expand_Object.Count);
        expandPanel.SetActive(true);
        // expandPanel.transform.LookAt(xrOriginCamera.transform.position);
        expandPanel.transform.position = new Vector3(xrOriginCamera.transform.position.x + 0.5f, xrOriginCamera.transform.position.y, xrOriginCamera.transform.position.z);
        expandPanel.transform.up = (xrOriginCamera.transform.position - expandPanel.transform.position).normalized;
        expandPanel.transform.Rotate(expandPanel.transform.right, 90);

        for (int i = 0; i < Mathf.Min(m_List_Expand_Object.Count, maxExpandNum); i++)
        {
            (ShapeController original, ShapeController voodoo) = m_List_Expand_Object[i];
            
            voodoo.transform.parent = parentExpandedObjects.transform;
            
            //change size of the object so that it fits within the canvas
            Collider collider = original.shapeCollider;
            float expandWidthRatio = collider.bounds.size.x / panelWidth;
            float expandHeightRatio = collider.bounds.size.y / panelHeight;
            float expandLengthRatio = collider.bounds.size.z / Mathf.Min(panelWidth, panelHeight);
            voodoo.transform.localScale /= Mathf.Max(expandHeightRatio, expandWidthRatio, expandLengthRatio);

            //change position of voodoo object
            Vector3 target_position = expandPanel.transform.position;
            int x_index = i % 4;
            int y_index = i / 4;
            target_position = target_position + expandPanel.transform.forward * (up_left_dist * (y_index - 1)) + expandPanel.transform.right * ((x_index - 1) * up_left_dist);
            // target_position = new Vector3(target_position.x + 0.01f, target_position.y + 0.05f, target_position.z  + 0.1f);
            target_position = target_position + expandPanel.transform.up * 0.05f + expandPanel.transform.forward * 0.07f - expandPanel.transform.right * 0.02f;
            //lerp voodoo to expand panel
            voodoo.interactableTarget.lerp_to_target_positon(target_position);
        }
        m_List_Expand_Object.Clear();
    }
    
    public static void add_Expanding_and_Voodoo(ShapeController original, ShapeController voodoo)
    {
        if (m_List_Expand_Object.Count < maxExpandNum)
        {
            m_List_Expand_Object.Add((original, voodoo));
        }
        else
        {
            Destroy(voodoo.gameObject);
        }
    }

    public static void clearProxys()
    {
        for (int i = parentExpandedObjects.transform.childCount - 1; i >= 0; i--)
        {
            Destroy(parentExpandedObjects.transform.GetChild(i).gameObject);
        }
    }
    
    public static void notify_activated(Transform transform)
    {
        ActivateInteractable?.Invoke(transform);
    }
    public static void notify_Voodoo_selected(Transform grabbed_voodoo_object)
    {
        expandPanel.SetActive(false);
        destory_object_not_grabbed?.Invoke(grabbed_voodoo_object);
    }
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
        }
    }
    
    private void OnHoverExited(HoverExitEventArgs args)
    { 
        m_Interactable = args.interactableObject;
        if (m_Interactable is XRGrabInteractable)
        {
            Outline hoveredOutline =  (m_Interactable as XRGrabInteractable).gameObject.GetComponent<Outline>();
            if (hoveredOutline != null) hoveredOutline.OutlineWidth = 0;
        }
    }
}
