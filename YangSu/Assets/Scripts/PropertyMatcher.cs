using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using OpenAI;
using Random = UnityEngine.Random;

public static class PropertyMatcher
{
    
    private static OpenAIClient openAIClient = new OpenAIClient(OpenAIAuthentication.LoadFromEnv());
        
    private static string openAIMessage;

    private static List<ShapeController> validControllers;
    
    // property, example usage
    private static Dictionary<string, string> matchTuples = new Dictionary<string, string>
    {
        {"position", "Extract the starting and ending range of the given phrase.\nInput => from negative eleven point five to eighteen meters\nOutput => -11.5, 18\n" +
                     "Input => four, three, five point five m\nOutput => 4, 3, 5.5\nInput => "},
    };

    public static async Task MatchProperty(List<(string, List<string>)> propertyTuples, ShapeController[] controllers, List<string> historyMessages)
    {
        foreach (var controller in controllers)
        {
            validControllers.Add(controller);
        }
        foreach ((string property, List<string> features) in propertyTuples)
        {
            if (property == "position")
            {
                foreach (string feature in features)
                {
                    await MatchPosition(feature, historyMessages);
                }
            } else if (property == "color")
            {
                foreach (string feature in features)
                {
                    await MatchColor(feature, historyMessages);
                }
            }
        }
    }

    private static async Task MatchPosition(string feature, List<string> historyMessages)
    {
        List<ShapeController> matchedControllers = new List<ShapeController>();
        string userPrompt = matchTuples["position"] + feature + "\nOutput => ";
        try
        {
            var result = await openAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt);
            openAIMessage = result.ToString();
            Debug.Log("\"position\" matcher: " + userPrompt + openAIMessage);
            historyMessages.Add("<color=purple>\"position\" matcher: " + openAIMessage + "</color>\n");
            string[] tuple = openAIMessage.Split(", ");
            if (tuple.Length > 1)
            {
                if (float.TryParse(tuple[0], out float start) && (float.TryParse(tuple[1], out float end)))
                {
                    if (start > end)
                    {
                        float tmp = end;
                        end = start;
                        start = tmp;
                    }
                    Color curColor = new Color(
                        Random.Range(0f, 1f),
                        Random.Range(0f, 1f),
                        Random.Range(0f, 1f)
                    );
                    Debug.Log("\"position\" start: [" + start + "] end: [" + end + "]");
                    foreach (var controller in validControllers)
                    {
                        if (start <= controller.transform.position.x && controller.transform.position.x <= end)
                        {
                            matchedControllers.Add(controller);
                            // controller.SetColor(curColor);
                        }
                        else
                        {
                            controller.SetColor(Color.white);
                        }
                    }
                }
            }
        }
        catch (Exception e)
        {
            Debug.Log("\"position\" matcher get exception in OpenAIChat:\n" + e);
        }
    }

    private static async Task MatchColor(string feature, List<string> historyMessages)
    {
        
    }
}