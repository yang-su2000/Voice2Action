using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using Oculus.Voice;
using UnityEngine.UI;
using OpenAI.Chat;
using OpenAI.Audio;
using TMPro;
using Unity.VisualScripting;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class VoiceIntentController : MonoBehaviour
{
    [Header("Controller")] 
    [SerializeField] 
    private ActionBasedController leftController;

    [SerializeField] 
    private ActionBasedController rightController;

    [SerializeField] 
    private InputActionProperty VoiceActivateAction;
    
    // add AppVoiceExperience reference
    [Header("Voice")] 
    [SerializeField] 
    private AppVoiceExperience appVoiceExperience;

    private AudioSource audioSource;
    
    [Header("Interactables")] 
    [SerializeField]
    private GameObject Interactables;
    
    [SerializeField]
    private GameObject PositionMarker;

    [SerializeField]
    private int spawnCount;
    
    [Header("UI")] 
    [SerializeField] 
    private TextMeshProUGUI fullTranscriptText;
    
    [SerializeField] 
    private TextMeshProUGUI partialTranscriptText;

    [SerializeField]
    private TextMeshProUGUI MessageText;

    [SerializeField]
    private GUIStyle MessageGUI;
    
    [Header("Private Messages")]
    private string userMessage;

    private string openAIMessage;

    private string formattedMessage;

    private List<string> historyMessages;

    [Header("Private Fade In Fade Out")] 
    private bool fadeActive;

    private float fadeDuration = 2f;

    private float fadeTimer = 0f;
    
    [Header("Private Others")]
    private ShapeController[] allControllers;

    private Dictionary<string, ShapeController> matchedControllers;

    private bool appVoiceActive;

    private bool activateChat;

    private List<Message> chatPrompts;

    private bool openAIStatus;

    private void Awake()
    {
        // Utils.InitBuildings(Interactable, spawnCount);
        Utils.InitPositionMarker(PositionMarker);
        Utils.InitInteractables(Interactables);
        allControllers = FindObjectsOfType<ShapeController>();
        matchedControllers = new Dictionary<string, ShapeController>();

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
            Debug.Log("OnRequest Created");
            // audioSource.clip = Microphone.Start(Microphone.devices[0], false, 10, 44100);
            // if (audioSource == null)
            // {
            //     Debug.Log("cannot record audio");
            // }
        });

        appVoiceExperience.events.OnRequestCompleted.AddListener(OnVoiceEnd);

        audioSource = GetComponent<AudioSource>();

        chatPrompts = new List<Message>
        {
            new Message(Role.System, "you are a helpful, creative, clever, and very friendly assistant."),
        };

        historyMessages = new List<string>();
        MessageGUI = new GUIStyle
        {
            richText = true
        };
        formattedMessage = "this is the beginning of the conversation.";

        VoiceActivateAction.action.started += _ =>
        {
            appVoiceActive = true;
            appVoiceExperience.Activate();
        };

        VoiceActivateAction.action.canceled += _ =>
        {
            appVoiceActive = false;
        };
    }

    private void Update()
    {
        if (fadeActive)
        {
            float deltaTime = Time.deltaTime;
            fadeTimer += deltaTime;
            if (fadeTimer >= fadeDuration)
            {
                fadeActive = false;
                fadeTimer = 0f;
            }
            float deltaAlpha = deltaTime / fadeDuration;
            foreach (var controller in allControllers)
            {
                if (matchedControllers.ContainsKey(controller.name))
                {
                    controller.AddTransparency(deltaAlpha);
                }
                else
                {
                   controller.AddTransparency(-deltaAlpha);
                }
            }
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
        Debug.Log("OnRequest Completed");
        // Microphone.End(Microphone.devices[0]);
        // userMessage = await CallWhisper(audioSource.clip);
        // Debug.Log("userMessage: " + userMessage);
        // fullTranscriptText.text = userMessage;
        // if (userMessage != "N/A") await CallGPT(userMessage);
        await CallGPT(userMessage);
    }

    private async Task<string> CallWhisper(AudioClip audioClip)
    {
        var request = new AudioTranscriptionRequest(audioClip, language: "en");
        try
        {
            var result = await Utils.OpenAIClient.AudioEndpoint.CreateTranscriptionAsync(request);
            return result;
        }
        catch (Exception e)
        {
            openAIStatus = false;
            Debug.Log("exception in Whisper:\n" + e);
            historyMessages.Add("<color=red>System: Sorry, can you say that one more time to the assistant?</color>\n");
            return "N/A";
        }
    }

    private async Task CallGPT(string prompt)
    {
        historyMessages.Add("<color=blue>User: " + prompt + "</color>\n");
        await PropertyExtractor.SelectProperty(prompt, historyMessages);
        if (PropertyExtractor.propertyPreds.Count == 0)
        {
            openAIStatus = false;
            historyMessages.Add("<color=black>Assistant: " + PropertyMatcher.matchedControllers.Count + " objects selected</color>\n");
            formattedMessage = PrintHistory(historyMessages);
            MessageText.text = formattedMessage;
        }
        else
        {
            openAIStatus = true;
            ResetControllers();
            await PropertyMatcher.MatchProperty(PropertyExtractor.propertyPreds, allControllers, historyMessages);
            fadeActive = true;
            int countProxy = 0;
            foreach (ShapeController controller in PropertyMatcher.matchedControllers)
            {
                matchedControllers.Add(controller.name, controller);
                if (countProxy < SceneManager.maxExpandNum)
                {
                    ShapeController proxyController = controller.interactableTarget.makeVoodoo();
                    SceneManager.add_Expanding_and_Voodoo(controller, proxyController);
                    countProxy += 1;
                }
            }
            historyMessages.Add("<color=black>Assistant: " + PropertyMatcher.matchedControllers.Count + " objects selected</color>\n");
            formattedMessage = PrintHistory(historyMessages);
            MessageText.text = formattedMessage;
        }
    }

    private async void CallChat(string prompt)
    {
        try
        {
            chatPrompts.Add(new Message(Role.User, prompt));
            historyMessages.Add("<color=blue>User: " + prompt + "</color>\n");
            var chatRequest = new ChatRequest(chatPrompts);
            var result = await Utils.OpenAIClient.ChatEndpoint.GetCompletionAsync(chatRequest);
            openAIMessage = result.FirstChoice.ToString();
            historyMessages.Add("<color=green>Assistant: " + openAIMessage + "</color>\n");
            chatPrompts.Add(new Message(Role.Assistant, openAIMessage));
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

    private void ResetControllers()
    {
        matchedControllers.Clear();
        SceneManager.clearProxys();
    }
}