using System;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Reflection;
using System.Threading.Tasks;
using System.Text;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json;
// using NJsonSchema;
using OpenAI;
using UnityEngine;

namespace Voice2Action
{
    /// <summary>
    /// A minimal implementation of the "LLM for Execution" step in Voice2Action. <br/>
    /// This implementation is not optimized and only used for inference. <br/>
    /// We will add reward modeling, atomic function generation and alignment training via user feedback of the model in future package version.
    /// </summary>
    public class PropertyExecutor: MonoBehaviour
    {
        [SerializeField]
        private List<FunctionCallGroup> m_FunctionCallGroups = new()
        {
            // ------------Added for CityDemo in MyShapeController, user can define their own through code or hierarchy------------
            // new FunctionCallGroup(
            //     functionName: "GetColor",
            //     functionDescription: "Extract the RGB value of given color."
            // ),
            // ------------Added for CityDemo in MyShapeController, user can define their own through code or hierarchy------------
            new FunctionCallGroup(
                functionName: "GetDistance",
                functionDescription: "Extract the start and end range."
            ),
            new FunctionCallGroup(
                functionName: "GetDirection",
                functionDescription: "Extract the 3-DOF change in direction",
                functionParams: new List<FunctionParamGroup>
                {
                    new (
                        paramName: "direction",
                        paramExamples: new List<Utils.FewShotPair>
                        {
                            new (input: "left", output: "[-1, 0, 0]"),
                            new (input: "in front of", output: "[0, 0, 1]"),
                            new (input: "below", output: "[0, -1, 0]"),
                        }),
                }),
            new FunctionCallGroup(
                functionName: "GetSuperlative",
                functionDescription: "Given a superlative adjective, extract the 6-DOF change in size and position.",
                functionParams: new List<FunctionParamGroup>
                {
                    new (
                        paramName: "size",
                        paramExamples: new List<Utils.FewShotPair>
                        {
                            new (input: "highest", output: "[0, 1, 0]"),
                        }),
                    new (
                        paramName: "position",
                        paramExamples: new List<Utils.FewShotPair>
                        {
                            new (input: "closest", output: "[-1, -1, -1]"),
                        }),
                }),
            // ------------Added for CityDemo in MyShapeController, user can define their own through code or hierarchy------------
            // new FunctionCallGroup(
            //     functionName: "ModifyColor",
            //     functionDescription: "Return the RGB value of given color."
            // ),
            // ------------Added for CityDemo in MyShapeController, user can define their own through code or hierarchy------------
            new FunctionCallGroup(
                functionName: "ModifyScale",
                functionDescription: "Return the size change in x-axis width, y-axis height, z-axis width.",
                functionParams: new List<FunctionParamGroup>
                {
                    new (
                        paramName: "size",
                        paramExamples: new List<Utils.FewShotPair>
                        {
                            new (input: "bigger", output: "[1, 1, 1]"),
                            new (input: "very narrow", output: "[-2, 0, -2]"),
                            new (input: "a bit taller", output: "[0, 0.5, 0]"),
                        }
                    ),
                }),
            new FunctionCallGroup(
                functionName: "ModifyPosition",
                functionDescription: "Return the positional change.",
                functionParams: new List<FunctionParamGroup>
                {
                    new (
                        paramName: "value",
                        paramDescription: "the strength of modification.",
                        paramExamples: new List<Utils.FewShotPair>
                        {
                            new (input: "three times further", output: "3"),
                            new (input: "super far", output: "5"),
                            new (input: "closer", output: "-1"),
                        }
                    ),
                }),
        };

        /// <value>Contains atomic property functions for the model to use, along with function and parameter description and their example usage.</value>
        public List<FunctionCallGroup> functionCallGroups
        {
            get => m_FunctionCallGroups;
            set => m_FunctionCallGroups = value;
        }
        
        /// <value>System instruction for the execution model.</value>
        public const string k_ExecutionInstruction =
            "You convert instructions to structured function calls. Your response must contain only the provided functions.";
        
        /// <summary>
        /// A group containing essential elements for executing a property function.
        /// </summary>
        [Serializable]
        public struct FunctionCallGroup
        {
            [SerializeField] private string m_Name;
            [SerializeField] private string m_Description;
            [SerializeField] private List<FunctionParamGroup> m_ParamGroups;

            /// <value>Function name.</value>
            public string name 
            { 
                get => m_Name; 
                set => m_Name = value; 
            }
    
            /// <value>Function description.</value>
            public string description 
            { 
                get => m_Description; 
                set => m_Description = value; 
            }
    
            /// <value>Optional, function parameters.</value>
            public List<FunctionParamGroup> paramGroups 
            { 
                get => m_ParamGroups; 
                set => m_ParamGroups = value ?? new List<FunctionParamGroup>(); 
            }
            
            /// <param name="functionName">Function name, i.e. MyFunctionName(...)</param>
            /// <param name="functionDescription">Function description, a summarization of its functionality. </param>
            /// <param name="functionParams">Optional, function parameters, nested with all of their information.</param>
            public FunctionCallGroup(string functionName, string functionDescription, List<FunctionParamGroup> functionParams = null)
            {
                m_Name = functionName;
                m_Description = functionDescription;
                m_ParamGroups = functionParams;
                m_ParamGroups ??= new List<FunctionParamGroup>(); // if null, initialize to empty
            }

            /// <summary>
            /// Add the "required" key in the given JsonSchema.
            /// </summary>
            /// <param name="funcObject">The JsonSchema of the current property function, will be updated upon execution of this method.</param>
            public void AddParamsRequirement(ref JObject funcObject)
            {
                var requiredParams = new JArray();
                foreach (var paramGroup in paramGroups)
                {
                    if (paramGroup.required) requiredParams.Add(paramGroup.name);
                }
                funcObject.Add("required", requiredParams);
            }
            
            /// <param name="methodInfo">Information of current property function through reflection.</param>
            /// <param name="inputs">Function arguments.</param>
            /// <returns>A string as if the function is called, i.e. "MyFunctionName(MyArgType1 MyArg1, MyArgType2 MyArg2, ...)"</returns>
            public static string PrettyPrintFunctionCall(MethodInfo methodInfo, object[] inputs)
            {
                var sb = new StringBuilder();
                sb.Append(methodInfo.Name);
                sb.Append("(");
                var parameters = methodInfo.GetParameters();
                for (int i = 0; i < parameters.Length; i++)
                {
                    var paramTypeName = parameters[i].ParameterType.Name;
                    string paramValue;
                    if (inputs[i] == null) paramValue = "null";
                    else
                    {
                        try { paramValue = JsonConvert.SerializeObject(inputs[i]); }
                        catch { paramValue = inputs[i].ToString(); }
                    }
                    sb.AppendFormat("{0} {1}", paramTypeName, paramValue);
                    if (i < parameters.Length - 1) sb.Append(", ");
                }
                sb.Append(")");
                return sb.ToString();
            }
        }
        
        /// <summary>
        /// Initializes all atomic property functions to OpenAI API supported format (JsonSchema).
        /// </summary>
        /// <param name="myShapeControllerType">Type of user-defined ShapeController, used to check existence of atomic property functions.</param>
        /// <param name="propertyFunctionNames">Names of property functions.</param>
        /// <returns>A dictionary where key = functionName, value = corresponding JsonSchema of the function.</returns>
        public Dictionary<string, Tool> InitFunctionCalls(Type myShapeControllerType, List<string> propertyFunctionNames)
        {
            var functionCallDict = new Dictionary<string, FunctionCallGroup>();
            foreach (var functionCallGroup in functionCallGroups)
            {
                functionCallDict.Add(functionCallGroup.name, functionCallGroup);
            }
            var toolDict = new Dictionary<string, Tool>();
            foreach (var functionName in propertyFunctionNames)
            {
                // the atomic function must exist
                var methodInfo = myShapeControllerType.GetMethod(functionName);
                if (methodInfo == null)
                {
                    Debug.LogWarning($"propertyFunction with name {functionName} does not exist, skipped");
                    continue;
                }
                // parameter type can either cast or be embedding matches by specifying with PropertyMethodAttribute
                if (methodInfo.GetCustomAttribute<ShapeController.PropertyMethodAttribute>() != null) continue;
                var paramsObject = new JObject();
                var canCast = true;
                foreach (var parameterInfo in methodInfo.GetParameters())
                {
                    // if the parameter has PropertyParameter Attribute, skip them
                    if (Attribute.IsDefined(parameterInfo, typeof(ShapeController.PropertyParameterAttribute))) continue;
                    if (!FunctionParamGroup.paramTypeJsons.TryGetValue(parameterInfo.ParameterType, out var paramObject))
                    {
                        Debug.LogWarning($"cannot cast {parameterInfo.Name} with type {parameterInfo.ParameterType}");
                        canCast = false;
                        break;
                    }
                    // JObject paramObject =
                    //     PropertyExecutor.FunctionParamGroup.GetParamTypeJsonObject(parameterInfo.ParameterType);
                    // DO NOT modify the template m_ParamTypeJsons!
                    var paramObjectCopy = (JObject) paramObject.DeepClone();
                    paramsObject.Add(parameterInfo.Name, paramObjectCopy);
                }
                if (!canCast) continue;
                // add custom parameter properties if they exist
                var isCustomArgs = functionCallDict.TryGetValue(functionName, out var functionCallGroup);
                if (isCustomArgs)
                {
                    foreach (var functionParamGroup in functionCallGroup.paramGroups)
                    {
                        var isInfoAdded = functionParamGroup.TryAddParamInfo(ref paramsObject);
                        if (isInfoAdded)
                        {
                            Debug.Log($"custom parameter {functionParamGroup.name} info is added to function {functionCallGroup.name}");
                        }
                    }
                }
                // wrap paramsObject to OpenAI API required format
                JObject funcObject = null;
                if (paramsObject.Count > 0)
                {
                    funcObject = new JObject
                    {
                        ["type"] = "object",
                        ["properties"] = paramsObject,
                    };
                    if (isCustomArgs) functionCallGroup.AddParamsRequirement(ref funcObject);
                }
                // add function description if they exist
                string functionDescription = null;
                if (isCustomArgs) functionDescription = functionCallGroup.description;
                Tool tool = new Function(
                    name: functionName,
                    description: functionDescription,
                    parameters: funcObject
                );
                toolDict.Add(functionName, tool);
                Debug.Log($"tool {functionName} is added with parameters = {funcObject}");
            }
            return toolDict;
        }

        /// <summary>
        /// A group containing essential elements for one function parameter.
        /// </summary>
        [Serializable]
        public struct FunctionParamGroup
        {
            [SerializeField] private string m_Name;
            [SerializeField] private bool m_Required;
            [SerializeField] private string m_Description;
            [SerializeField] private List<Utils.FewShotPair> m_Examples;

            /// <value>Function parameter name.</value>
            public string name
            {
                get => m_Name;
                set => m_Name = value;
            }
    
            /// <value>Whether this parameter is required, default to False.</value>
            public bool required
            {
                get => m_Required;
                set => m_Required = value;
            }
    
            /// <value>Optional, function parameter description.</value>
            public string description
            {
                get => m_Description;
                set => m_Description = value;
            }
    
            /// <value>Optional, list of few-shot example (input, output) pair provided to the model as illustration to the parameter is used.</value>
            public List<Utils.FewShotPair> examples
            {
                get => m_Examples;
                set => m_Examples = value;
            }

            /// <param name="paramName">Function parameter name.</param>
            /// <param name="paramRequired">Whether this parameter is required, default to False.</param>
            /// <param name="paramDescription">Optional, function parameter description, a summarization of its usage.</param>
            /// <param name="paramExamples">Optional, list of few-shot example (input, output) pair provided to the model.</param>
            public FunctionParamGroup(string paramName, bool paramRequired = false, string paramDescription = null, List<Utils.FewShotPair> paramExamples = null)
            {
                m_Name = paramName;
                m_Required = paramRequired;
                m_Description = paramDescription;
                m_Examples = paramExamples ?? new List<Utils.FewShotPair>();
            }

            /// <summary>
            /// Try to add current parameter information to a (possibly empty) JsonSchema.
            /// </summary>
            /// <param name="paramsObject">The JsonSchema of the property function that the current parameter is attached to, will be updated upon execution of this method.</param>
            /// <returns>Whether the JsonSchema is updated successfully.</returns>
            public bool TryAddParamInfo(ref JObject paramsObject)
            {
                if (!paramsObject.TryGetValue(name, out var paramToken))
                {
                    Debug.LogWarning($"custom parameter {name} does not exist in declared paramsObject {paramsObject}");
                    return false;
                }
                var paramObject = (JObject) paramToken;
                var fullParamDescription = "";
                if (description != null) fullParamDescription += description;
                if (examples != null)
                {
                    foreach (var example in examples)
                    {
                        fullParamDescription += $" {example.input} -> {example.output}.";
                    }
                }
                if (fullParamDescription == "")
                {
                    Debug.LogWarning($"custom parameter {name} does not have information attached to it in resolved paramObject {paramObject}");
                    return false;
                }
                paramObject.Add("description", fullParamDescription);
                return true;
            }
            
            // public static JObject GetParamTypeJsonObject(Type type)
            // {
            //     JsonSchema schema = JsonSchema.FromType(type);
            //     string schemaJson = schema.ToJson();
            //     return JObject.Parse(schemaJson);
            // }
            
            private static Dictionary<Type, JObject> m_ParamTypeJsons = new ()
            {
                {typeof(int), new JObject { ["type"] = "integer" }},
                {typeof(bool), new JObject { ["type"] = "boolean" }},
                {typeof(float), new JObject { ["type"] = "number" }},
                {typeof(string), new JObject { ["type"] = "string" }},
                {typeof(List<int>), new JObject
                {
                    ["type"] = "array",
                    ["items"] = new JObject
                    {
                        ["type"] = "integer",
                    }
                }},
                {typeof(List<bool>), new JObject
                {
                    ["type"] = "array",
                    ["items"] = new JObject
                    {
                        ["type"] = "boolean",
                    }
                }},
                {typeof(List<float>), new JObject
                {
                    ["type"] = "array",
                    ["items"] = new JObject
                    {
                        ["type"] = "number",
                    }
                }},
                {typeof(List<string>), new JObject
                {
                    ["type"] = "array",
                    ["items"] = new JObject
                    {
                        ["type"] = "string",
                    }
                }},
            };

            /// <value>Pre-defined (function type, JsonSchema template) mappings for OpenAI API, user can add customized mapping by updating this field.</value>
            public static Dictionary<Type, JObject> paramTypeJsons
            {
                get => m_ParamTypeJsons;
                set => m_ParamTypeJsons = value;
            }
        }

        /// <summary>
        /// Execute atomic property functions on given objects (controllers) and update their states (attributes).
        /// </summary>
        /// <param name="propertyDict">
        /// Ordered dictionary of pairs (targetProperty, targetFeatures) in their execution order. <br/>
        /// {targetProperty} are like "shape", "distance", "direction", etc. <br/>
        /// {targetFeatures} are like "cube", "5 meters", "on my left", etc. <br/>
        /// </param>
        /// <param name="toolDict">A dictionary of function name to property function JsonSchema mappings.</param>
        /// <param name="myShapeControllerType">Type of user-defined ShapeController, used for checking function existence.</param>
        /// <param name="allControllers">All candidate objects that function calls can be performed on.</param>
        /// <param name="selectedControllers">Selected object indexes that function calls are actually performed on.</param>
        /// <param name="myEmbeddingsType">Type of user-defined Embeddings, used for checking attributes for function arguments validity.</param>
        /// <param name="embeddings">Stores all candidate attributes for function calling.</param>
        /// <param name="historyMessages">Visualization.</param>
        /// <returns>Filtered object indexes that function calls are successfully executed on.</returns>
        public async Task<bool[]> ExecuteProperty(OrderedDictionary propertyDict, Dictionary<string, Tool> toolDict, 
            Type myShapeControllerType, ShapeController[] allControllers, bool[] selectedControllers, 
            Type myEmbeddingsType, Embeddings embeddings, 
            List<string> historyMessages)
        {
            foreach (var propertyKey in propertyDict.Keys)
            {
                var functionName = (string) propertyKey;
                var userInput = (string) propertyDict[functionName];
                var methodInfo = myShapeControllerType.GetMethod(functionName);
                // it is the user's responsibility to write the desired atomic function
                if (methodInfo == null)
                {
                    Debug.LogWarning($"propertyFunction with name {functionName} does not exist, skipped");
                    continue;
                }
                // method must return boolean to denote execution success
                if (methodInfo.ReturnType != typeof(bool))
                {
                    Debug.LogWarning($"propertyFunction with name {functionName} does not return a boolean, skipped");
                }
                object[] parameters;
                // field to optionally denote comparison based parameter position
                var comparisonPos = -1;
                // fetch parameters by function calling to LLMs
                if (toolDict.TryGetValue(functionName, out Tool tool))
                {
                    var functionCallOutput =
                        await VoiceIntentController.CallCompletionWithTools(userInput, new List<Tool> { tool });
                    Debug.Log($"{functionName} functionCallOutput: {functionCallOutput}");
                    // handle model failure in function calling
                    if (functionCallOutput == Utils.k_FailureResponse) continue;
                    var functionCallJObject = JsonConvert.DeserializeObject<JObject>(functionCallOutput);
                    var parameterInfos = methodInfo.GetParameters();
                    parameters = new object[parameterInfos.Length];
                    var invokeState = true;
                    for (var i = 0; i < parameterInfos.Length; i++)
                    {
                        var parameterName = parameterInfos[i].Name;
                        var parameterType = parameterInfos[i].ParameterType;
                        // assign value if it exists
                        if (functionCallJObject.TryGetValue(parameterName, out JToken parameterJToken))
                        {
                            var parameterValue = JsonConvert.DeserializeObject(parameterJToken.ToString(), parameterType);
                            if (parameterValue == null)
                            {
                                invokeState = false;
                                Debug.LogWarning($"propertyFunction with name {functionName} fails to deserialize parameter value at position {i}: type {parameterType} got value {parameterJToken}");
                                break;
                            }
                            parameters[i] = parameterValue;
                        } 
                        // assign default value otherwise
                        else if (parameterInfos[i].HasDefaultValue)
                        {
                            parameters[i] = parameterInfos[i].DefaultValue;
                        }
                        // assign to comparison target later (i.e. shape controller) if parameter is a comparison based argument
                        else if (parameterInfos[i].GetCustomAttribute<ShapeController.PropertyParameterAttribute>() != null)
                        {
                            parameters[i] = null;
                            comparisonPos = i;
                        }
                        // not acceptable
                        else
                        {
                            invokeState = false;
                            Debug.LogWarning($"propertyFunction with name {functionName} fails to receive parameter value at position {i} and is not optional");
                            break;
                        }
                    }
                    if (!invokeState) continue;
                }
                // fetch parameters by matching embeddings (classification) from LLMs
                else
                {
                    // method must have exactly 1 parameter
                    if (methodInfo.GetParameters().Length != 1)
                    {
                        Debug.LogWarning($"propertyFunction with name {functionName} must have only one parameter to match embeddings");
                        continue;
                    }
                    // method must have special attribute to denote "embedding match"
                    var methodAttribute = methodInfo.GetCustomAttribute<ShapeController.PropertyMethodAttribute>();
                    if (methodAttribute == null)
                    {
                        Debug.LogWarning($"propertyFunction with name {functionName} must have PropertyMethodAttribute to access embeddings");
                        continue;
                    }
                    // the attribute must point to the storage field of the embedding
                    var propertyName = methodAttribute.property;
                    var fieldInfo = myEmbeddingsType.GetProperty(propertyName);
                    if (fieldInfo == null)
                    {
                        Debug.LogWarning($"propertyFunction with name {functionName} does not have corresponding fieldInfo to access embeddings, get {propertyName}");
                        continue;
                    }
                    var fieldValue = fieldInfo.GetValue(embeddings);
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
                    var classificationInput =
                        PropertyClassifier.GetClassificationPrompt(userInput, new List<string>(fieldDict.Keys));
                    Debug.Log($"{functionName} classificationInput: {classificationInput}");
                    var classificationOutput = await VoiceIntentController.CallCompletion(classificationInput,
                        PropertyClassifier.k_ClassificationInstruction);
                    Debug.Log($"{functionName} classificationOutput: {classificationOutput}");
                    // handle model failure in classification
                    if (classificationOutput == Utils.k_FailureResponse) continue;
                    if (!fieldDict.TryGetValue(classificationOutput, out object propertyValue))
                    {
                        // TODO: improve this if the model fails to classify the input
                        Debug.LogWarning($"model fails to classify {userInput} into one of {fieldDict.Keys}");
                        continue;
                    }
                    parameters = new []{ propertyValue };
                }
                // function calling to each controller
                var otherControllerIdx = -1;
                for (var i = 0; i < allControllers.Length; i++)
                {
                    if (!selectedControllers[i]) continue;
                    
                    if (comparisonPos != -1)
                    {
                        if (otherControllerIdx == -1)
                        {
                            otherControllerIdx = i;
                            parameters[comparisonPos] = allControllers[otherControllerIdx];
                            continue;
                        }
                        parameters[comparisonPos] = allControllers[otherControllerIdx];
                    }
                    var isMatched = (bool) methodInfo.Invoke(allControllers[i], parameters);
                    if (comparisonPos != -1 && isMatched)
                    {
                        selectedControllers[otherControllerIdx] = false;
                        otherControllerIdx = i;
                    }
                    if (!isMatched) selectedControllers[i] = false;
                }
                // update display
                var displayMessage = FunctionCallGroup.PrettyPrintFunctionCall(methodInfo, parameters);
                displayMessage = $"<color=#00bfff>{displayMessage}</color>\n";
                Debug.Log(displayMessage);
                historyMessages.Add(displayMessage);
            }
            for (var i = 0; i < selectedControllers.Length; i++)
            {
                var xrGrabInteractable = allControllers[i].grabInteractable;
                if (xrGrabInteractable == null) continue;
                xrGrabInteractable.enabled = selectedControllers[i];
            }
            return selectedControllers;
        }
    }
}