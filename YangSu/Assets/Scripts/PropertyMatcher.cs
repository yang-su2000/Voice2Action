using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using OpenAI;
using Unity.Mathematics;
using Random = UnityEngine.Random;

public static class PropertyMatcher
{
    public static List<ShapeController> matchedControllers;

    private static OpenAIClient openAIClient = new OpenAIClient(OpenAIAuthentication.LoadFromEnv());
        
    private static string openAIMessage;

    // property, example usage
    private static Dictionary<string, string> matchTuples = new Dictionary<string, string>
    {
        {"position", "Extract the starting and ending range of the given phrase.\nInput => from negative eleven to eighteen m\nOutput => -11, 18\n" +
                     "Input => four, two, five m\nOutput => 4, 2, 5\nInput => "},
    };

    public static void MatchHighlight(ShapeController[] controllers)
    {
        Color hightlightColor = new Color(
            Random.Range(0f, 1f),
            Random.Range(0f, 1f),
            Random.Range(0f, 1f)
        );
        foreach (var controller in controllers) controller.SetColor(Color.white);
        foreach (var controller in matchedControllers) controller.SetColor(hightlightColor);
    }
    
    public static async Task MatchProperty(List<Dictionary<string, string>> propertyPreds,
        ShapeController[] controllers, List<string> historyMessages)
    {
        historyMessages.Add("out of " + controllers.Length + " controllers and " + propertyPreds.Count + " properties\n");
        matchedControllers.Clear();
        foreach (var controller in controllers) matchedControllers.Add(controller);
        foreach (Dictionary<string, string> propertyMap in propertyPreds)
        {
            historyMessages.Add("Property Matcher get propertyMap\n");
            foreach ((string property, string feature) in propertyMap)
            {
                historyMessages.Add("Property Matcher get property: [" + property + "] feature: [" + feature + "]\n");
                if (property == "position")
                {
                    await MatchPosition(feature, historyMessages);
                }
                else
                {
                    historyMessages.Add("Property Matcher get property: [" + property + "] feature: [" + feature + "]\n");
                    await MatchPosition(feature, historyMessages);
                }
            }
            historyMessages.Add(matchedControllers.Count + " controllers are filtered\n");
        }
        MatchHighlight(controllers);
    }

    private static async Task MatchPosition(string feature, List<string> historyMessages)
    {
        List<ShapeController> filteredControllers = new List<ShapeController>();
        string userPrompt = matchTuples["position"] + feature + "\nOutput => ";
        try
        {
            var result = await openAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt);
            openAIMessage = result.ToString();
            Debug.Log("position matcher: " + userPrompt + openAIMessage);
            historyMessages.Add("<color=purple>position matcher: " + openAIMessage + "</color>\n");
            string[] tuple = openAIMessage.Split(", ");
            if (tuple.Length > 1 && int.TryParse(tuple[0], out int start) && int.TryParse(tuple[1], out int end)) 
            {
                if (start > end)
                {
                    (start, end) = (end, start);
                }
                historyMessages.Add("<color=purple>position start: [" + start + "] end: [" + end + "]</color>");
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
            Debug.Log("position matcher get exception in OpenAICompletion:\n" + e);
            historyMessages.Add("position matcher get exception in OpenAICompletion:\n" + e);
        }
        matchedControllers = filteredControllers;
    }

    // private static async Task<List<ShapeController>> MatchColor(string feature, List<ShapeController> validControllers, List<string> historyMessages)
    // {
    //     
    // }
}