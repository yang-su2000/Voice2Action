using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExpandPanel : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject expandUI;
    private static Camera m_Camera;
    void Start()
    {
        m_Camera = GameObject.FindWithTag("MainCamera").GetComponent<Camera>();
        SceneManager.activateUI += SetActive;
    }
    

    public void SetActive(int objectCount)
    {
        expandUI.SetActive(true);
        transform.position = new Vector3(m_Camera.transform.position.x , m_Camera.transform.position.y,
            m_Camera.transform.position.z + 1.0f);
    }
}
