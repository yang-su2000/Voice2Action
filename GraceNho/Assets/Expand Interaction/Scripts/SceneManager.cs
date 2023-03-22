using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using System;
using Unity.VisualScripting;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.Inputs;

public class SceneManager : MonoBehaviour
{
    public static event Action<Transform> ActivateInteractable;
    public static event Action<Vector3> ActivateUI;

    private static Camera m_Camera;
    private static Transform camera_transform;
    private static List<(GameObject,GameObject)> m_List_Expand_Object;
    private static GameObject parentExpandedObjects;



    public float front_dist = 0.3f;
    public float up_left_dist = 0.01f;
    public GameObject expandPanel;
    
    // Start is called before the first frame update
    void Start()
    {
        m_Camera = GameObject.FindWithTag("MainCamera").GetComponent<Camera>();
        m_List_Expand_Object = new List<(GameObject,GameObject)>();
        camera_transform = m_Camera.transform;
        parentExpandedObjects = new GameObject();
        parentExpandedObjects.name = "Voodoo Objects";
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
        ActivateUI?.Invoke(new Vector3(m_Camera.transform.position.x, m_Camera.transform.position.y, m_Camera.transform.position.z +1.0f));
        for (int i = 0; i < m_List_Expand_Object.Count; i++)
        {
            (GameObject,GameObject) orig_voodoo_pair = m_List_Expand_Object[i];
            GameObject original = orig_voodoo_pair.Item1;
            GameObject voodoo = orig_voodoo_pair.Item2;
            Vector3 target_position = expandPanel.transform.position;
            int x_index = i % 3;
            int y_index = i / 3;
            target_position = target_position + expandPanel.transform.up * (up_left_dist * (y_index - 1))+expandPanel.transform.right * ((x_index - 1) * up_left_dist);
            voodoo.GetComponent<InteractableTarget>().lerp_to_target_positon(target_position);
            voodoo.transform.parent = parentExpandedObjects.transform;
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
    

}
