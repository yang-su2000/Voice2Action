using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Assertions;
using UnityEngine.XR.Interaction.Toolkit;

namespace Voice2Action
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
        /// <value>User specified directory name to store embedding data of the current Unity Scene.</value>
        public string m_EmbeddingDataDir = "";
        
        private Dictionary<string, Dictionary<string, IReadOnlyList<double>>> m_EmbeddingMap = new();
        
        private Dictionary<string, object> m_ShapeMap = new()
        {
            {k_DefaultShape, k_DefaultShape}, // default shape - it represents any object
        };
        
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
        public Dictionary<string, object> shapeMap
        {
            get => m_ShapeMap;
            set => m_ShapeMap = value;
        }
        
        /// <value>The default object type.</value>
        public const string k_DefaultShape = "object";

        /// <summary>
        /// [Deprecated] Initialize all embedding data of the given property functions.
        /// </summary>
        /// <param name="myShapeControllerType">Type of user-defined ShapeController, used to check existence of atomic property functions.</param>
        /// <param name="propertyFunctionNames">Names of property functions.</param>
        /// <returns>None.</returns>
        public async Task InitEmbeddings(Type myShapeControllerType, List<string> propertyFunctionNames)
        {
            foreach (var functionName in propertyFunctionNames)
            {
                // the atomic function must exist
                var methodInfo = myShapeControllerType.GetMethod(functionName);
                if (methodInfo == null)
                {
                    Debug.LogWarning($"propertyFunction with name {functionName} does not exist, skipped");
                    continue;
                }
                // skip methods without property method attribute to denote "embedding match"
                var methodAttribute = methodInfo.GetCustomAttribute<ShapeController.PropertyMethodAttribute>();
                if (methodAttribute == null) continue;
                // the attribute must point to the storage field of the embedding
                var propertyName = methodAttribute.property;
                var fieldInfo = GetType().GetProperty(propertyName);
                if (fieldInfo == null)
                {
                    Debug.LogWarning($"propertyFunction with name {functionName} does not have corresponding fieldInfo to access embeddings, get {propertyName}");
                    continue;
                }
                var fieldValue = fieldInfo.GetValue(this);
                // this should never happen because Embedding class is accessed right before this line
                if (fieldValue == null)
                {
                    Debug.LogWarning($"fieldValue with name {propertyName} is not field member of the given embedding");
                    continue;
                }
                // the embedding storage must be the following type for auto casting
                Dictionary<string, object> fieldDict = fieldValue as Dictionary<string, object>;
                if (fieldDict == null)
                {
                    Debug.LogWarning($"fieldValue with name {fieldInfo.Name} must be of type {typeof(Dictionary<string, object>)} for dynamic casting");
                    continue;
                }
                await ProcessEmbeddingData(fieldDict, propertyName);
            }
        }

        /// <summary>
        /// Loads and saves embedding data for the given propertyMap and its name.
        /// </summary>
        /// <param name="propertyMap">A propertyMap instance, i.e. shapeMap.</param>
        /// <param name="propertyMapName">The string name of the propertyMap, i.e. "shapeMap".</param>
        /// <returns>Whether the process succeeds.</returns>
        public async Task<bool> ProcessEmbeddingData(Dictionary<string, object> propertyMap, string propertyMapName)
        {
            if (m_EmbeddingMap.ContainsKey(propertyMapName)) return true;
            // create embedding dir path if it does not exist
            DirectoryInfo gameRootDir = Directory.GetParent(Application.dataPath);
            if (gameRootDir == null)
            {
                Debug.LogWarning($"gameRootDir does not exist given Assets folder is {Application.dataPath}, exiting");
                return false;
            }
            string fileDir = Path.Combine(gameRootDir.FullName, "Embeddings", m_EmbeddingDataDir);
            if (!Directory.Exists(fileDir))
            {
                Directory.CreateDirectory(fileDir);
            }
            // create embedding file path if it does not exist
            string fileName = $"model={Utils.k_EmbeddingModel}-dim={Utils.k_EmbeddingDim}-property={propertyMapName}.txt";
            string filePath = Path.Combine(fileDir, fileName);
            if (!File.Exists(filePath))
            {
                await using (File.Create(filePath)) {}
            }
            Dictionary<string, IReadOnlyList<double>> propertyMapData = new Dictionary<string, IReadOnlyList<double>>();
            // load existing file content to propertyMapData
            foreach (var line in File.ReadLines(filePath))
            {
                // each line of the file is expected to be formatted as
                // {property_name},{embed_dim_1},{embed_dim_2},...,{embed_dim_{Utils.k_EmbeddingDim - 1}}
                var parts = line.Split(',');
                Assert.AreEqual(parts.Length, Utils.k_EmbeddingDim + 1);
                var propertyName = parts[0];
                List<double> propertyEmbedding = new List<double>();
                for (int i = 1; i < parts.Length; i++)
                {
                    propertyEmbedding.Add(double.Parse(parts[i]));
                }
                propertyMapData[propertyName] = propertyEmbedding;
            }
            // save remaining content of propertyMap to both propertyMapData and local file for future reuse
            int debugCount = 0;
            await using (var writer = new StreamWriter(filePath, true))
            {
                foreach (var propertyName in propertyMap.Keys)
                {
                    if (propertyMapData.ContainsKey(propertyName)) continue;
                    IReadOnlyList<double> propertyEmbedding = await VoiceIntentController.CallEmbedding(propertyName);
                    propertyMapData[propertyName] = propertyEmbedding;
                    string propertyData = propertyName;
                    for (int i = 0; i < Utils.k_EmbeddingDim; i++)
                    {
                        propertyData += "," + propertyEmbedding[i].ToString("G");
                    }
                    await writer.WriteLineAsync(propertyData);
                    debugCount += 1;
                }
            }
            m_EmbeddingMap[propertyMapName] = propertyMapData;
            Debug.Log($"{propertyMapName} propertyMap is processed with {debugCount} embedding calls");
            return true;
        }

        /// <summary>
        /// Get closest embedding match by retrieval.
        /// </summary>
        /// <param name="userInput">Input user message.</param>
        /// <param name="propertyMapName">The string name of the propertyMap, i.e. "shapeMap".</param>
        /// <returns>A tuple of (one key from the given property map, its corresponding cos-similarity score to userInput).</returns>
        public async Task<(string, double)> GetEmbedding(string userInput, string propertyMapName)
        {
            double GetCosSimilarity(IReadOnlyList<double> vectorA, IReadOnlyList<double> vectorB)
            {
                double dotProduct = 0;
                double normA = 0;
                double normB = 0;
                for (int i = 0; i < vectorA.Count; i++)
                {
                    dotProduct += vectorA[i] * vectorB[i];
                    normA += Math.Pow(vectorA[i], 2);
                    normB += Math.Pow(vectorB[i], 2);
                }
                return dotProduct / (Math.Sqrt(normA) * Math.Sqrt(normB));
            }
            string retName = Utils.k_FailureResponse;
            double maxSimilarity = double.MinValue;
            // fetch target embeddings
            if (!m_EmbeddingMap.TryGetValue(propertyMapName,
                    out Dictionary<string, IReadOnlyList<double>> targetVectors))
            {
                Debug.LogWarning($"propertyMap with name {propertyMapName} does not exist");
                return (retName, maxSimilarity);
            }
            // fetch query embedding
            IReadOnlyList<double> queryVector = await VoiceIntentController.CallEmbedding(userInput);
            foreach (var (targetName, targetVector) in targetVectors)
            {
                double similarity = GetCosSimilarity(queryVector, targetVector);
                if (similarity > maxSimilarity)
                {
                    maxSimilarity = similarity;
                    retName = targetName;
                }
            }
            return (retName, maxSimilarity);
        }
        
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
            interactableTarget.isProxy = false;
            xrGrabInteractable.useDynamicAttach = true;
            xrGrabInteractable.throwOnDetach = false;
            instance.GetComponent<Rigidbody>().useGravity = false;
            instance.GetComponent<Rigidbody>().isKinematic = true;
            var shapeController = (ShapeController) instance.AddComponent(myShapeControllerType);
            shapeController.shape = shapeType;
            shapeController.InitShape();
            shapeController.InitMyShape();
        }
        
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
                shapeMap[parentShapeType] = parentShapeType;
                foreach (Transform instance in category) InitInstance(instance.gameObject, parentShapeType, myShapeControllerType);
            }
        }
        
        /// <summary>
        /// Initializes user-defined components of the given parent interactable in the scene.<br/>
        /// The function is intentionally left blank so the user can override it, see CityDemo.Scripts.MyEmbeddings for its example usage. <br/>
        /// </summary>
        /// <param name="defaultParentInteractable">Default game object that holds all interactable targets.</param>
        /// <param name="myParentInteractable">Optional (can be null), user-defined game object that holds all interactable targets.</param>
        /// <param name="myShapeControllerType">Type of user-defined ShapeController.</param>
        public virtual void InitMyInteractable(GameObject defaultParentInteractable, GameObject myParentInteractable, Type myShapeControllerType) {}
    }
}