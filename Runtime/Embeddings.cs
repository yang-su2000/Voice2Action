using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

namespace xrc_students_fa2023_sp06_en268_jx288_ys724.Runtime
{
    /// <summary>
    /// Storage class for all property mappings and initialization of all required components of Voice2Action (except function calling). <br/>
    /// Fields in this class should be updated as soon as the scene starts, and they are used when function calling with similarity match is attached. <br/>
    /// <br/>Details: <br/>
    /// When the system recognizes that the user's instruction (1) contains one of the mappings declared here,
    /// it matches the closest key in that dictionary, which maps to the actual type/instance in the game engine. <br/>
    /// Users can add their own property mappings by inheriting this class, see MyEmbeddings class for details as provided in the CityDemo scripts. <br/>
    /// For (1) to work, functions need to be attached with a custom PropertyMethodAttribute with the name of the property mappings, so that the system can
    /// recognize the user's instruction by fetching this attribute during reflection, see readme for example usage. <br/>
    /// </summary>
    /// <remarks>This class is expected to be actual embedding vector matches in future package version, right now it is an under-optimized version by explicit rankings.</remarks>
    public class Embeddings: MonoBehaviour
    {
        /// <summary>
        /// The entry point for initializing all property LLMs (large language models). <br/>
        /// This class is intentionally left blank so user can override it, see CityDemo.Scripts.MyEmbeddings for its example usage. <br/>
        /// </summary>
        /// <param name="classifier">The "LLM for Classification".</param>
        /// <param name="extractor">The "LLM for Extraction".</param>
        /// <param name="executor">The "LLM for Execution".</param>
        public virtual void InitProperty(PropertyClassifier classifier, PropertyExtractor extractor, PropertyExecutor executor) {}
        
        /// <summary>
        /// Initializes the default components of the given parent interactable in the scene. <br/>
        /// By default, this class initialize all object types under the given parent interactable by checking each children's object name. <br/>
        /// Hence, the default behavior is that each children object is expected to contain all objects with the same type (shape). <br/>
        /// User can choose to not use this, however, by doing it differently in InitMyInteractable(...). <br/>
        /// </summary>
        /// <param name="parentInteractable">Default game object that holds all interactable targets.</param>
        /// <param name="myShapeControllerType">Type of user-defined ShapeController.</param>
        public void InitInteractable(GameObject parentInteractable, Type myShapeControllerType)
        {
            foreach (Transform category in parentInteractable.transform)
            {
                var parentShapeType = category.gameObject.name;
                m_ShapeMap[parentShapeType] = parentShapeType;
                foreach (Transform instance in category) InitInstance(instance.gameObject, parentShapeType, myShapeControllerType);
            }
        }
        
        /// <summary>
        /// Initializes user-defined components of the given parent interactable in the scene.<br/>
        /// The function is intentionally left blank so the user can override it, see CityDemo.Scripts.MyEmbeddings for its example usage. <br/>
        /// </summary>
        /// <param name="defaultParentInteractable">Default game object that holds all interactable targets.</param>
        /// <param name="myParentInteractable">User-defined game object that holds all interactable targets.</param>
        /// <param name="myShapeControllerType">Type of user-defined ShapeController.</param>
        public virtual void InitMyInteractable(GameObject defaultParentInteractable, GameObject myParentInteractable, Type myShapeControllerType) {}
        
        /// <summary>
        /// Initializes the components of the given instance for ExpandPanel to expand them, and their other default components.
        /// </summary>
        /// <param name="instance">Game object that might be expanded in the future.</param>
        /// <param name="shapeType">Object type of the given instance.</param>
        /// <param name="myShapeControllerType">Type of user-defined ShapeController.</param>
        private void InitInstance(GameObject instance, string shapeType, Type myShapeControllerType)
        {
            var xrGrabInteractable = instance.AddComponent<XRGrabInteractable>();
            var interactableTarget = instance.AddComponent<InteractableTarget>();
            interactableTarget.m_IsVoodoo = false;
            xrGrabInteractable.useDynamicAttach = true;
            xrGrabInteractable.throwOnDetach = false;
            instance.GetComponent<Rigidbody>().useGravity = false;
            instance.GetComponent<Rigidbody>().isKinematic = true;
            var shapeController = (ShapeController) instance.AddComponent(myShapeControllerType);
            shapeController.m_Shape = shapeType;
            shapeController.InitShape();
        }
        
        /// <value>The default object type.</value>
        public const string k_DefaultShape = "object";
        
        /// <summary>
        /// Stores object types, used for reflection in PropertyExecutor atomic functions. <br/>
        /// When the scene starts, all object types under the "Parent Interactable" hierarchy of the VoiceIntentController class should be loaded. <br/>
        /// e.g. User: "make the car bigger" -> "car" object type is matched. <br/>
        /// </summary>
        /// <value>Object type property mapping.</value>
        /// <remarks>
        /// This functionality is expected to be implemented with vision model, so the system can recognize object types by their visual appearance. <br/>
        /// We will add that in future package version.
        /// </remarks>
        public Dictionary<string, object> m_ShapeMap = new()
        {
            {k_DefaultShape, k_DefaultShape}, // default shape - it represents any object
        };
    }
}