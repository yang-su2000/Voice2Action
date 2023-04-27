using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Threading.Tasks;
using UnityEngine;
using ColorUtility = UnityEngine.ColorUtility;

public static class PropertyMatcher
{
    public static List<ShapeController> matchedControllers = new List<ShapeController>();
        
    private static string openAIMessage;

    // property, example usage
    private static Dictionary<string, string> matchTuples = new Dictionary<string, string>
    {
        {"distance", "Extract the start and end range.\n" +
                     "Input:\n" +
                     "from negative eleven to eighteen m\n" +
                     "Output:\n" +
                     "-11, 18\n" +
                     "Input:\n" +
                     "within five m\n" +
                     "Output:\n" +
                     "0, 5\n" +
                     "Input:\n"},
    };

    // prompt word, property, list of entities, top-k most similar items to extract
    private static string embeddingPrompt(string userPrompt, string propertyType, List<string> targets, int topk)
    {
        string ret = "Rank the top-" + topk + " most similar " + propertyType + " to the word \"" + userPrompt + "\", with confidence from 0% to 100%. " +
                     "No explanation needed. Output Format: rank-color-x%.\nInput:\n";
        for (int i=0; i<targets.Count; i++)
        {
            ret += (i + 1) + "-" + targets[i] + "\n";
        }
        ret += "Output:\n";
        return ret;
    }

    public static async Task MatchProperty(List<Dictionary<string, string>> propertyPreds,
        ShapeController[] controllers, List<string> historyMessages)
    {
        matchedControllers.Clear();
        foreach (var controller in controllers) matchedControllers.Add(controller);
        foreach (Dictionary<string, string> propertyMap in propertyPreds)
        {
            foreach ((string property, string feature) in propertyMap)
            {
                if (property == "shape")
                {
                    MatchShape(feature, historyMessages);
                }
                else if (property == "color")
                {
                    await MatchColor(feature, historyMessages);
                }
                else if (property == "distance")
                {
                    await MatchDistance(feature, historyMessages);
                }
                else if (property == "address")
                {
                    await MatchAddress(feature, historyMessages);
                }
                else
                {
                    
                }
            }
        }
    }
    
    private static void MatchShape(string feature, List<string> historyMessages)
    {
        List<ShapeController> filteredControllers = new List<ShapeController>();
        Debug.Log("shape matcher: " + feature);
        if (Enum.TryParse(feature, true, out Shapes shape))
        {
            historyMessages.Add("<color=purple>shape: [" + shape + "]</color>\n");
            foreach (var controller in matchedControllers)
            {
                if (controller.shapes == shape || controller.shapes == Shapes.Object || controller.shapes == Shapes.Objects)
                {
                    filteredControllers.Add(controller);
                }
                else if (shape == Shapes.Object || shape == Shapes.Objects)
                {
                    filteredControllers.Add(controller);
                }
            }
        }
        else
        {
            filteredControllers = matchedControllers;
        }
        matchedControllers = filteredControllers;
    }

    private static async Task MatchColor(string feature, List<string> historyMessages)
    {
        List<ShapeController> filteredControllers = new List<ShapeController>();
        string userPrompt = embeddingPrompt(feature, "color", new List<string>(Embeddings.ColorMap.Keys), 1);
        Debug.Log("ColorPrompt:\n" + userPrompt);
        try
        {
            var result = await Utils.OpenAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt);
            openAIMessage = result.ToString();
            Debug.Log("color matcher: " + openAIMessage);
            string[] tuple = openAIMessage.Split("-");
            if (tuple.Length > 2 && Embeddings.ColorMap.ContainsKey(tuple[1]))
            {
                string colorName = tuple[1];
                Color color = Embeddings.ColorMap[colorName];
                historyMessages.Add("<color=purple>color: [" + colorName + ": " + color + "]</color>\n");
                foreach (var controller in matchedControllers)
                {
                    var renderer = controller.GetComponent<Renderer>();
                    Color controllerColor = renderer.material.color;
                    if (controllerColor.r == color.r && controllerColor.g == color.g && controllerColor.b == color.b)
                    {
                        filteredControllers.Add(controller);
                    }
                }
            }
            else
            {
                filteredControllers = matchedControllers;
            }
        }
        catch (Exception e)
        {
            Debug.Log("color matcher get exception in OpenAICompletion:\n" + e);
        }
        matchedControllers = filteredControllers;
    }

    private static async Task MatchAddress(string feature, List<string> historyMessages)
    {
        List<ShapeController> filteredControllers = new List<ShapeController>();
        string userPrompt = embeddingPrompt(feature, "address", new List<string>(Embeddings.AddressMap.Keys), 1);
        Debug.Log("AddressPrompt:\n" + userPrompt);
        try
        {
            var result = await Utils.OpenAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt);
            openAIMessage = result.ToString();
            Debug.Log("address matcher: " + openAIMessage);
            string[] tuple = openAIMessage.Split("-");
            if (tuple.Length > 2 && Embeddings.AddressMap.ContainsKey(tuple[1]))
            {
                string address = tuple[1];
                (float x1, float x2, float z1, float z2) = Embeddings.AddressMap[address];
                historyMessages.Add("<color=purple>address: [" + address + " " + Embeddings.AddressMap[address] + "]</color>\n");
                foreach (var controller in matchedControllers)
                {
                    Vector3 position = controller.transform.position;
                    if (x1 <= position.x && position.x <= x2 && z1 <= position.z && position.z <= z2)
                    {
                        filteredControllers.Add(controller);
                    }
                }
            }
            else
            {
                filteredControllers = matchedControllers;
            }
        }
        catch (Exception e)
        {
            Debug.Log("address matcher get exception in OpenAICompletion:\n" + e);
        }
        matchedControllers = filteredControllers;
    }

    private static async Task MatchDistance(string feature, List<string> historyMessages)
    {
        List<ShapeController> filteredControllers = new List<ShapeController>();
        string userPrompt = matchTuples["distance"] + feature + "\nOutput:\n";
        Debug.Log("distancePrompt:\n" + userPrompt);
        try
        {
            var result = await Utils.OpenAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt);
            openAIMessage = result.ToString();
            Debug.Log("distance matcher: " + openAIMessage);
            string[] tuple = openAIMessage.Split(", ");
            if (tuple.Length > 1 && int.TryParse(tuple[0], out int start) && int.TryParse(tuple[1], out int end)) 
            {
                if (start > end)
                {
                    (start, end) = (end, start);
                }
                historyMessages.Add("<color=purple>distance start: [" + start + "] end: [" + end + "]</color>");
                foreach (var controller in matchedControllers)
                {
                    if (start <= controller.transform.position.x && controller.transform.position.x <= end)
                    {
                        filteredControllers.Add(controller);
                    }
                }
            }
            else
            {
                filteredControllers = matchedControllers;
            }
        }
        catch (Exception e)
        {
            Debug.Log("distance matcher get exception in OpenAICompletion:\n" + e);
        }
        matchedControllers = filteredControllers;
    }
}