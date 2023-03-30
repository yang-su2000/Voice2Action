using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExpandPanelScroll : MonoBehaviour, ExpandPanelInterface
{
    // Start is called before the first frame update

    public GameObject ExpandUI;
    private static Camera m_Camera;
    void Start()
    {
        ExpandUI.SetActive(false);
        SceneManager.ActivateUI += SetActiveInactive;
        m_Camera = GameObject.FindWithTag("MainCamera").GetComponent<Camera>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SetActiveInactive(int objectCount)
    {
        ExpandUI.SetActive(true);
        transform.position = new Vector3(m_Camera.transform.position.x +1.0f, m_Camera.transform.position.y,
            m_Camera.transform.position.z + 1.0f);
    }
}
