using System.Collections.Generic;
using UnityEngine;
using System;
using TMPro;
using UnityEngine.Assertions;
using UnityEngine.XR.Interaction.Toolkit;

namespace Voice2Action
{
    /// <summary>
    /// The main class of Expand, contains all core required components for the system. <br/>
    /// After Voice2Action executes the user's instructions, objects that got their status modified (i.e. selected) will fly onto the ExpandPanel. <br/>
    /// Other objects that are not modified will become transparent and non-interactable. <br/>
    /// Pressing the primary button on the RightRayInteractor will reset this step. <br/>
    /// </summary>
    public class SceneManager : MonoBehaviour
    {
        /// <value>Left Hand controller Ray Interactor</value>
        [SerializeField]
        private XRBaseInteractor m_LeftRayInteractor;
        
        /// <value>Right Hand controller Ray Interactor</value>
        [SerializeField]
        private XRBaseInteractor m_RightRayInteractor;
        
        [SerializeField]
        private Camera m_XROriginCamera;
        
        /// <value>Info Panel that holds all the information about a particular object</value>
        [SerializeField]
        private GameObject m_ShapeInfoPanel;
        
        [SerializeField]
        private GameObject m_ExpandPanel;
        
        /// <value>The currently hovered interactable.</value>
        private IXRHoverInteractable m_Interactable;
        
        /// <value>Tuple pair to keep track of proxy and original object. first is original object, second shape is proxy.</value>
        private List<(ShapeController, ShapeController)> m_ListExpandObject;
        
        /// <value>Parent GameObject that holds all the expanded objects</value>
        private GameObject m_ParentExpandedObjects;
        
        /// <value>Width of the Expand Panel</value>
        private float m_PanelWidth;
        
        /// <value>Height of the Expand Panel</value>
        private float m_PanelHeight;

        /// <value>XROrigin Camera</value>
        public Camera xrOriginCamera
        {
            get => m_XROriginCamera;
            set => m_XROriginCamera = value;
        } 
        
        /// <value>The Expand Panel that holds and displays all the expanded objects</value>
        public GameObject expandPanel
        {
            get => m_ExpandPanel;
            set => m_ExpandPanel = value;
        }
        
        /// <value>Maximum number of objects that are expanded and displayed on the Expand Panel</value>
        public const int k_MaxExpandNum = 8;
        
        /// <value>Invoked when one object is being activated. When invoked, it will call all InteractableTarget's expand_response.</value>
        public event Action<Transform> activateInteractable;
        
        /// <value>Invoked when one proxy is grabbed, to destroy all other proxy</value>
        public event Action<Transform> destroyObjectNotGrabbed;

        private void Start()
        {
            m_PanelWidth = m_ExpandPanel.GetComponent<MeshRenderer>().bounds.size.x / 8f;
            m_PanelHeight = m_ExpandPanel.GetComponent<MeshRenderer>().bounds.size.z / 4f;
            m_ListExpandObject = new List<(ShapeController, ShapeController)>();
            m_ParentExpandedObjects = m_ExpandPanel.transform.GetChild(0).transform.GetChild(0).gameObject;
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

        private void Update()
        {
            if (m_ListExpandObject.Count > 0) UpdateProxyPosition();
            Assert.AreEqual(m_ListExpandObject.Count, 0);

            if (m_ExpandPanel.activeSelf)
            {
                var cameraPosition = xrOriginCamera.transform.position;
                var desiredPosition = new Vector3(cameraPosition.x, cameraPosition.y, cameraPosition.z + 0.5f);
                var smoothedPosition = Vector3.Lerp(m_ExpandPanel.transform.position, desiredPosition, 0.005f);
                m_ExpandPanel.transform.position = smoothedPosition;
            }
        }

        /// <summary>
        /// Updates the position of the proxies inside the Expand Panel
        /// </summary>
        private void UpdateProxyPosition()
        {
            m_ExpandPanel.SetActive(true);
            var originalPosition = xrOriginCamera.transform.position;
            m_ExpandPanel.transform.position = new Vector3(originalPosition.x , originalPosition.y, originalPosition.z + 0.5f);
            m_ExpandPanel.transform.up = (originalPosition - m_ExpandPanel.transform.position).normalized;

            for (var i = 0; i < Mathf.Min(m_ListExpandObject.Count, k_MaxExpandNum); i++)
            {
                var (original, proxy) = m_ListExpandObject[i];
                proxy.transform.parent = m_ParentExpandedObjects.transform;
                
                // change size of the object so that it fits within the canvas
                var bounds = original.shapeCollider.bounds;
                var expandWidthRatio = bounds.size.x / m_PanelWidth;
                var expandHeightRatio = bounds.size.y / m_PanelHeight;
                var expandLengthRatio = bounds.size.z / Mathf.Min(m_PanelWidth, m_PanelHeight);
                proxy.transform.localScale /= Mathf.Max(expandHeightRatio, expandWidthRatio, expandLengthRatio);

                // change position of proxy object
                var panelTransform = m_ExpandPanel.transform;
                // - 4 * panelTransform.right - 6 * panelTransform.forward
                var xIndex = i % 4;
                var yIndex = i / 4;
                var targetPosition = panelTransform.position + new Vector3 ((-3 + 2 * xIndex) * m_PanelWidth, (2 * yIndex - 1) * m_PanelHeight, -0.05f);
                // lerp proxy to expand panel
                proxy.interactableTarget.SetVariablesForLerp(targetPosition);
            }
            m_ListExpandObject.Clear();
        }
        
        /// <summary>
        /// Set up listener for hover for right/left RayInteractor.
        /// </summary>
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
        
        /// <summary>
        /// Destroy Interactor Events for Hover Enter/Exit on right/left RayInteractor.
        /// </summary>
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
        
        /// <summary>
        /// Sets the Shape Info of an interactable if it's a "XRGrabInteractable" object, and sets the "showPanel" parameter to true.
        /// </summary>
        /// <param name="args">Input parsed automatically by XRI</param>
        private void OnHoverEntered(HoverEnterEventArgs args)
        {
            m_Interactable = args.interactableObject;
            if (m_Interactable == null) return;
            if (m_Interactable is XRGrabInteractable)
            {
               SetShapeInfo(m_Interactable as XRGrabInteractable, true);
            }
        }
        
        /// <summary>
        /// Sets the Shape Info of an interactable if it's a "XRGrabInteractable" object, and sets the "showPanel" parameter to false.
        /// </summary>
        /// <param name="args">Input parsed automatically by XRI</param>
        private void OnHoverExited(HoverExitEventArgs args)
        { 
            m_Interactable = args.interactableObject;
            if (m_Interactable is XRGrabInteractable)
            {
                SetShapeInfo(m_Interactable as XRGrabInteractable, false);
            }
        }

        /// <summary>
        /// Display info panel.
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
            var interactableTarget = xrGrabInteractable.GetComponent<InteractableTarget>();
            if (interactableTarget == null)
            {
                // a random grab interactable that is not an object we are interested in, probably a grab-able panel
                m_ShapeInfoPanel.SetActive(false);
                return;
            }
            if (interactableTarget.isProxy == false)
            {
                // only show info on proxy objects
                m_ShapeInfoPanel.SetActive(false);
                return;
            }
            var shapeController = interactableTarget.originObject.GetComponent<ShapeController>();
            if (shapeController == null)
            {
                // this could actually be bad, every interactable target should has shape controller attached to it
                m_ShapeInfoPanel.SetActive(false);
                throw new Exception("hovered original object has no shape controller");
            }
            m_ShapeInfoPanel.SetActive(true);
            m_ShapeInfoPanel.transform.localPosition = new Vector3(7,3,1);
            var shapeInfo = shapeController.GetShapeInfo();
            var infoText = m_ShapeInfoPanel.transform.GetChild(0).transform.GetChild(0).transform.GetChild(0).gameObject;
            if (infoText.transform.childCount == 0)
            {
                for (var i = 0; i < shapeInfo.Length; i++)
                {
                    VoiceIntentController.UpdateMessageDisplay("propertyName propertyValue", infoText);
                }
                VoiceIntentController.UpdateMessageDisplay("<color=white>Properties</color>", infoText);
            }
            var text = infoText.GetComponentsInChildren<TextMeshProUGUI>();
            for (int i = 1; i < text.Length; i++)
            {
                text[i].text = $"<color=white>{shapeInfo[i - 1].Item1}    {shapeInfo[i - 1].Item2}</color>";
            }
        }
        
        /// <summary>
        /// Add original and proxy object in this function, at the end of the frame, it would lerp all proxy object in front of users.
        /// </summary>
        /// <param name="original">original ShapeController</param>
        public void AddExpandingAndProxy(ShapeController original)
        {
            m_ExpandPanel.SetActive(true);
            var proxy = original.interactableTarget.MakeProxy();
            if (m_ListExpandObject.Count < k_MaxExpandNum)
            {
                // before this, make sure m_ExpandPanel is activated
                Assert.AreEqual(m_ExpandPanel.activeSelf, true);
                m_ListExpandObject.Add((original, proxy));
            }
            else
            {
                Destroy(proxy.gameObject);
            }
        }

        /// <summary>
        /// Destroy all proxy objects.
        /// </summary>
        public void ClearProxies()
        {
            for (var i = m_ParentExpandedObjects.transform.childCount - 1; i >= 0; i--)
            {
                Destroy(m_ParentExpandedObjects.transform.GetChild(i).gameObject);
            }
        }
        
        /// <summary>
        /// Tell the sceneManager, some InteractableTarget is being activated.
        /// </summary>
        /// <param name="otherTransform">transform of the object being called, used as the center of expand</param>
        public void NotifyActivated(Transform otherTransform)
        {
            activateInteractable?.Invoke(otherTransform);
        }
        
        /// <summary>
        /// Notify all proxy objects that 1 proxy object is being grabbed, and destroy the rest.
        /// </summary>
        /// <param name="grabbedProxyObject">Transform of be proxy object being grabbed</param>
        public void NotifyProxySelected(Transform grabbedProxyObject)
        {
            m_ExpandPanel.SetActive(false);
            destroyObjectNotGrabbed?.Invoke(grabbedProxyObject);
        }
    }
}

