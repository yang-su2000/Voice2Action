using System;
using System.Collections.Generic;
using OpenAI;
using OpenAI.Models;

namespace xrc_students_fa2023_sp06_en268_jx288_ys724.Runtime
{
    /// <summary>
    /// Stores all singleton fields, global constants, and utility functions.
    /// </summary>
    public static class Utils
    {
        /// <value>The entry for all OpenAI API requests.</value>
        public static OpenAIClient m_OpenAIClient;

        /// <value>The base model type used in Voice2Action.</value>
        public static readonly Model s_OpenAIModel = Model.GPT3_5_Turbo;
        
        /// <summary>
        /// Temperature parameter of the OpenAI CompletionAPI, lower means that the output is more deterministic.
        /// </summary>
        /// <remarks>
        /// This is highly correlated to the functionality of Voice2Action, we recommend not to change it.
        /// </remarks>
        /// <value>Range [0f, 1f].</value>
        public const float k_CompletionTemperature = 0.0f;
        
        /// <summary>
        /// TODO: we will add similarity match implementation in future package version. <br/>
        /// Confidence of the system to accept matching in the Embedding class. <br/>
        /// This is used to determine if there is a match in the property mappings. If the system does not have enough confidence, it rejects the mapping. <br/>
        /// User can make this bigger if they want a stricter match, or make this lower if they want a looser match. <br/>
        /// e.g. User: "change the box to orange" -> "yellow" is matched with {k_MinConfidenceToProceed}% confidence. <br/>
        /// </summary>
        /// <value>Range [0, 100].</value>
        public const int k_MinConfidenceToProceed = 50;

        /// <summary>
        /// A string to denote model failure state
        /// </summary>
        /// <value>"N/A"</value>
        public const string k_FailureResponse = "N/A";
        
        /// <summary>
        /// A few shot example input and output pair to the model.
        /// </summary>
        [Serializable]
        public struct FewShotPair
        {
            /// <value>Input user instruction.</value>
            public string m_Input;
            
            /// <value>Desired model output.</value>
            public string m_Output;
            
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
            /// <value>Specific task or instruction you want the model to perform.</value>
            public string m_Instruction;

            /// <value>Properties you want the model to extract from.</value>
            public List<string> m_Properties;

            /// <value>Extraction order of the properties, lower ordered properties are extracted first.</value>
            public List<int> m_Orders;

            /// <value>Optional, type or format of the output, or constraints of what the model should not do.</value>
            public List<string> m_Indicators;

            /// <value>Optional, list of few-shot example (input, output) pair provided to the model as illustration to how it should respond.</value>
            public List<FewShotPair> m_FewShotPairs;
            
            /// <param name="instruction">Specific task or instruction you want the model to perform. This string must contains "{}" for properties insertion if it is provided.</param>
            /// <param name="orderedProperties">(Order, Property) pairs you want the model to extract their input from, lower ordered properties are extracted first.</param>
            /// <param name="indicators">Optional, type or format of the output, or constraints of what the model should not do.</param>
            /// <param name="fewShotPairs">Optional, list of few-shot example (input, output) pair provided to the model.</param>
            public FewShotGroup(string instruction, List<(int, string)> orderedProperties, List<string> indicators = null, List<FewShotPair> fewShotPairs = null)
            {
                if (!instruction.Contains("{}"))
                {
                    throw new ArgumentException("instruction must contains {} for properties insertion");
                }
                m_Instruction = instruction;
                if (orderedProperties is not null) 
                {
                    m_Properties = new List<string>();
                    m_Orders = new List<int>();
                    for (int i = 0; i < orderedProperties.Count; i++)
                    {
                        m_Orders.Add(orderedProperties[i].Item1);
                        m_Properties.Add(orderedProperties[i].Item2);
                    }
                }
                else
                {
                    m_Properties = null;
                    m_Orders = null;
                }
                m_Indicators = indicators;
                m_FewShotPairs = fewShotPairs;
            }
            
            /// <returns>List of ordered properties.</returns>
            [Obsolete]
            public List<string> GetOrderedProperties()
            {
                if (m_Properties.Count != m_Orders.Count)
                {
                    throw new ArgumentException(
                        $"properties and orders length mismatch, get {m_Properties.Count} for properties and {m_Orders.Count} for orders");
                }
                List<(int, string)> orderedProperties = new List<(int, string)>();
                for (int i = 0; i < m_Properties.Count; i++) orderedProperties.Add((m_Orders[i], m_Properties[i]));
                orderedProperties.Sort();
                List<string> ret = new List<string>();
                for (int i = 0; i < m_Properties.Count; i++) ret.Add(orderedProperties[i].Item2);
                return ret;
            }

            /// <summary>
            /// Get the full prompt to perform information extraction on the given userInput.
            /// </summary>
            /// <param name="userInput">The given user input instruction.</param>
            /// <returns>The generated full prompt.</returns>
            public string GetPrompt(string userInput)
            {
                string ret = m_Instruction;
                ret += "\n";
                string propertyGroup = String.Join(", ", m_Properties);
                ret = ret.Replace("{}", "\"" + propertyGroup + "\"");
                if (m_Indicators is not null)
                {
                    foreach (var indicator in m_Indicators) ret += "\n" + indicator;
                }
                if (m_FewShotPairs is not null)
                {
                    ret += "\n";
                    foreach (var fewShotPair in m_FewShotPairs)
                    {
                        ret += "Input:\n" + fewShotPair.m_Input + "\n";
                        ret += "Output:\n" + fewShotPair.m_Output + "\n";
                    }
                }
                ret += "Input:\n" + userInput + "\n";
                ret += "Output:\n";
                return ret;
            }
        }
    }
}