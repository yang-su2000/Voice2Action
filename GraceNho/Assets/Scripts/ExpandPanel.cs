using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExpandPanel : MonoBehaviour
{

    public GameObject ExpandUI;
    private static Camera m_Camera;
    void Start()
    {
        SceneManager.ActivateUI += SetActive;
        m_Camera = GameObject.FindWithTag("MainCamera").GetComponent<Camera>();
    }

    public void SetActive(int objectCount)
    {
        ExpandUI.SetActive(true);
        transform.position = new Vector3(m_Camera.transform.position.x , m_Camera.transform.position.y,
            m_Camera.transform.position.z + 1.0f);
    }
}
