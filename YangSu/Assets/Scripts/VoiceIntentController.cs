using System;
using System.Linq;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using Oculus.Voice;
using UnityEngine.UI;
using OpenAI;
using OpenAI.Chat;
using UnityEngine.XR.Interaction.Toolkit;

public class VoiceIntentController : MonoBehaviour
{
    [Header("Controller")] 
    [SerializeField] 
    private ActionBasedController leftController;

    [SerializeField] 
    private ActionBasedController rightController;
    
    // add AppVoiceExperience reference
    [Header("Voice")] 
    [SerializeField] 
    private AppVoiceExperience appVoiceExperience;
    
    [Header("Interactable")] 
    [SerializeField]
    private GameObject Interactable;

    [SerializeField]
    private int spawnCount;
    
    [Header("UI")] 
    [SerializeField] 
    private Text fullTranscriptText;
    
    [SerializeField] 
    private Text partialTranscriptText;

    [SerializeField]
    private Text MessageText;

    [SerializeField]
    private GUIStyle MessageGUI;
    
    private ShapeController[] controllers;

    private bool appVoiceActive;

    private OpenAIClient openAIClient;

    private bool activateChat;

    private List<ChatPrompt> chatPrompts;

    private string userMessage;

    private string openAIMessage;

    private string formattedMessage;

    private List<string> historyMessages;

    private bool openAIStatus;

    private void Awake()
    {
        Utils.InitBuildings(Interactable, spawnCount);
        controllers = FindObjectsOfType<ShapeController>();

        // bind transcriptions and activate state
        appVoiceExperience.events.onFullTranscription.AddListener((transcription) =>
        {
            userMessage = transcription;
            fullTranscriptText.text = transcription;
        });
        
        appVoiceExperience.events.onPartialTranscription.AddListener((transcription) =>
        {
            partialTranscriptText.text = transcription;
        });
        
        appVoiceExperience.events.OnRequestCreated.AddListener((request) =>
        {
            appVoiceActive = true;
            Debug.Log("OnRequest Created");
        });

        appVoiceExperience.events.OnRequestCompleted.AddListener(OnVoiceEnd);

        openAIClient = new OpenAIClient(OpenAIAuthentication.LoadFromEnv());

        chatPrompts = new List<ChatPrompt>
        {
            new ChatPrompt("system", "You are a helpful, creative, clever, and very friendly assistant"),
        };

        historyMessages = new List<string>();
        MessageGUI = new GUIStyle
        {
            richText = true
        };
        formattedMessage = "This is the beginning of the conversation.";
    }

    private void Update()
    {
        // Keyboard.current.spaceKey.wasPressedThisFrame
        // appVoiceActive
        // activate voice experience
        if (!appVoiceActive)
        {
            appVoiceExperience.Activate();
        }
    }

    private void OnGUI()
    {
        GUILayout.Label(formattedMessage, MessageGUI);
    }

    private string PrintHistory(List<String> formattedMessages, int tail = 10)
    {
        string ret = "";
        for (int i = Math.Max(0, formattedMessages.Count - tail); i < formattedMessages.Count; i++)
        {
            ret += formattedMessages[i];
        }
        return ret;
    }

    private async void OnVoiceEnd()
    {
        appVoiceActive = false;
        Debug.Log("OnRequest Completed");
        await CallOpenAI(userMessage);
    }

    private async Task CallOpenAI(string prompt)
    {
        historyMessages.Add("<color=blue>User: " + prompt + "</color>\n");
        await PropertyExtractor.SelectProperty(prompt, historyMessages);
        if (PropertyExtractor.propertyPreds.Count == 0)
        {
            openAIStatus = false;
            historyMessages.Add("<color=red>System: Sorry, can you say that one more time to the assistant?</color>\n");
            formattedMessage = PrintHistory(historyMessages);
            MessageText.text = formattedMessage;
            return;
        }
        openAIStatus = true;
        await PropertyMatcher.MatchProperty(PropertyExtractor.propertyPreds, controllers, historyMessages);
        PropertyMatcher.MatchHighlight(controllers);
        historyMessages.Add("<color=black>Assistant: " + PropertyMatcher.matchedControllers.Count + " objects selected</color>\n");
        formattedMessage = PrintHistory(historyMessages);
        MessageText.text = formattedMessage;
        // OpenAIChat(prompt);
    }

    private async void OpenAIChat(string prompt)
    {
        try
        {
            chatPrompts.Add(new ChatPrompt("user", prompt));
            historyMessages.Add("<color=blue>User: " + prompt + "</color>\n");
            var chatRequest = new ChatRequest(chatPrompts);
            var result = await openAIClient.ChatEndpoint.GetCompletionAsync(chatRequest);
            openAIMessage = result.FirstChoice.ToString();
            historyMessages.Add("<color=green>Assistant: " + openAIMessage + "</color>\n");
            chatPrompts.Add(new ChatPrompt("assistant", openAIMessage));
            openAIStatus = true;
        }
        catch (Exception e)
        {
            openAIStatus = false;
            Debug.Log("exception in OpenAIChat:\n" + e);
            historyMessages.Add("<color=blue>User: " + prompt + "</color>\n");
            historyMessages.Add("<color=red>System: Sorry, can you say that one more time to the assistant?</color>\n");
        }
    }

    public void SetColor(String[] info)
    {
        DisplayValues("SetColor:", info);
        // set color info based on intent response
        if (info.Length > 1 && Enum.TryParse(info[0], true, out Shapes shape) &&
            ColorUtility.TryParseHtmlString(info[1], out Color color))
        {
            if (shape == Shapes.All)
            {
                foreach (var controller in controllers)
                {
                    controller.SetColor(color);
                }
            }
            else
            {
                var shapeController = controllers.FirstOrDefault(c => c.shapes == shape);
                shapeController.SetColor(color);
            }
        }
    }

    public void SetRotation(String[] info)
    {
        DisplayValues("SetRotation:", info);
        // set rotation info based on intent response
        if (info.Length > 1 && Enum.TryParse(info[0], true, out Shapes shape) &&
            float.TryParse(info[1], out float targetRotation))
        {
            if (shape == Shapes.All)
            {
                foreach (var controller in controllers)
                {
                    controller.RotateTo(targetRotation);
                }
            }
            else
            {
                var shapeController = controllers.FirstOrDefault(c => c.shapes == shape);
                shapeController.RotateTo(targetRotation);
            }
        }
    }

    public void MoveShape(String[] info)
    {
        DisplayValues("MoveShape: ", info);
        // move shape info based on intent response
        if (info.Length > 1 && Enum.TryParse(info[0], true, out Shapes shape) &&
            Enum.TryParse(info[1], true, out Direction direction))
        {
            if (shape == Shapes.All)
            {
                foreach (var controller in controllers)
                {
                    controller.MoveDirection(direction);
                }
            }
            else
            {
                var shapeController = controllers.FirstOrDefault(c => c.shapes == shape);
                shapeController.MoveDirection(direction);
            }
        }
    }

    private static void DisplayValues(string prefix, string[] info)
    {
        foreach (var i in info)
        {
            Debug.Log($"{prefix} {i}");
        }
    }
}