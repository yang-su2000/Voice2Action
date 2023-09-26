using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public static class PropertyMatcher
{
    public static List<ShapeController> m_MatchedControllers = new List<ShapeController>();
        
    private static string m_OpenAIMessage;

    // property, example usage
    private static Dictionary<string, string> m_MatchTuples = new Dictionary<string, string>
    {
        {"distance", "extract the start and end range. min = 0, max = 100.\n" +
                     "input:\n" +
                     "at least eighteen m\n" +
                     "output:\n" +
                     "18, 100\n" +
                     "input:\n" +
                     "less than five m\n" +
                     "output:\n" +
                     "0, 5\n" +
                     "input:\n" +
                     "two to three m\n" +
                     "output:\n" +
                     "2, 3\n" +
                     "input:\n"},
    };

    // prompt word, property, list of entities, top-k most similar items to extract
    private static string EmbeddingPrompt(string userPrompt, string propertyType, List<string> targets, int topK)
    {
        string ret = "rank the top-" + topK + " most similar " + propertyType + " to the word \"" + userPrompt + "\", with confidence from 100% to 0%. " +
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
        // TODO: topk > 1 should be handled one by one
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
        ShapeController[] allControllers, List<string> historyMessages)
    {
        m_MatchedControllers = new List<ShapeController>(allControllers);
        foreach (Dictionary<string, string> propertyMap in propertyPreds)
        {
            foreach ((string property, string feature) in propertyMap)
            {
                bool successFlag = true;
                if (property == "shape")
                {
                    successFlag = await MatchShape(feature, historyMessages);
                }
                else if (property == "color")
                {
                    successFlag = await MatchColor(feature, historyMessages);
                }
                else if (property == "distance")
                {
                    successFlag = await MatchDistance(feature, historyMessages);
                }
                else if (property == "address")
                {
                    successFlag = await MatchAddress(feature, historyMessages);
                }
                else if (property == "direction")
                {
                    successFlag = await MatchDirection(feature, historyMessages);
                }
                else
                {
                    // TODO: Add more
                }
            }
        }
        foreach (var controller in allControllers)
        {
            XRGrabInteractable xrGrabInteractable = controller.grabInteractable;
            if (xrGrabInteractable == null) continue;
            if (m_MatchedControllers.Contains(controller))
            {
                xrGrabInteractable.enabled = true;
            }
            else
            {
                xrGrabInteractable.enabled = false;
            }
        }
    }
    
    private static async Task<bool> MatchShape(string feature, List<string> historyMessages)
    {
        List<ShapeController> filteredControllers = new List<ShapeController>();
        string userPrompt = EmbeddingPrompt(feature, "shape", new List<string>(Embeddings.ShapesMap.Keys), Utils.TopK);
        Debug.Log("ShapesPrompt:\n" + userPrompt);
        bool successFlag = true;
        try
        {
            var result = await Utils.s_OpenAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt, temperature: Utils.k_CompletionTemperature);
            m_OpenAIMessage = result.ToString();
            Debug.Log("shape matcher: " + m_OpenAIMessage);
            List<string> response = TokenizeMessage(m_OpenAIMessage, Utils.s_TopK);
            if (response.Count > 0 && Embeddings.m_ShapesMap.ContainsKey(response[0]))
            {
                string shapeName = response[0];
                Shapes shape = Embeddings.m_ShapesMap[shapeName];
                historyMessages.Add("<color=purple>shape: [" + shapeName + "]</color>\n");
                Debug.Log("<color=purple>shape: [" + shapeName + "]</color>\n");
                foreach (var controller in m_MatchedControllers)
                {
                    if (shape == Shapes.Object || shape == controller.m_Shapes)
                    {
                        filteredControllers.Add(controller);
                    }
                }
            }
            else
            {
                // filteredControllers = matchedControllers;
                successFlag = false;
            }
        }
        catch (Exception e)
        {
            Debug.Log("shape matcher get exception in OpenAICompletion:\n" + e);
            successFlag = false;
        }
        if (successFlag) m_MatchedControllers = filteredControllers;
        return successFlag;
    }

    private static async Task<bool> MatchColor(string feature, List<string> historyMessages)
    {
        List<ShapeController> filteredControllers = new List<ShapeController>();
        string userPrompt = EmbeddingPrompt(feature, "color", new List<string>(Embeddings.m_ColorMap.Keys), Utils.s_TopK);
        Debug.Log("ColorPrompt:\n" + userPrompt);
        bool successFlag = true;
        try
        {
            var result = await Utils.s_OpenAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt, temperature: Utils.k_CompletionTemperature);
            m_OpenAIMessage = result.ToString();
            Debug.Log("color matcher: " + m_OpenAIMessage);
            List<string> response = TokenizeMessage(m_OpenAIMessage, Utils.s_TopK);
            if (response.Count > 0 && Embeddings.m_ColorMap.ContainsKey(response[0]))
            {
                string colorName = response[0];
                Color color = Embeddings.m_ColorMap[colorName];
                historyMessages.Add("<color=purple>color: [" + colorName + "]</color>\n");
                Debug.Log("<color=purple>color: [" + colorName + "]</color>\n");
                foreach (var controller in m_MatchedControllers)
                {
                    foreach (Renderer renderer in controller.renderers)
                    {
                        Color controllerColor = renderer.material.color;
                        if (controllerColor.r == color.r && controllerColor.g == color.g && controllerColor.b == color.b)
                        {
                            // If at least one child of the object has the matched color, add it
                            filteredControllers.Add(controller);
                            break;
                        }
                    }
                }
            }
            else
            {
                // filteredControllers = matchedControllers;
                successFlag = false;
            }
        }
        catch (Exception e)
        {
            Debug.Log("color matcher get exception in OpenAICompletion:\n" + e);
            successFlag = false;
        }
        if (successFlag) m_MatchedControllers = filteredControllers;
        return successFlag;
    }

    private static async Task<bool> MatchAddress(string feature, List<string> historyMessages)
    {
        List<ShapeController> filteredControllers = new List<ShapeController>();
        string userPrompt = EmbeddingPrompt(feature, "address", new List<string>(Embeddings.m_AddressMap.Keys), Utils.s_TopK);
        Debug.Log("AddressPrompt:\n" + userPrompt);
        bool successFlag = true;
        try
        {
            var result = await Utils.s_OpenAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt, temperature: Utils.k_CompletionTemperature);
            m_OpenAIMessage = result.ToString();
            Debug.Log("address matcher: " + m_OpenAIMessage);
            List<string> response = TokenizeMessage(m_OpenAIMessage, Utils.s_TopK);
            if (response.Count > 0 && Embeddings.m_AddressMap.ContainsKey(response[0]))
            {
                string address = response[0];
                (float x1, float x2, float z1, float z2) = Embeddings.m_AddressMap[address];
                historyMessages.Add("<color=purple>address: [" + address + "]</color>\n");
                Debug.Log("<color=purple>address: [" + address + "]</color>\n");
                foreach (var controller in m_MatchedControllers)
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
                // filteredControllers = matchedControllers;
                successFlag = false;
            }
        }
        catch (Exception e)
        {
            Debug.Log("address matcher get exception in OpenAICompletion:\n" + e);
            successFlag = false;
        }
        if (successFlag) m_MatchedControllers = filteredControllers;
        return successFlag;
    }

    private static async Task<bool> MatchDistance(string feature, List<string> historyMessages)
    {
        List<ShapeController> filteredControllers = new List<ShapeController>();
        string userPrompt = m_MatchTuples["distance"] + feature + "\nOutput:\n";
        Debug.Log("distancePrompt:\n" + userPrompt);
        bool successFlag = true;
        try
        {
            var result = await Utils.s_OpenAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt, temperature: Utils.k_CompletionTemperature);
            m_OpenAIMessage = result.ToString();
            Debug.Log("distance matcher: " + m_OpenAIMessage);
            string[] tuple = m_OpenAIMessage.Split(", ");
            if (tuple.Length == 2 && int.TryParse(tuple[0], out int start) && int.TryParse(tuple[1], out int end))
            {
                if (start > end)
                {
                    (start, end) = (end, start);
                }
                historyMessages.Add("<color=purple>distance start: [" + start + "] end: [" + end + "]</color>\n");
                Debug.Log("<color=purple>distance start: [" + start + "] end: [" + end + "]</color>\n");
                Vector3 playerPosition = GameObject.FindGameObjectWithTag("Player").transform.position;
                foreach (var controller in m_MatchedControllers)
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
                // filteredControllers = matchedControllers;
                successFlag = false;
            }
        }
        catch (Exception e)
        {
            Debug.Log("distance matcher get exception in OpenAICompletion:\n" + e);
            successFlag = false;
        }
        if (successFlag) m_MatchedControllers = filteredControllers;
        return successFlag;
    }

    private static async Task<bool> MatchDirection(string feature, List<string> historyMessages)
    {
        List<ShapeController> filteredControllers = new List<ShapeController>();
        string userPrompt = EmbeddingPrompt(feature, "direction", new List<string>(Embeddings.m_DirectionMap.Keys), Utils.s_TopK);
        Debug.Log("DirectionPrompt:\n" + userPrompt);
        bool successFlag = true;
        try
        {
            var result = await Utils.s_OpenAIClient.CompletionsEndpoint.CreateCompletionAsync(userPrompt, temperature: Utils.k_CompletionTemperature);
            m_OpenAIMessage = result.ToString();
            Debug.Log("direction matcher: " + m_OpenAIMessage);
            List<string> response = TokenizeMessage(m_OpenAIMessage, Utils.s_TopK);
            if (response.Count > 0 && Embeddings.m_DirectionMap.ContainsKey(response[0]))
            {
                string directionName = response[0];
                Vector3 direction = Embeddings.m_DirectionMap[directionName];
                historyMessages.Add("<color=purple>direction: [" + directionName + "]</color>\n");
                Debug.Log("<color=purple>direction: [" + directionName + "]</color>\n");
                Vector3 playerPosition = GameObject.FindGameObjectWithTag("Player").transform.position;
                foreach (var controller in m_MatchedControllers)
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
                // filteredControllers = matchedControllers;
                successFlag = false;
            }
        }
        catch (Exception e)
        {
            Debug.Log("direction matcher get exception in OpenAICompletion:\n" + e);
            successFlag = false;
        }
        if (successFlag) m_MatchedControllers = filteredControllers;
        return successFlag;
    }
}