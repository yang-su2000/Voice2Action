using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExpandPanelScale : MonoBehaviour, ExpandPanelInterface
{
    // Start is called before the first frame update

    public GameObject ExpandUI;
    private static Camera m_Camera;
    void Start()
    {
        ExpandUI.SetActive(false);
        m_Camera = GameObject.FindWithTag("MainCamera").GetComponent<Camera>();
        SceneManager.ActivateUI += SetActiveInactive;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SetActiveInactive(int objectCount)
    {
       
        ExpandUI.SetActive(true);
        var rect = ExpandUI.GetComponentInChildren<RectTransform>();
        rect.sizeDelta = new Vector2(75 * objectCount / 3, rect.rect.height);
        transform.position = new Vector3(m_Camera.transform.position.x, m_Camera.transform.position.y,
            m_Camera.transform.position.z + 1.0f);

    }
}