using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

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
                // "capsule", "cube", "cylinder",
            }
        },
        {
            // embeddings should suffice
            "color", new List<string>
            {
                // "red", "green", "blue", "cyan", "yellow", "black", "white", "yellow",
            }
        },
        {
            // embeddings + 2d container by x and y
            "address", new List<string>
            {
                // "XXX Street", "YYY Ave",
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
            "distance", new List<string>
            {
                // "x meters",
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
        // (
        //     "select the tallest red cube from four to eight m behind the wall and the cylinder five m away on my left.",
        //     "shape: cube, color: red, position: behind the wall, distance: four to eight m, superlative degree: tallest\n" +
        //     "shape: cylinder, position: on my left, distance: five m away"
        // ),
        (
            "select the tallest building on albert street, and all the blue signs at least five m on my left", 
            "shape: building, address: albert street, superlative degree: tallest\n" +
            "shape: sign, color: blue, direction: on my left, distance: at least five m "
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
    // Extract the properties {"shape", "color", "position", "distance", "superlative degree"} belong to each object, separate by newline.
    // Input:
    // select the tallest red cube from four to eight m behind the wall and the cylinder five m away on my left.
    // Output:
    // shape: cube, color: red, position: behind the wall, distance: four to eight m, superlative degree: tallest
    // shape: cylinder, position: on my left, distance: five m away
    // Input:
    // {more input examples}
    // Output:
    // {more output examples}
    // ... {add some more if we have money}
    // Input:
    // {userPrompt}
    // Output:
    // 
    private static string selectPrompt(string userPrompt)
    {
        string ret = "extract the properties {";
        bool isFirstFlag = true;
        foreach (string property in propertyTragets.Keys)
        {
            if (isFirstFlag) isFirstFlag = false;
            else ret += ", ";
            ret += "\"" + property + "\"";
        }
        ret += "} belong to each object, separate by newline. if the property does not exist, do not print anything.\n";
        foreach ((string inputExample, string outputExample) in selectExamples)
        {
            ret += "input:\n" + inputExample + "\n";
            ret += "output:\n" + outputExample + "\n";
        }
        ret += "input:\n" + userPrompt + "\n";
        ret += "output:\n";
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
    
    // Select properties from user prompt (instruction)
    // Output is stored in {propertyPreds}, which is a list of dictionary of pairs (targetProperty, targetFeatures)
    // {targetProperty} are like "shape", "color", etc.
    // {targetFeatures} are like "cube", "red", etc.
    public static async Task SelectProperty(string prompt, List<string> historyMessages)
    {
        string userPrompt = selectPrompt(prompt);
        Debug.Log("userPrompt: " + userPrompt);
        propertyPreds.Clear();
        try
        {
            var result = await Utils.s_OpenAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt, temperature: Utils.s_CompletionTemperature);
            openAIMessage = result.ToString();
            Debug.Log("property selector: " + openAIMessage);
            foreach (string properties in openAIMessage.Split("\n"))
            {
                Dictionary<string, string> propertyMap = new Dictionary<string, string>();
                foreach (string propertyMessage in properties.Split(", "))
                {
                    string[] propertyTuple = propertyMessage.Split(": ");
                    if (propertyTuple.Length > 1)
                    {
                        string targetProperty = propertyTuple[0];
                        string targetFeature = propertyTuple[1];
                        if (propertyTragets.ContainsKey(targetProperty) && targetFeature != "N/A")
                        {
                            // historyMessages.Add("<color=green>select: [" + targetProperty + "] -> " + "[" + targetFeature + "]</color>\n");
                            Debug.Log("<color=green>select: [" + targetProperty + "] -> " + "[" + targetFeature + "]</color>\n"); 
                            propertyMap.Add(targetProperty, targetFeature);
                        }
                    }
                }
                if (propertyMap.Count > 0) propertyPreds.Add(propertyMap);
            }
        }
        catch (Exception e)
        {
            Debug.Log("select property extractor gets exception in OpenAICompletion:\n" + e);
        }
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