using System;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Threading.Tasks;
using UnityEngine;

namespace Voice2Action
{
    /// <summary>
    /// A minimal implementation of the "LLM for Extraction" step in Voice2Action. <br/>
    /// This implementation is not optimized and only used for inference. <br/>
    /// We will add atomic action property generation, alignment training via order ranking and environment feedback of the model in future package version. <br/>
    /// </summary>
    public class PropertyExtractor: MonoBehaviour
    {
        [SerializeField]
        private Utils.FewShotGroup m_SelectionGroup = new(
            instruction: "Extract actions {} from the input, separate by comma.",
            indicators: new List<string>
            {
                "If some actions do not exist, do not print.",
            },
            orderedProperties: new List<(int, string)>
            {
                // ------------Added for CityDemo in MyShapeController, user can define their own through code or hierarchy------------
                // RGB values
                // example instances: "red", "green", "dark blue", "cyan", "light yellow", "white", "colorful",
                // (10, "GetColor"),
                // embedding matches
                // example instances: "XXX Street", "YYY Ave",
                // (10, "GetAddress"),
                // ------------Added for CityDemo in MyShapeController, user can define their own through code or hierarchy------------
                
                // embedding matches
                // example instances: "capsule", "cube", "cylinder",
                (10, "GetShape"),
                // 3-DOF position transform to the player
                // example instances: "left", "right", "north", "south", "west", "east", "top", "bottom",
                (10, "GetDirection"), 
                // 2 numbers denoting the range of the position to the player
                // example instances: "within x meters", "a to b meters", "at least y meters", "around me", "somewhere",
                (10, "GetDistance"),
                // 6-DOF transform (3-DOF for scale, 3-DOF for position)
                // example instances: "furthest", "smallest", "longest", "highest",
                // order: must be the last performed action
                (int.MaxValue, "GetSuperlative"),
            },
            fewShotPairs: new List<Utils.FewShotPair>
            {
                // ------------Added for CityDemo in MyShapeController, user can define their own through code or hierarchy------------
                // new (
                //     "get yellow houses",
                //     "GetColor: yellow, GetShape: houses"
                // ),
                // new (
                //     "select this building on albert street",
                //     "GetShape: this building, GetAddress: albert street"
                // ),
                // ------------Added for CityDemo in MyShapeController, user can define their own through code or hierarchy------------
                new (
                    "I want the rightmost car around me",
                    "GetSuperlative: rightmost, GetShape: car, GetDistance: around me"
                ),
                new (
                    "signs at least five m on my left",
                    "GetShape: signs, GetDistance: at least five m, GetDirection: on my left"
                ),
            }
        );
        
        [SerializeField]
        private Utils.FewShotGroup m_ModificationGroup = new(
            instruction: "Extract actions {} from the input, separate by comma.",
            indicators: new List<string>
            {
                "If some actions do not exist, do not print anything."
            },
            orderedProperties: new List<(int, string)>
            {
                // ------------Added for CityDemo in MyShapeController, user can define their own through code or hierarchy------------
                // RGB values
                // example instances: "red", "green", "dark blue", "cyan", "light yellow", "white", "colorful",
                // (10, "ModifyColor"),
                // ------------Added for CityDemo in MyShapeController, user can define their own through code or hierarchy------------
                
                // 3-DOF transform
                // example instances: "taller", "much bigger", "a bit smaller",
                (10, "ModifyScale"),
                // 1-DOF positional transform to the player
                // example instances: "much closer", "a bit further",
                (10, "ModifyPosition"),
            },
            fewShotPairs: new List<Utils.FewShotPair>
            {
                // ------------Added for CityDemo in MyShapeController, user can define their own through code or hierarchy------------
                // new (
                //     "make the buildings far, then change to red",
                //     "ModifyColor: red, ModifyPosition: far"
                // ),
                // ------------Added for CityDemo in MyShapeController, user can define their own through code or hierarchy------------
                new (
                    "make it a bit taller and very close",
                    "ModifyScale: a bit taller, ModifyPosition: very close"
                ),
                new (
                    "make them shorter",
                    "ModifyScale: shorter"
                ),
            }
        );
        
        /// <value>Contains the available atomic action properties to interact with for selection and their example usage.</value>
        /// <example>
        /// Extract actions {"GetShape", "GetColor", "GetDirection", "GetDistance", "GetSuperlative"} from the input, separate by comma. <br/>
        /// If some actions do not exist, do not print anything. <br/>
        /// Input: <br/>
        /// {more input examples} <br/>
        /// Output: <br/>
        /// {more output examples} <br/>
        /// ... {add some more if there's budget} <br/>
        /// Input: <br/>
        /// {userInput} <br/>
        /// Output: <br/>
        /// </example>
        public Utils.FewShotGroup selectionGroup
        {
            get => m_SelectionGroup;
            set => m_SelectionGroup = value;
        }
        
        /// <value>Contains the available atomic action properties to interact with for modification and their example usage.</value>
        /// <example>
        /// Extract actions {"ModifyColor", "ModifyScale", "ModifyPosition"} from the input, separate by comma. <br/>
        /// If some actions do not exist, do not print anything. <br/>
        /// Input: <br/>
        /// {more input examples} <br/>
        /// Output: <br/>
        /// {more output examples} <br/>
        /// ... {add some more if there's budget} <br/>
        /// Input: <br/>
        /// {userInput} <br/>
        /// Output: <br/>
        /// </example>
        public Utils.FewShotGroup modificationGroup
        {
            get => m_ModificationGroup;
            set => m_ModificationGroup = value;
        }
        
        /// <param name="action">The action that userInput belongs to.</param>
        /// <param name="userInput">Input user instruction.</param>
        /// <returns>Formatted extraction input.</returns>
        private string GetExtractionPrompt(string action, string userInput)
        {
            if (action == "select") return m_SelectionGroup.GetPrompt(userInput);
            if (action == "modify") return m_ModificationGroup.GetPrompt(userInput);
            Debug.LogWarning("action class does not exist: " + action);
            return Utils.k_FailureResponse;
        }
        
        /// <summary>
        /// Add new atomic action property to the extractor, used for customized properties. <br/>
        /// The user may also want to AddExtractExamples(...) to ensure accurate results. <br/>
        /// </summary>
        /// <param name="action">The action that newAtomicAction belongs to.</param>
        /// <param name="order">Order of extraction of the new atomic action.</param>
        /// <param name="newAtomicAction">The new atomic action.</param>
        public void AddAtomicAction(string action, int order, string newAtomicAction)
        {
            if (action == "select")
            {
                m_SelectionGroup.orders.Add(order);
                m_SelectionGroup.properties.Add(newAtomicAction);
            }
            else if (action == "modify")
            {
                m_ModificationGroup.orders.Add(order);
                m_ModificationGroup.properties.Add(newAtomicAction);
            }
            else
            {
                Debug.LogWarning("action class does not exist: " + action);
            }
        }
        
        /// <summary>
        /// Add new extraction examples to the system, used when user adds customized atomic actions. <br/>
        /// </summary>
        /// <param name="action">The action that the extraction example belongs to.</param>
        /// <param name="input">Example user instruction.</param>
        /// <param name="output">Example desired model output.</param>
        public void AddExtractionExamples(string action, string input, string output)
        {
            var examplePair = new Utils.FewShotPair(input, output);
            if (action == "select") m_SelectionGroup.fewShotPairs.Add(examplePair);
            else if (action == "modify") m_ModificationGroup.fewShotPairs.Add(examplePair);
            else Debug.LogWarning("action class does not exist: " + action);
        }

        /// <summary>
        /// Extract property mappings in user instruction that corresponds to each defined atomic action class.
        /// </summary>
        /// <param name="action">The action class that the userInput belongs to.</param>
        /// <param name="userInput">Input user instruction.</param>
        /// <returns>
        /// Ordered dictionary of pairs (targetProperty, targetFeatures) in their execution order. <br/>
        /// {targetProperty} are like "shape", "distance", "direction", etc. <br/>
        /// {targetFeatures} are like "cube", "5 meters", "on my left", etc. <br/>
        /// </returns>
        public async Task<OrderedDictionary> ExtractProperty(string action, string userInput)
        {
            var extractionPrompt = GetExtractionPrompt(action, userInput);
            Debug.Log($"{action} extractionPrompt: {extractionPrompt}");
            var extractDict = new OrderedDictionary();
            string extractionOutput;
            try
            {
                extractionOutput = await VoiceIntentController.CallCompletion(extractionPrompt);
                Debug.Log($"{action} extractionOutput: {extractionOutput}");
            }
            catch (Exception e)
            {
                Debug.Log($"{action} property extractor gets exception in OpenAICompletion:\n" + e);
                return extractDict;
            }
            if (extractionOutput == Utils.k_FailureResponse) return extractDict;
            Utils.FewShotGroup extractionGroup;
            if (action == "select") extractionGroup = m_SelectionGroup;
            else if (action == "modify") extractionGroup = m_ModificationGroup;
            else
            {
                Debug.Log($"action not found: {action}");
                return extractDict;
            }
            foreach (var propertyMessage in extractionOutput.Split(", "))
            {
                var propertyTuple = propertyMessage.Split(": ");
                if (propertyTuple.Length > 1)
                {
                    var targetProperty = propertyTuple[0];
                    var targetFeature = propertyTuple[1];
                    if (extractionGroup.properties.Contains(targetProperty))
                    {
                        Debug.Log($"<color=green>{action}: [{targetProperty}] -> [{targetFeature}]</color>\n");
                        extractDict.Add(targetProperty, targetFeature);
                    }
                }
            }
            var orderedExtractList = new List<(int, string)>();
            for (var i = 0; i < extractionGroup.properties.Count; i++)
            {
                if (extractDict.Contains(extractionGroup.properties[i]))
                {
                    orderedExtractList.Add((extractionGroup.orders[i], extractionGroup.properties[i]));
                }
            }
            orderedExtractList.Sort();
            var orderedExtractDict = new OrderedDictionary();
            foreach (var (_, targetProperty) in orderedExtractList)
            {
                orderedExtractDict.Add(targetProperty, extractDict[targetProperty]);
            }
            return orderedExtractDict;
        }
    }
}