using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using OpenAI;

public static class PropertyExtractor
{
    // The prediction made by GPT
    // A List of predictions
    // Each list is a dictionary of (property, feature) pair
    // Each feature is an instance of the property
    // The feature does NOT need to match the ground truth features, they are used for later rankings (see PropertyMatcher)
    public static List<Dictionary<string, string>> propertyPreds = new List<Dictionary<string, string>>();
    
    // [Change this when adding new properties]
    // The ground truth
    // A dictionary of (property, features) pairs
    // Each feature is an instance of the property
    public static Dictionary<string, List<string>> propertyTragets = new Dictionary<string, List<string>>()
    {
        {
            // embeddings should suffice
            "shape", new List<string>
            {
                // "cube", "cylinder",
            }
        },
        {
            // embeddings should suffice
            "color", new List<string>
            {
                // "red", "green", "blue", "yellow", "black", "white", "orange", "purple",
            }
        },
        {
            // need two entities, one for the target instance, the other for the decorator instance (need recursive PropertyExtractor)
            "direction", new List<string>
            {
                // "left", "right", "north", "south", "west", "east", "top", "bottom",
            }
        },
        {
            // need two numbers denoting the range of the position
            "position", new List<string>
            {
                // pass
            }
        },
        {
            // need two entities, one for the target instance, the other for the decorator instance (possibly ALL instances for "est")
            "superlative degree", new List<string>
            {
                // "est", "er", "as _ as",
            }
        }
    };

    // [Change this when adding new properties]
    // Example (Input, Output) pairs for selection
    // The more accurate these examples are, the better GPT will generate its answers
    private static List<(string, string)> selectExamples = new List<(string, string)>
    {
        (
            "Select the tallest red cube from four to eight m, and the green cylinder five m away on my left.", 
            "object1: " +
            "shape -> cube, " +
            "color -> red, " +
            "position -> from four to eight m, " +
            "superlative degree -> tallest; " +
            "object2: " +
            "shape -> cylinder, " +
            "color -> green, " +
            "direction -> on my left, " +
            "position -> five m away"
        ),
    };
    
    private static List<(string, string)> modifyExamples = new List<(string, string)>
    {
        (
            "",
            ""
        ),
    };
    
    private static List<(string, string)> interactionExamples = new List<(string, string)>
    {
        (
            "",
            ""
        ),
    };
    
    // A wrapper for the full selection prompt
    // Example:
    // "Extract all objects from the given sentence with the feature tokens corresponding to the following properties \
    // {"shape", "color", "direction", "position", "superlative degree"}. If they do not exist, skip them.
    // Input => Select the tallest red cube from four to eight meters, and the green cylinder five meters away on my left.
    // Output => object1: shape -> cube, color -> red, position: four to eight meters, superlative degree -> tallest; \
    // object2: shape -> cylinder, color -> green, direction: on my left, position: five meters away
    // Input => {more input examples}
    // Output => {more output examples}
    // ... {add some more if we have money}
    // Input => {userPrompt}
    // Output => "
    private static string selectPrompt(string userPrompt)
    {
        string ret = "Extract all objects from the given sentence with the feature tokens corresponding to the following properties {";
        bool isFirstFlag = true;
        foreach (string property in propertyTragets.Keys)
        {
            if (isFirstFlag) isFirstFlag = false;
            else ret += ", ";
            ret += "\"" + property + "\"";
        }
        ret += "}. If they do not exist, skip them.\n";
        foreach ((string inputExample, string outputExample) in selectExamples)
        {
            ret += "Input => " + inputExample + "\n";
            ret += "Output => " + outputExample + "\n";
        }
        ret += "Input => " + userPrompt + "\n";
        ret += "Output => ";
        return ret;
    }

    private static string modifyPrompt(string userPrompt)
    {
        return "";
    }
    
    private static string interactionPrompt(string userPrompt)
    {
        return "";
    }

    private static string openAIMessage;

    private static OpenAIClient openAIClient = new OpenAIClient(OpenAIAuthentication.LoadFromEnv());
    
    // Select properties from user prompt (instruction)
    // Output is stored in {propertyPreds}, which is a list of dictionary of pairs (targetProperty, targetFeatures)
    // {targetProperty} are like "shape", "color", etc.
    // {targetFeatures} are like "cube", "red", etc.
    public static async Task SelectProperty(string prompt, List<string> historyMessages)
    {
        string userPrompt = selectPrompt(prompt);
        propertyPreds.Clear();
        try
        {
            var result = await openAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt);
            openAIMessage = result.ToString();
            Debug.Log("property selector: " + userPrompt + openAIMessage);
            historyMessages.Add("<color=green>property selector: " + openAIMessage + "</color>\n");
            foreach (string objectMessage in openAIMessage.Split("; "))
            {
                string[] objectTuple = objectMessage.Split(": "); // ideally this should be (object1, properties)
                if (objectTuple.Length > 1)
                {
                    string properties = objectTuple[1];
                    Dictionary<string, string> propertyMap = new Dictionary<string, string>();
                    foreach (string propertyMessage in properties.Split(", "))
                    {
                        string[] propertyTuple = propertyMessage.Split(" -> ");
                        if (propertyTuple.Length > 1)
                        {
                            string targetProperty = propertyTuple[0];
                            string targetFeature = propertyTuple[1];
                            if (propertyTragets.ContainsKey(targetProperty))
                            {
                                historyMessages.Add("<color=green>[" + targetProperty + "] -> [" + targetFeature + "]</color>\n");
                                propertyMap.Add(targetProperty, targetFeature);
                            }
                        }
                    }
                    if (propertyMap.Count > 0)
                    {
                        historyMessages.Add("<color=green>propertyMap length = " + propertyMap.Count + "</color>\n");
                        propertyPreds.Add(propertyMap);
                    }
                }
            }
        }
        catch (Exception e)
        {
            Debug.Log("select property extractor gets exception in OpenAICompletion:\n" + e);
        }
        // foreach ((string property, string example) in propertyTragets)
        // {
        //     string userPrompt = selectPrompt(property, example, prompt);
        //     try
        //     {
        //         var result = await openAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt);
        //         openAIMessage = result.ToString();
        //         Debug.Log("\"" + property + "\" selector: " + userPrompt + openAIMessage);
        //         historyMessages.Add("<color=green>\"" + property + "\" selector: " + openAIMessage + "</color>\n");
        //         List<string> properties = new List<string>();
        //         foreach (string entityFeature in openAIMessage.Split(", "))
        //         {
        //             string[] tuple = entityFeature.Split(": ");
        //             if (tuple.Length > 1)
        //             {
        //                 properties.Add(tuple[1]);
        //                 Debug.Log(property + " [" + tuple[0] + "] [" + tuple[1] + "]");
        //             }
        //         }
        //         if (properties.Count > 0)
        //         {
        //             propertyTuples.Add((property, properties));
        //         }
        //     }
        //     catch (Exception e)
        //     {
        //         Debug.Log("property \"" + property + "\" get exception in OpenAIChat:\n" + e);
        //     }
        // }
    }
    
    // public static async Task ModifyProperty(string prompt, List<string> historyMessages)
    // {
    //     
    // }
    //
    // public static async Task InteractProperty(string prompt, List<string> historyMessages)
    // {
    //     
    // }
}