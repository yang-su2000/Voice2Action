using System.Collections.Generic;
using UnityEngine;
using System;
using NUnit.Framework;
using Unity.XR.CoreUtils;
using UnityEngine.UI;
using UnityEngine.XR.Interaction.Toolkit;

namespace xrc_students_fa2023_sp06_en268_jx288_ys724.Runtime
{
    public class SceneManager : MonoBehaviour
    {
        [SerializeField]
        private XRBaseInteractor m_LeftRayInteractor;

        [SerializeField]
        private XRBaseInteractor m_RightRayInteractor;
        
        [SerializeField]
        private Camera m_XROriginCamera;

        [SerializeField]
        private GameObject m_ShapeInfoPanel;
        /// <summary>
        ///     The currently hovered interactable
        /// </summary>
        private IXRHoverInteractable m_Interactable;
        
        /// <summary>
        ///     Invoked when one object is being activated. When invoked, it will call all InteractableTarget's
        ///     expand_response
        /// </summary>
        public static event Action<Transform> activateInteractable;
        public static event Action<int> activateUI; // <Debug Code>
        public static event Action<Transform> destroyObjectNotGrabbed;
        public const int k_MaxExpandNum = 8;

        private static List<(ShapeController, ShapeController)> m_ListExpandObject; //first is original object, second shape is voodoo
        private static GameObject m_ParentExpandedObjects;
        // private const float k_UpLeftDist = 0.1f;
        public float m_ObjectScale;
        public static GameObject m_ExpandPanel;
        private float m_PanelWidth;
        private float m_PanelHeight;
        

        private void Start()
        {
            m_ExpandPanel = GameObject.FindGameObjectWithTag("ExpandPanel");
            m_PanelWidth = m_ExpandPanel.GetComponent<MeshRenderer>().bounds.size.x / 8f;
            m_PanelHeight = m_ExpandPanel.GetComponent<MeshRenderer>().bounds.size.z / 4f;
            m_ListExpandObject = new List<(ShapeController, ShapeController)>();
            m_ParentExpandedObjects = m_ExpandPanel.GetNamedChild("Interactables");
            m_ExpandPanel.SetActive(false);
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
        private void Update()
        {
            if (m_ListExpandObject.Count > 0)
            {
                
                update_voodoo_position();
                
            }
            Assert.AreEqual(m_ListExpandObject.Count,0);

            if (m_ExpandPanel.activeSelf)
            {
                Vector3 cameraPosition = m_XROriginCamera.transform.position;
                Vector3 desiredPosition = new Vector3(cameraPosition.x, cameraPosition.y, cameraPosition.z + 0.5f);
                Vector3 smoothedPosition = Vector3.Lerp(m_ExpandPanel.transform.position, desiredPosition, 0.005f);
                m_ExpandPanel.transform.position = smoothedPosition;
            } 
        }

        private void update_voodoo_position()
        {
            // ActivateUI?.Invoke(m_List_Expand_Object.Count);
            m_ExpandPanel.SetActive(true);
            // expandPanel.transform.LookAt(m_XROriginCamera.transform.position);
            var originalPosition = m_XROriginCamera.transform.position;
            m_ExpandPanel.transform.position = new Vector3(originalPosition.x , originalPosition.y, originalPosition.z + 0.5f);
            m_ExpandPanel.transform.up = (originalPosition - m_ExpandPanel.transform.position).normalized;

           // expandPanel.transform.Rotate(expandPanel.transform.right, 90);

            for (var i = 0; i < Mathf.Min(m_ListExpandObject.Count, k_MaxExpandNum); i++)
            {
                (var original, var voodoo) = m_ListExpandObject[i];
                
                voodoo.transform.parent = m_ParentExpandedObjects.transform;
                
                // change size of the object so that it fits within the canvas
                var bounds = original.shapeCollider.bounds;
                var expandWidthRatio = bounds.size.x / m_PanelWidth;
                var expandHeightRatio = bounds.size.y / m_PanelHeight;
                var expandLengthRatio = bounds.size.z / Mathf.Min(m_PanelWidth, m_PanelHeight);
                voodoo.transform.localScale /= Mathf.Max(expandHeightRatio, expandWidthRatio, expandLengthRatio);

                // change position of voodoo object
                Transform panelTransform = m_ExpandPanel.transform;
                // - 4 * panelTransform.right - 6 * panelTransform.forward
                var xIndex = i % 4;
                var yIndex = i / 4;
                Vector3 targetPosition = panelTransform.position + new Vector3 ((-3 + 2 * xIndex) * m_PanelWidth, (2 * yIndex - 1) * m_PanelHeight, -0.05f);
                // // lerp voodoo to expand panel
                voodoo.interactableTarget.SetVariablesForLerp(targetPosition);
            }
            m_ListExpandObject.Clear();
        }
        /// <summary>
        ///     Add original and voodoo object in this function, at the end of the frame, it would lerp all
        ///     voodoo object in front of users
        /// </summary>
        /// <param name="original">original ShapeController</param>
        public static void add_Expanding_and_Voodoo(ShapeController original)
        {
            m_ExpandPanel.SetActive(true);
            ShapeController voodoo = original.interactableTarget.MakeVoodoo();
            if (m_ListExpandObject.Count < k_MaxExpandNum)
            {
                // before this, make sure m_ExpandPanel is activated
                Assert.AreEqual(m_ExpandPanel.activeSelf, true);
                m_ListExpandObject.Add((original, voodoo));
            }
            else
            {
                Destroy(voodoo.gameObject);
            }
        }

        /// <summary>
        ///     Destroy all voodoo object
        /// </summary>
        public static void ClearProxies()
        {
            for (int i = m_ParentExpandedObjects.transform.childCount - 1; i >= 0; i--)
            {
                Destroy(m_ParentExpandedObjects.transform.GetChild(i).gameObject);
            }
        }
        
        /// <summary>
        ///     Tell the sceneManager, some InteractableTarget is being activated
        /// </summary>
        /// <param name="transform">transform of the object being called, used as the center of expand</param>
        public static void notify_activated(Transform transform)
        {
            activateInteractable?.Invoke(transform);
        }
        /// <summary>
        ///     Notify all Voodoo objects that 1 voodoo object is being grabbed, and destroy the rest
        /// </summary>
        /// <param name="grabbedVoodooObject">Transform of be voodoo object being grabbed</param>
        public static void notify_Voodoo_selected(Transform grabbedVoodooObject)
        {
            m_ExpandPanel.SetActive(false);
            destroyObjectNotGrabbed?.Invoke(grabbedVoodooObject);
        }
        
        // set up listener for hover for right/left RayInteractor
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
               var hoveredOutline =  (m_Interactable as XRGrabInteractable).gameObject.GetComponent<Outline>();
               if (hoveredOutline != null)
               {
                   // hoveredOutline.OutlineWidth = 5;
               }
               SetShapeInfo(m_Interactable as XRGrabInteractable, true);
            }
        }
        
        private void OnHoverExited(HoverExitEventArgs args)
        { 
            m_Interactable = args.interactableObject;
            if (m_Interactable is XRGrabInteractable)
            {
                var hoveredOutline =  (m_Interactable as XRGrabInteractable).gameObject.GetComponent<Outline>();
                if (hoveredOutline != null)
                {
                    // hoveredOutline.OutlineWidth = 0;
                }
                SetShapeInfo(m_Interactable as XRGrabInteractable, false);
            }
        }

        /// <summary>
        ///     Display info panel
        /// </summary>
        /// <param name="xrGrabInteractable">Interactable Object that was grabbed by the user</param>
        /// <param name="showPanel">Debug Panel that shows information about the shape</param>
        /// <exception cref="Exception">hovered original object has no shape controller</exception>
        private void SetShapeInfo(XRGrabInteractable xrGrabInteractable, bool showPanel)
        {
            if (!showPanel)
            {
                m_ShapeInfoPanel.SetActive(false);
                return;
            }
            InteractableTarget interactableTarget = xrGrabInteractable.GetComponent<InteractableTarget>();
            if (interactableTarget == null)
            {
                // a random grab interactable that is not an object we are interested in, probably a grab-able panel
                m_ShapeInfoPanel.SetActive(false);
                return;
            }
            if (interactableTarget.m_IsVoodoo == false)
            {
                // only show info on voodoo objects
                m_ShapeInfoPanel.SetActive(false);
                return;
            }
            var shapeController = interactableTarget.m_OriginObject.GetComponent<ShapeController>();
            if (shapeController == null)
            {
                // this could actually be bad, every interactable target should has shape controller attached to it
                m_ShapeInfoPanel.SetActive(false);
                throw new Exception("hovered original object has no shape controller");
            }
            m_ShapeInfoPanel.SetActive(true);
            m_ShapeInfoPanel.transform.localPosition = new Vector3(7,3,1);
     //       m_ShapeInfoPanel.transform.rotation = m_XROriginCamera.transform.rotation;
            var text = m_ShapeInfoPanel.GetComponentsInChildren<Text>();
            string[] shapeInfo = shapeController.GetShapeInfo();
            for (int i = 0; i < shapeInfo.Length; i++)
            {
                text[i].text = shapeInfo[i];
            }
        }
    }
}

