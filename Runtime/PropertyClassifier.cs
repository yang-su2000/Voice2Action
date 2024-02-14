using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

namespace Voice2Action
{
    /// <summary>
    /// A minimal implementation of the "LLM for Classification" step in Voice2Action. <br/>
    /// This implementation is not optimized and only used for inference. <br/>
    /// We will add action class generation and alignment training via order ranking of the model in future package version. <br/>
    /// </summary>
    public class PropertyClassifier: MonoBehaviour
    {
        [SerializeField]
        private Utils.FewShotGroup m_ClassificationGroup = new (
            instruction: "Extract actions {} from the input, separate by comma.",
            indicators: new List<string>
            {
                "If some actions do not exist, do not print.",
            },
            orderedProperties: new List<(int, string)>
            {
                // order: must be the first performed action
                (0, "select"),
                // order: TBD
                (10, "modify"),
            },
            fewShotPairs: new List<Utils.FewShotPair>
            {
                new (
                    "select the tallest building, and make it super short and red",
                    "select: select the tallest building, modify: make it super short and red"
                ),
                new (
                    "get cars",
                    "select: get cars"
                ),
                new (
                    "throw it away",
                    "modify: throw it away"
                ),
            }
        );
        
        /// <value>Contains the available action classes to interact with for classification and their example usage.</value>
        /// <example>
        /// Extract actions "select, modify" from the input, separate by comma. <br/>
        /// If some actions do not exist, do not print anything. <br/>
        /// Input: <br/>
        /// {input examples} <br/>
        /// Output: <br/>
        /// {output examples} <br/>
        /// ... {add some more if there's budget} <br/>
        /// Input: <br/>
        /// {userInput} <br/>
        /// Output: <br/>
        /// </example>
        public Utils.FewShotGroup classificationGroup
        {
            get => m_ClassificationGroup;
            set => m_ClassificationGroup = value;
        }
        
        /// <value>System instruction for the classification model.</value>
        public const string k_ClassificationInstruction = "You classify user input into exactly one category from the given categories. No explanation.";
        
        /// <param name="userInput">Original user input instruction.</param>
        /// <param name="targets">Classes to classify user input into.</param>
        /// <returns>Formatted classification input.</returns>
        public static string GetClassificationPrompt(string userInput, List<string> targets)
        {
            if (targets.Count == 0)
            {
                Debug.LogWarning($"no category exists for classification input {userInput}");
                return Utils.k_FailureResponse;
            }
            var ret = $"Classify {userInput} into one of";
            foreach (var category in targets)
            {
                ret += $" \"{category}\"";
            }
            return ret;
        }

        /// <summary>
        /// Add new action class to the classifier, used for customized actions. <br/>
        /// The user may also want to AddClassificationExamples(...) to ensure accurate results.
        /// </summary>
        /// <param name="order">Order of extraction of the new action.</param>
        /// <param name="newAction">New action to add.</param>
        public void AddAction(int order, string newAction)
        { 
            classificationGroup.orders.Add(order);
            classificationGroup.properties.Add(newAction);
        }

        /// <summary>
        /// Add new classification examples to the system, used when user adds customized actions.
        /// </summary>
        /// <param name="input">Example user instruction.</param>
        /// <param name="output">Example desired model output.</param>
        public void AddClassificationExamples(string input, string output)
        {
            var examplePair = new Utils.FewShotPair(input, output);
            classificationGroup.fewShotPairs.Add(examplePair);
        }
        
        /// <summary>
        /// Classify and extract phrases in user instruction that corresponds to each defined action class. <br/>
        /// </summary>
        /// <param name="userInput">Input user instruction.</param>
        /// <returns>
        /// A dictionary of pairs (targetClass, targetPhrases) <br/>
        /// {targetClass} are like "select", "modify", etc. <br/>
        /// {targetPhrases} are like "select the tallest building", "make it super short", etc. <br/>
        /// </returns>
        public async Task<Dictionary<string, string>> ClassifyProperty(string userInput)
        {
            var classificationPrompt = classificationGroup.GetPrompt(userInput);
            Debug.Log("classificationPrompt: " + classificationPrompt);
            var classifyDict = new Dictionary<string, string>();
            string classificationOutput;
            try
            {
                classificationOutput = await VoiceIntentController.CallCompletion(classificationPrompt);
                Debug.Log("classificationOutput: " + classificationOutput);
            } 
            catch (Exception e)
            {
                Debug.Log("property classifier gets exception in OpenAICompletion:\n" + e);
                return classifyDict;
            }
            if (classificationOutput == Utils.k_FailureResponse) return classifyDict;
            foreach (var propertyMessage in classificationOutput.Split(", "))
            {
                var propertyTuple = propertyMessage.Split(": ");
                if (propertyTuple.Length > 1) {
                    var targetClass = propertyTuple[0];
                    var targetPhrases = propertyTuple[1];
                    if (classificationGroup.properties.Contains(targetClass)) {
                        Debug.Log($"<color=yellow>classify: [{targetClass}] -> [{targetPhrases}]</color>\n");
                        classifyDict.Add(targetClass, targetPhrases);
                    }
                }
            }
            return classifyDict;
        }
    }
}