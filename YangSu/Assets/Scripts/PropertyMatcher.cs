using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public static class PropertyMatcher
{
    public static List<ShapeController> matchedControllers = new List<ShapeController>();
        
    private static string openAIMessage;

    // property, example usage
    private static Dictionary<string, string> matchTuples = new Dictionary<string, string>
    {
        {"distance", "extract the start and end range. min = 0, max = 100.\n" +
                     "input:\n" +
                     "at least eighteen m\n" +
                     "output:\n" +
                     "18, 100\n" +
                     "input:\n" +
                     "within five m\n" +
                     "output:\n" +
                     "0, 5\n" +
                     "input:\n"},
    };

    // prompt word, property, list of entities, top-k most similar items to extract
    private static string EmbeddingPrompt(string userPrompt, string propertyType, List<string> targets, int topK)
    {
        string ret = "rank the top-" + topK + " most similar " + propertyType + " to the word \"" + userPrompt + "\" by their pronunciation, with confidence from 0% to 100%. " +
                     "no explanation needed. output format: rank, color, x%\ninput:\n";
        for (int i=0; i<targets.Count; i++)
        {
            ret += (i + 1) + ", " + targets[i] + "\n";
        }
        ret += "output:\n";
        return ret;
    }

    private static List<string> TokenizeMessage(string message, int topK)
    {
        if (topK > 1)
        {
            // TODO
            return new List<string>();
        }
        string[] tuple = message.Split("\n");
        string[] candidateTuple = tuple[0].Split(", ");
        if (candidateTuple.Length == 3 && int.TryParse(candidateTuple[2].Remove(candidateTuple[2].Length-1), out int confidence))
        {
            if (confidence >= Utils.MinConfidenceToProceed)
            {
                return new List<string> { candidateTuple[1] };
            }
        }
        return new List<string>();
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
                    await MatchShape(feature, historyMessages);
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
                else if (property == "direction")
                {
                    await MatchDirection(feature, historyMessages);
                }
                else
                {
                    
                }
            }
        }
        foreach (var controller in controllers)
        {
            XRGrabInteractable xrGrabInteractable = controller.GetComponent<XRGrabInteractable>();
            if (xrGrabInteractable == null) continue;
            if (matchedControllers.Contains(controller))
            {
                xrGrabInteractable.enabled = true;
            }
            else
            {
                xrGrabInteractable.enabled = false;
            }
        }
    }
    
    private static async Task MatchShape(string feature, List<string> historyMessages)
    {
        List<ShapeController> filteredControllers = new List<ShapeController>();
        string userPrompt = EmbeddingPrompt(feature, "shape", new List<string>(Embeddings.ShapesMap.Keys), 1);
        Debug.Log("ShapesPrompt:\n" + userPrompt);
        try
        {
            var result = await Utils.OpenAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt, temperature: Utils.CompletionTemperature);
            openAIMessage = result.ToString();
            Debug.Log("shape matcher: " + openAIMessage);
            List<string> response = TokenizeMessage(openAIMessage, topK: 1);
            if (response.Count > 0 && Embeddings.ShapesMap.ContainsKey(response[0]))
            {
                string shapeName = response[0];
                Shapes shape = Embeddings.ShapesMap[shapeName];
                historyMessages.Add("<color=purple>shape: [" + shapeName + "]</color>\n");
                Debug.Log("<color=purple>shape: [" + shapeName + "]</color>\n");
                foreach (var controller in matchedControllers)
                {
                    if (shape == Shapes.Object || shape == controller.shapes)
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
            Debug.Log("shape matcher get exception in OpenAICompletion:\n" + e);
        }
        matchedControllers = filteredControllers;
    }

    private static async Task MatchColor(string feature, List<string> historyMessages)
    {
        List<ShapeController> filteredControllers = new List<ShapeController>();
        string userPrompt = EmbeddingPrompt(feature, "color", new List<string>(Embeddings.ColorMap.Keys), 1);
        Debug.Log("ColorPrompt:\n" + userPrompt);
        try
        {
            var result = await Utils.OpenAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt, temperature: Utils.CompletionTemperature);
            openAIMessage = result.ToString();
            Debug.Log("color matcher: " + openAIMessage);
            List<string> response = TokenizeMessage(openAIMessage, topK: 1);
            if (response.Count > 0 && Embeddings.ColorMap.ContainsKey(response[0]))
            {
                string colorName = response[0];
                Color color = Embeddings.ColorMap[colorName];
                historyMessages.Add("<color=purple>color: [" + colorName + "]</color>\n");
                Debug.Log("<color=purple>color: [" + colorName + "]</color>\n");
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
        string userPrompt = EmbeddingPrompt(feature, "address", new List<string>(Embeddings.AddressMap.Keys), 1);
        Debug.Log("AddressPrompt:\n" + userPrompt);
        try
        {
            var result = await Utils.OpenAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt, temperature: Utils.CompletionTemperature);
            openAIMessage = result.ToString();
            Debug.Log("address matcher: " + openAIMessage);
            List<string> response = TokenizeMessage(openAIMessage, topK: 1);
            if (response.Count > 0 && Embeddings.AddressMap.ContainsKey(response[0]))
            {
                string address = response[0];
                (float x1, float x2, float z1, float z2) = Embeddings.AddressMap[address];
                historyMessages.Add("<color=purple>address: [" + address + "]</color>\n");
                Debug.Log("<color=purple>address: [" + address + "]</color>\n");
                foreach (var controller in matchedControllers)
                {
                    Vector3 controllerPosition = controller.transform.position;
                    if (x1 <= controllerPosition.x && controllerPosition.x <= x2 && z1 <= controllerPosition.z && controllerPosition.z <= z2)
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
            var result = await Utils.OpenAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt, temperature: Utils.CompletionTemperature);
            openAIMessage = result.ToString();
            Debug.Log("distance matcher: " + openAIMessage);
            string[] tuple = openAIMessage.Split(", ");
            if (tuple.Length == 3 && int.TryParse(tuple[0], out int start) && int.TryParse(tuple[1], out int end))
            {
                if (start > end)
                {
                    (start, end) = (end, start);
                }
                historyMessages.Add("<color=purple>distance start: [" + start + "] end: [" + end + "]</color>\n");
                Debug.Log("<color=purple>distance start: [" + start + "] end: [" + end + "]</color>\n");
                Vector3 playerPosition = GameObject.FindGameObjectWithTag("Player").transform.position;
                foreach (var controller in matchedControllers)
                {
                    Vector3 controllerPosition = controller.transform.position;
                    float diff = Mathf.Sqrt(Mathf.Pow(controllerPosition.x - playerPosition.x, 2) + Mathf.Pow(controllerPosition.z - playerPosition.z, 2));
                    if (start <= diff && diff <= end)
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

    private static async Task MatchDirection(string feature, List<string> historyMessages)
    {
        List<ShapeController> filteredControllers = new List<ShapeController>();
        string userPrompt = EmbeddingPrompt(feature, "direction", new List<string>(Embeddings.DirectionMap.Keys), 1);
        Debug.Log("DirectionPrompt:\n" + userPrompt);
        try
        {
            var result = await Utils.OpenAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt, temperature: Utils.CompletionTemperature);
            openAIMessage = result.ToString();
            Debug.Log("direction matcher: " + openAIMessage);
            List<string> response = TokenizeMessage(openAIMessage, topK: 1);
            if (response.Count > 0 && Embeddings.DirectionMap.ContainsKey(response[0]))
            {
                string directionName = response[0];
                Vector3 direction = Embeddings.DirectionMap[directionName];
                historyMessages.Add("<color=purple>direction: [" + directionName + "]</color>\n");
                Debug.Log("<color=purple>direction: [" + directionName + "]</color>\n");
                Vector3 playerPosition = GameObject.FindGameObjectWithTag("Player").transform.position;
                foreach (var controller in matchedControllers)
                {
                    Vector3 controllerPosition = controller.transform.position;
                    Vector3 diffPosition = controllerPosition - playerPosition;
                    if (Vector3.Dot(diffPosition, direction) > 0f)
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
            Debug.Log("direction matcher get exception in OpenAICompletion:\n" + e);
        }
        matchedControllers = filteredControllers;
    }
}