using System;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Voice2Action.Samples.CityDemo.Scripts
{
    /// <summary>
    /// Inherited class of Embeddings if users want to add new property mappings to the system.
    /// </summary>
    /// <remarks>
    /// A pair of (propertyMap attribute, AddProperty function) is required for each new property mapping.<br/>
    /// 1. propertyMap: a dictionary with string literal as key, user-defined type/instance as value.<br/>
    /// 2. AddProperty: setter function to propertyMap.<br/>
    /// </remarks>
    public class MyEmbeddings : Embeddings
    {
        // <Abstract-Code-Example>
        // public static readonly Dictionary<string, object> m_PropertyMap = new();
        // public static void AddProperty(string propertyName, propertyType propertyValue)
        // {
        //     m_PropertyMap[propertyName] = propertyValue;
        // }
        // </Abstract-Code-Example>
        // -------------------------Caution----------------------
        // m_PropertyMap MUST be public and of Type Dictionary<string, object>, there are important for Voice2Action to work properly.
        // The reason behind is that we will use reflection to match these information.
        // -------------------------Caution----------------------
        
        private Dictionary<string, object> m_AddressMap = new()
        {
            // {"Voice2Action Origin", new List{ 40.759f, 40.760f, -73.947f, -73.948f },
        };

        /// <value>
        /// Example property mapping: address.
        /// </value>
        /// <remarks>
        /// Used for reflection in PropertyExecutor. <br/>
        /// Key: must be a string literal, e.g. "Main Street", "Voice2Action Origin". <br/>
        /// Value: customizable, here we use a tuple to denote the (x1, x2, z1, z2) range position of the "address", where y-axis (height) is ignored. <br/>
        /// Users can <br/>
        /// 1. define default (key, value) pairs. <br/>
        /// 2. let the system to update them when the scene starts. <br/>
        /// If choosing 1., write it in the dictionary directly. <br/>
        /// If choosing 2., use "AddProperty(...)" function to update by calling it in "InitMyInteractable(...)". <br/>
        /// </remarks>
        public Dictionary<string, object> addressMap
        {
            get => m_AddressMap;
            set => m_AddressMap = value;
        }
        
        /// <summary>
        /// Add/Modify address mapping to/of the system.
        /// </summary>
        /// <remarks>
        /// Note that the propertyType ("GameObject") is highly customizable, it can be any type as long as the user properly defines how the actual propertyValue,
        /// i.e., (x1, x2, z1, z2) position of the GameObject is calculated.
        /// </remarks>
        /// <param name="addressName">Key, e.g. "Main Street"</param>
        /// <param name="addressObject">Value, e.g. GameObject, Transform, any type that can be used to determine the "address" of this instance.</param>
        private void AddAddress(string addressName, GameObject addressObject)
        {
            var bound = addressObject.GetComponent<MeshCollider>().bounds;
            var bottomLeft = bound.center - bound.extents;
            var upperRight = bound.center + bound.extents;
            m_AddressMap[addressName] = new List<float>{ bottomLeft.x, upperRight.x, bottomLeft.z, upperRight.z };
        }
        
        /// <summary>
        /// The entry point for initializing all property LLMs (large language models). <br/>
        /// </summary>
        /// <param name="classifier">The "LLM for Classification".</param>
        /// <param name="extractor">The "LLM for Extraction".</param>
        /// <param name="executor">The "LLM for Execution".</param>
        public override void InitProperty(PropertyClassifier classifier, PropertyExtractor extractor, PropertyExecutor executor)
        {
            // add new actions/classes (TODO: we will add in future package version)
            // classifier.AddAction(order: 10, newAction: "interact");
            
            // add atomic actions and examples
            // the system will be updated in what actions to be performed
            extractor.AddAtomicAction(action: "select", order: 10, newAtomicAction: "GetColor");
            extractor.AddExtractionExamples(
                action: "select", 
                input: "get yellow houses", 
                output: "GetColor: yellow, GetShape: houses"
            );
            extractor.AddAtomicAction(action: "select", order: 10, newAtomicAction: "GetAddress");
            extractor.AddExtractionExamples(
                action: "select", 
                input: "select this building on albert street", 
                output: "GetShape: this building, GetAddress: albert street"
            );
            extractor.AddAtomicAction(action: "modify", order: 10, newAtomicAction: "ModifyColor");
            extractor.AddExtractionExamples(
                action: "modify", 
                input: "make the buildings far, then change to red", 
                output: "ModifyColor: red, ModifyPosition: far"
            );
            
            // add function call group
            // the system will be updated in how actions can be performed
            // note that some functions are doing embedding matches (i.e. GetAddress), they are added differently: see MyEmbeddings.cs
            executor.functionCallGroups.Add(
                new PropertyExecutor.FunctionCallGroup(
                    functionName: "GetColor",
                    functionDescription: "Extract the RGB value of given color."
                )
            );
            executor.functionCallGroups.Add(
                new PropertyExecutor.FunctionCallGroup(
                    functionName: "ModifyColor",
                    functionDescription: "Return the RGB value of given color."
                )
            );
        }
        
        /// <summary>
        /// Initializes user-defined components of the given parent interactable in the scene. <br/>
        /// </summary>
        /// <param name="defaultParentInteractable">Default game object that holds all interactable targets.</param>
        /// <param name="myParentInteractable">Optional (can be null), user-defined game object that holds all interactable targets.</param>
        /// <param name="myShapeControllerType">Type of user-defined ShapeController.</param>
        public override void InitMyInteractable(GameObject defaultParentInteractable, GameObject myParentInteractable, Type myShapeControllerType)
        {
            // initialize each instance by their object type
            foreach (Transform category in defaultParentInteractable.transform)
            {
                var parentShapeType = category.gameObject.name;
                foreach (Transform instance in category) InitMyInstance(instance.gameObject, parentShapeType);
            }

            if (myParentInteractable == null) return;
            // initialize customized propertyMappings, i.e. Address of each object
            foreach (Transform myChildTransform in myParentInteractable.transform)
            {
                AddAddress(myChildTransform.name, myChildTransform.gameObject);
            }
        }

        /// <summary>
        /// Initializes the components of the given instance for ExpandPanel to expand them, user can customize its behavior.
        /// </summary>
        /// <param name="instance">Game object that might be expanded in the future.</param>
        /// <param name="shapeType">Object type of the given instance.</param>
        private void InitMyInstance(GameObject instance, string shapeType)
        {
            var myRenderer = instance.GetComponent<Renderer>();
            if (myRenderer != null)
            {
                if (shapeType == "Buildings")
                {
                    myRenderer.material.color = new Color(Random.value, Random.value, Random.value);
                }
                int modeID = Shader.PropertyToID("_Mode");
                myRenderer.material.SetFloat(modeID, 2);
            }
            if (shapeType == "Cars") // all car components should have the same color
            {
                var colorGroup = new Color(Random.value, Random.value, Random.value);
                foreach (Transform childInstance in instance.transform)
                {
                    var childRenderer = childInstance.GetComponent<Renderer>();
                    childRenderer.material.color = colorGroup;
                }
            }
        }
    }
}