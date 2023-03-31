using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine;
using OpenAI;
using Unity.Mathematics;
using Unity.VisualScripting;
using ColorUtility = UnityEngine.ColorUtility;
using Random = UnityEngine.Random;

public static class PropertyMatcher
{
    public static List<ShapeController> matchedControllers = new List<ShapeController>();
    
    private static float confidence = 0.5f;
        
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
                    MatchColor(feature, historyMessages);
                }
                else if (property == "distance")
                {
                    await MatchDistance(feature, historyMessages);
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
            historyMessages.Add("<color=purple>shape: [" + shape.ToString() + "]</color>\n");
            foreach (var controller in matchedControllers)
            {
                if (controller.shapes == shape)
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

    private static void MatchColor(string feature, List<string> historyMessages)
    {
        List<ShapeController> filteredControllers = new List<ShapeController>();
        Debug.Log("color matcher: " + feature);
        if (ColorUtility.TryParseHtmlString(feature, out Color color))
        {
            historyMessages.Add("<color=purple>color: [" + color.ToString() + "]</color>\n");
            foreach (var controller in matchedControllers)
            {
                var renderer = controller.GetComponent<Renderer>();
                if (renderer.material.color == color)
                {
                    filteredControllers.Add(controller);
                }
                // if (Utils.IsColorClose(renderer.material.color, color, confidence))
                // {
                //     filteredControllers.Add(controller);
                // }
            }
        }
        else
        {
            filteredControllers = matchedControllers;
        }
        matchedControllers = filteredControllers;
    }

    private static async Task MatchDistance(string feature, List<string> historyMessages)
    {
        List<ShapeController> filteredControllers = new List<ShapeController>();
        string userPrompt = matchTuples["distance"] + feature + "\nOutput:\n";
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