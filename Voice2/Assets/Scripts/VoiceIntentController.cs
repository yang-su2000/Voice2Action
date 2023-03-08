using System;
using System.Linq;
using System.Collections.Generic;
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
    
    [Header("UI")] 
    [SerializeField] 
    private Text fullTranscriptText;
    
    [SerializeField] 
    private Text partialTranscriptText;
    
    private ShapeController[] controllers;

    private bool appVoiceActive;

    private OpenAIClient openAIClient;

    private bool hasChat;

    private List<ChatPrompt> chatPrompts;

    private string openAIMessage;

    private string fullMessage;

    private void Awake()
    {
        controllers = FindObjectsOfType<ShapeController>();

        // bind transcriptions and activate state
        appVoiceExperience.events.onFullTranscription.AddListener((transcription) =>
        {
            fullTranscriptText.text = transcription;
        });
        
        appVoiceExperience.events.onPartialTranscription.AddListener((transcription) =>
        {
            if (leftController.isActiveAndEnabled)
            {
                partialTranscriptText.text = "listening";
            }
            else
            {
                partialTranscriptText.text = "not listening";
            }
            // partialTranscriptText.text = transcription;
        });
        
        appVoiceExperience.events.OnRequestCreated.AddListener((request) =>
        {
            appVoiceActive = true;
            Debug.Log("OnRequestCreated Active");
        });
        
        appVoiceExperience.events.OnRequestCompleted.AddListener(() =>
        {
            appVoiceActive = false;
            Debug.Log("OnRequestCompleted Active");
        });

        openAIClient = new OpenAIClient(OpenAIAuthentication.LoadFromEnv());
    }

    private void Update()
    {
        // Keyboard.current.spaceKey.wasPressedThisFrame
        // appVoiceActive
        // activate voice experience
        appVoiceExperience.Activate();
        if (!hasChat)
        {
            hasChat = true;
            OpenAIChat("this is a test");
        }
    }

    private async void OpenAIChat(string prompt)
    {
        chatPrompts = new List<ChatPrompt>
        {
            new ChatPrompt("system", "You are a helpful assistant."),
            new ChatPrompt("user", prompt),
        };
        fullMessage += "User: " + prompt + "\n";
        var chatRequest = new ChatRequest(chatPrompts);
        var result = await openAIClient.ChatEndpoint.GetCompletionAsync(chatRequest);
        openAIMessage = result.FirstChoice.ToString();
        fullMessage += "Assistant: " + openAIMessage + "\n";
        Debug.Log(fullMessage);
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
