using System;
using System.Collections.Generic;
using OpenAI;
using OpenAI.Models;
using UnityEngine;

namespace Voice2Action
{
    /// <summary>
    /// Stores all singleton fields, global constants, and utility functions.
    /// </summary>
    public static class Utils
    {
        /// <value>The entry for all OpenAI API requests.</value>
        public static OpenAIClient openAIClient { get; set; }

        /// <value>The chat model type used in Voice2Action.</value>
        public static readonly Model k_ChatModel = Model.GPT3_5_Turbo;
        
        /// <summary>
        /// Temperature parameter of the OpenAI CompletionAPI, lower means that the output is more deterministic.
        /// </summary>
        /// <remarks>
        /// This is highly correlated to the functionality of Voice2Action, we recommend not to change it.
        /// </remarks>
        /// <value>Range [0f, 1f].</value>
        public const float k_CompletionTemperature = 0.0f;

        /// <value>The embedding model type used in Voice2Action.</value>
        public static readonly Model k_EmbeddingModel = Model.Embedding_3_Small;
        
        /// <value>The embedding model dimension used in Voice2Action.</value>
        public const int k_EmbeddingDim = 512;
        
        /// <summary>
        /// Confidence of the system to accept matching in the Embedding class. <br/>
        /// This is used to determine if there is a match in the property mappings. If the system does not have enough confidence, it rejects the mapping. <br/>
        /// User can make this bigger if they want a stricter match, or make this lower if they want a looser match. <br/>
        /// e.g. User: "change the box to orange" -> "yellow" is matched with {k_MinConfidenceToProceed}% confidence. <br/>
        /// </summary>
        /// <value>Range [0d, 1d].</value>
        public const double k_MinConfidenceToProceed = 0.1d;
        
        /// <value>A string to denote model failure state</value>
        public const string k_FailureResponse = "N/A";
        
        /// <summary>
        /// A few shot example input and output pair to the model.
        /// </summary>
        [Serializable]
        public struct FewShotPair
        {
            [SerializeField] private string m_Input;
            [SerializeField] private string m_Output;

            /// <value>Input user instruction.</value>
            public string input
            {
                get => m_Input;
                set => m_Input = value;
            }

            /// <value>Desired model output.</value>
            public string output
            {
                get => m_Output;
                set => m_Output = value;
            }
            
            /// <param name="input">Input user instruction.</param>
            /// <param name="output">Desired model output.</param>
            public FewShotPair(string input, string output)
            {
                m_Input = input;
                m_Output = output;
            }
        }

        /// <summary>
        /// A group containing essential prompting elements for few-shot prompting.
        /// </summary>
        [Serializable]
        public struct FewShotGroup
        {
            [SerializeField] private string m_Instruction;
            [SerializeField] private List<string> m_Properties;
            [SerializeField] private List<int> m_Orders;
            [SerializeField] private List<string> m_Indicators;
            [SerializeField] private List<FewShotPair> m_FewShotPairs;

            /// <value>Specific task or instruction you want the model to perform.</value>
            public string instruction
            {
                get => m_Instruction;
                set
                {
                    if (!value.Contains("{}"))
                    {
                        throw new ArgumentException("Instruction must contain '{}' for properties insertion.");
                    }
                    m_Instruction = value;
                }
            }

            /// <value>Properties you want the model to extract from.</value>
            public List<string> properties
            {
                get => m_Properties;
                private set => m_Properties = value; // Made private because setting is handled in the constructor
            }

            /// <value>Extraction order of the properties, lower ordered properties are extracted first.</value>
            public List<int> orders
            {
                get => m_Orders;
                private set => m_Orders = value; // Made private because setting is handled in the constructor
            }

            /// <value>Optional, type or format of the output, or constraints of what the model should not do.</value>
            public List<string> indicators
            {
                get => m_Indicators;
                set => m_Indicators = value;
            }

            /// <value>Optional, list of few-shot example (input, output) pair provided to the model as illustration to how it should respond.</value>
            public List<FewShotPair> fewShotPairs
            {
                get => m_FewShotPairs;
                set => m_FewShotPairs = value;
            }

            /// <param name="instruction">Specific task or instruction you want the model to perform. This string must contains "{}" for properties insertion if it is provided.</param>
            /// <param name="orderedProperties">(Order, Property) pairs you want the model to extract their input from, lower ordered properties are extracted first.</param>
            /// <param name="indicators">Optional, type or format of the output, or constraints of what the model should not do.</param>
            /// <param name="fewShotPairs">Optional, list of few-shot example (input, output) pair provided to the model.</param>
            public FewShotGroup(string instruction, List<(int, string)> orderedProperties, List<string> indicators = null, List<FewShotPair> fewShotPairs = null)
            {
                m_Instruction = instruction.Contains("{}") ? instruction : throw new ArgumentException("Instruction must contain '{}' for properties insertion.");
                m_Properties = new List<string>();
                m_Orders = new List<int>();
                if (orderedProperties != null)
                {
                    foreach (var (order, property) in orderedProperties)
                    {
                        m_Orders.Add(order);
                        m_Properties.Add(property);
                    }
                }
                m_Indicators = indicators ?? new List<string>();
                m_FewShotPairs = fewShotPairs ?? new List<FewShotPair>();
            }
            
            /// <returns>List of ordered properties.</returns>
            [Obsolete]
            public List<string> GetOrderedProperties()
            {
                if (properties.Count != orders.Count)
                {
                    throw new ArgumentException(
                        $"properties and orders length mismatch, get {properties.Count} for properties and {orders.Count} for orders");
                }
                var orderedProperties = new List<(int, string)>();
                for (var i = 0; i < properties.Count; i++) orderedProperties.Add((orders[i], properties[i]));
                orderedProperties.Sort();
                var ret = new List<string>();
                for (var i = 0; i < properties.Count; i++) ret.Add(orderedProperties[i].Item2);
                return ret;
            }

            /// <summary>
            /// Get the full prompt to perform information extraction on the given userInput.
            /// </summary>
            /// <param name="userInput">The given user input instruction.</param>
            /// <returns>The generated full prompt.</returns>
            public string GetPrompt(string userInput)
            {
                var ret = instruction;
                ret += "\n";
                var propertyGroup = String.Join(", ", properties);
                ret = ret.Replace("{}", "\"" + propertyGroup + "\"");
                if (indicators != null)
                {
                    foreach (var indicator in indicators) ret += "\n" + indicator;
                }
                if (fewShotPairs != null)
                {
                    ret += "\n";
                    foreach (var fewShotPair in fewShotPairs)
                    {
                        ret += "Input:\n" + fewShotPair.input + "\n";
                        ret += "Output:\n" + fewShotPair.output + "\n";
                    }
                }
                ret += "Input:\n" + userInput + "\n";
                ret += "Output:\n";
                return ret;
            }
        }
    }
}