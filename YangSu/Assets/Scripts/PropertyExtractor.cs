using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using OpenAI;

public static class PropertyExtractor
{
    public static List<(string, List<string>)> propertyTuples = new List<(string, List<string>)>();
    
    private static string openAIMessage;

    private static OpenAIClient openAIClient = new OpenAIClient(OpenAIAuthentication.LoadFromEnv());
    
    // property, example usage
    private static List<(string, string)> selectTuples = new List<(string, string)>
    {
        // ("shape", "Input => Select the tallest red cube from four to eight meters, and the closest green cylinder five meters away\n" +
        // "Output => object1: cube, object2: cylinder\nInput => "),
        ("color", "Input => Grab the tallest red cube from four to eight meters, and the closest green cylinder five meters away\n" +
        "Output => object1: red, object2: green\nInput => "),
        ("position", "Input => Give me the tallest red cube from four to eight meters, and the closest green cylinder five meters away\n" +
                     "Output => object1: from four to eight meters, object2: five meters away\nInput => "),
        // ("superlative degree", "Input => \"Get the tallest red cube from four to eight meters, and the closest green cylinder five meters away\"\n
        // Output => object1: tallest, object2: closest\nInput => "),
    };

    // property prompts
    public static string selectPrompt(string property, string example, string prompt)
    {
        string ret = "Print all objects with their corresponding property \"" + property + "\" in the format of \"object1: property1, object2: property2, ...\"\n";
        ret += example;
        ret += prompt;
        ret += "\nOutput => ";
        return ret;
    }

    public static string modifyPrompt(string property)
    {
        return "";
    }

    public static string interactionPrompt(string property)
    {
        return "";
    }

    // property extractors
    public static async Task SelectProperty(string prompt, List<string> historyMessages)
    {
        propertyTuples.Clear();
        foreach ((string property, string example) in selectTuples)
        {
            string userPrompt = selectPrompt(property, example, prompt);
            try
            {
                var result = await openAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt);
                openAIMessage = result.ToString();
                Debug.Log("\"" + property + "\" selector: " + userPrompt + openAIMessage);
                historyMessages.Add("<color=green>\"" + property + "\" selector: " + openAIMessage + "</color>\n");
                List<string> properties = new List<string>();
                foreach (string entityFeature in openAIMessage.Split(", "))
                {
                    string[] tuple = entityFeature.Split(": ");
                    if (tuple.Length > 1)
                    {
                        properties.Add(tuple[1]);
                        Debug.Log(property + " [" + tuple[0] + "] [" + tuple[1] + "]");
                    }
                }
                if (properties.Count > 0)
                {
                    propertyTuples.Add((property, properties));
                }
            }
            catch (Exception e)
            {
                Debug.Log("property \"" + property + "\" get exception in OpenAIChat:\n" + e);
            }
        }
    }
}