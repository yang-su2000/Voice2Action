using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExpandPanel : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject ExpandUI;
    private static Camera m_Camera;
    void Start()
    {
        //ExpandUI.SetActive(false);
        SceneManager.activateUI += SetActive;
        m_Camera = GameObject.FindWithTag("MainCamera").GetComponent<Camera>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SetActive(int objectCount)
    {
        ExpandUI.SetActive(true);
        transform.position = new Vector3(m_Camera.transform.position.x , m_Camera.transform.position.y,
            m_Camera.transform.position.z + 1.0f);
    }
}
