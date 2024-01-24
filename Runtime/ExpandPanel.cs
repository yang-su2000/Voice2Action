// using System;
using UnityEngine;

namespace xrc_students_fa2023_sp06_en268_jx288_ys724.Runtime
{
    public class ExpandPanel : MonoBehaviour
    {
        public GameObject m_ExpandUI;
        // private static Camera m_Camera;
        // public float smoothSpeed = 0.125f;

        // private Transform CameraTransform;
        
        private void Start()
        {
            // m_Camera = GameObject.FindWithTag("MainCamera").GetComponent<Camera>();
            SceneManager.activateUI += SetActive;
            // CameraTransform = m_Camera.transform;
        }
        
        private void SetActive(int objectCount)
        {
            m_ExpandUI.SetActive(true);
            /*var cameraPosition = m_Camera.transform.position;
            transform.position = new Vector3(cameraPosition.x, cameraPosition.y, cameraPosition.z + 1.0f);*/
        }

        // private void Update()
        // {
        //     if (m_ExpandUI is not null && m_ExpandUI.activeSelf)
        //     {
        //         Vector3 cameraPosition = CameraTransform.position;
        //         Vector3 desiredPosition = new Vector3(cameraPosition.x, cameraPosition.y, cameraPosition.z + 1.0f);
        //         Vector3 smoothedPosition = Vector3.Lerp(transform.position, desiredPosition, smoothSpeed);
        //         m_ExpandUI.transform.position = smoothedPosition;
        //     }
        //     
        // }
    }
}