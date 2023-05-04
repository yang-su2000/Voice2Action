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
    /// <summary>
    /// The currently hovered interactable
    /// </summary>
    private IXRHoverInteractable m_Interactable;
    public static event Action<Transform> ActivateInteractable;
    public static event Action<int> ActivateUI;
    public static event Action<Transform> destory_object_not_grabbed;

    private static List<(GameObject,GameObject)> m_List_Expand_Object;
    private static GameObject parentExpandedObjects;
    private float up_left_dist = 0.1f;
    public float objectScale;
    private static GameObject expandPanel;

    // Start is called before the first frame update
    void Start()
    {
        expandPanel = GameObject.FindGameObjectWithTag("ExpandPanel");
        m_List_Expand_Object = new List<(GameObject,GameObject)>();
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
        ActivateUI?.Invoke(m_List_Expand_Object.Count);
        expandPanel.SetActive(true);
        parentExpandedObjects = expandPanel.GetNamedChild("Interactables");

        for (int i = 0; i < m_List_Expand_Object.Count; i++)
        {
            (GameObject,GameObject) orig_voodoo_pair = m_List_Expand_Object[i];
            GameObject original = orig_voodoo_pair.Item1;
            GameObject voodoo = orig_voodoo_pair.Item2;
            
            voodoo.transform.parent = parentExpandedObjects.transform;
            
            //change size of the object so that it fits within the canvas
            MeshRenderer renderer = original.GetComponent<MeshRenderer>();
            float scale = 0.0f;
            
            if (renderer.bounds.size.x >= renderer.bounds.size.y)
            {
                scale =  objectScale/ renderer.bounds.size.x;
                voodoo.transform.localScale = new Vector3(objectScale, renderer.bounds.size.y * scale, renderer.bounds.size.z * scale);
            }
            else
            {
                scale =  objectScale/ renderer.bounds.size.y;
                voodoo.transform.localScale = new Vector3(renderer.bounds.size.x * scale, objectScale, renderer.bounds.size.z * scale);
            }
            
            //change position of voodoo object
            Vector3 target_position = expandPanel.transform.position;
            int x_index = i % 5;
            int y_index = i / 5;
            target_position = target_position + expandPanel.transform.up * (up_left_dist * (y_index - 1))+expandPanel.transform.right * ((x_index - 1) * up_left_dist);
            target_position = new Vector3(target_position.x, target_position.y, target_position.z -0.5f);
            //lerp voodoo to expand panel
            voodoo.GetComponent<InteractableTarget>().lerp_to_target_positon(target_position);
        }
        m_List_Expand_Object.Clear();
    }
    
    public static void add_Expanding_and_Voodoo(GameObject original, GameObject voodoo)
    {
        m_List_Expand_Object.Add((original, voodoo));
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
           hoveredOutline.OutlineWidth = 5;

        }
            
             
    }
    
    private void OnHoverExited(HoverExitEventArgs args)
    { 
        m_Interactable = args.interactableObject;
        if (m_Interactable is XRGrabInteractable)
        {
            Outline hoveredOutline =  (m_Interactable as XRGrabInteractable).gameObject.GetComponent<Outline>();
            hoveredOutline.OutlineWidth = 0;
        }

  
    }

}
