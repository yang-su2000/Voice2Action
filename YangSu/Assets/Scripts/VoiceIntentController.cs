using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Oculus.Voice;
using OpenAI.Audio;
using OpenAI.Chat;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class VoiceIntentController : MonoBehaviour
{
    private static GameObject m_ScrollText;

    [Header("Controller")] [SerializeField]
    private ActionBasedController m_LeftController;

    [SerializeField] private ActionBasedController m_RightController;

    [Header("InputActionProperty")] [SerializeField]
    private InputActionProperty m_VoiceActivateAction;

    [SerializeField] private InputActionProperty m_ExpandResetAction;

    [Header("Voice")] [SerializeField] private AppVoiceExperience m_AppVoiceExperience;
    private AudioSource m_AudioSource;

    [Header("Interactable")] [SerializeField]
    private GameObject m_Interactable;

    [SerializeField] private GameObject m_PositionMarker;
    [SerializeField] private int m_SpawnCount;

    [Header("UI")] [SerializeField] private TextMeshProUGUI m_FullTranscriptText;
    [SerializeField] private TextMeshProUGUI m_PartialTranscriptText;
    [SerializeField] private TextMeshProUGUI m_MessageText;

    [SerializeField]
    private GUIStyle m_MessageGUI; // this is for debugging only, it is displayed on the top left of the screen

    [Header("Messages")] private string m_UserMessage;
    private string m_OpenAIMessage;
    private string m_FormattedMessage;
    private List<string> m_HistoryMessages;

    [Header("Fade In Fade Out")] private bool m_FadeActive;
    private const float k_FadeDuration = 2f;
    private float m_FadeTimer;

    [Header("Others")] private ShapeController[] m_AllControllers;
    private Dictionary<string, ShapeController> m_MatchedControllers;
    private bool m_AppVoiceActive;
    private bool m_ActivateChat;
    private List<Message> m_ChatPrompts;
    private bool m_OpenAIStatus;

    private void Awake()
    {
        m_ScrollText = GameObject.Find("m_ScrollText");
        // <Debug Code>
        // Utils.InitBuildings(Interactable, m_SpawnCount);
        // <Debug Code>
        Utils.InitPositionMarker(m_PositionMarker);
        Utils.InitInteractable(m_Interactable);
        m_AllControllers = FindObjectsOfType<ShapeController>();
        m_MatchedControllers = new Dictionary<string, ShapeController>();

        // <summary>bind transcriptions and activate state</summary>
        m_AppVoiceExperience.events.onFullTranscription.AddListener(transcription =>
        {
            m_UserMessage = transcription;
            m_FullTranscriptText.text = transcription;
        });
        m_AppVoiceExperience.events.onPartialTranscription.AddListener(transcription =>
        {
            m_PartialTranscriptText.text = "<color=black>Listening: </color>" + transcription;
        });
        m_AppVoiceExperience.events.OnRequestCreated.AddListener(request =>
        {
            Debug.Log("OnRequest Created");
            m_PartialTranscriptText.text = "<color=black>Listening: </color>";
            // <Debug Code>
            // m_AudioSource.clip = Microphone.Start(Microphone.devices[0], false, 10, 44100);
            // if (m_AudioSource == null)
            // {
            //     Debug.Log("cannot record audio");
            // }
            // <Debug Code>
        });
        m_AppVoiceExperience.events.OnRequestCompleted.AddListener(OnVoiceEnd);
        m_AudioSource = GetComponent<AudioSource>();
        m_ChatPrompts = new List<Message>
        {
            new(Role.System, "you are a helpful, creative, clever, and very friendly assistant.")
        };
        m_HistoryMessages = new List<string>();
        m_MessageGUI = new GUIStyle
        {
            richText = true
        };
        m_FormattedMessage = "this is the beginning of the conversation.";
        m_VoiceActivateAction.action.started += _ =>
        {
            m_AppVoiceActive = true;
            m_AppVoiceExperience.Activate();
        };
        m_VoiceActivateAction.action.canceled += _ => { m_AppVoiceActive = false; };
        m_ExpandResetAction.action.started += _ => ResetExpand();
    }

    private void Update()
    {
        if (m_FadeActive)
        {
            var deltaTime = Time.deltaTime;
            m_FadeTimer += deltaTime;
            if (m_FadeTimer >= k_FadeDuration)
            {
                m_FadeActive = false;
                m_FadeTimer = 0f;
            }

            var deltaAlpha = deltaTime / k_FadeDuration;
            foreach (var controller in m_AllControllers)
                if (m_MatchedControllers.ContainsKey(controller.name))
                    controller.AddTransparency(deltaAlpha);
                else
                    controller.AddTransparency(-deltaAlpha);
        }
    }

    /// <summary>
    ///     Print message to the Message GUI.
    /// </summary>
    private void OnGUI()
    {
        GUILayout.Label(m_FormattedMessage, m_MessageGUI);
    }

    /// <summary>
    ///     Print full message of the user and the AI assistant.
    /// </summary>
    private string PrintHistory(List<string> formattedMessages, int tail = 10)
    {
        var ret = "";
        for (var i = Math.Max(0, formattedMessages.Count - tail); i < formattedMessages.Count; i++)
            ret += formattedMessages[i];

        return ret;
    }

    /// <summary>
    ///     Called by the end of user voice input.
    /// </summary>
    private async void OnVoiceEnd()
    {
        Debug.Log("OnRequest Completed");
        //<Debug Code>
        // Microphone.End(Microphone.devices[0]);
        // m_UserMessage = await CallWhisper(m_AudioSource.clip);
        // Debug.Log("m_UserMessage: " + m_UserMessage);
        // m_FullTranscriptText.text = m_UserMessage;
        // if (m_UserMessage != "N/A") await CallGPT(m_UserMessage);
        //<Debug Code>
        await CallGPT(m_UserMessage);
    }

    /// <summary>
    ///     Entry point for calling Whisper from the OpenAI API.
    /// </summary>
    private async Task<string> CallWhisper(AudioClip audioClip)
    {
        var request = new AudioTranscriptionRequest(audioClip, language: "en");
        try
        {
            var result = await Utils.s_OpenAIClient.AudioEndpoint.CreateTranscriptionAsync(request);
            return result;
        }
        catch (Exception e)
        {
            m_OpenAIStatus = false;
            Debug.Log("exception in Whisper:\n" + e);
            m_HistoryMessages.Add(
                "<color=red>System: Sorry, can you say that one more time to the assistant?</color>\n");
            return "N/A";
        }
    }

    /// <summary>
    ///     Entry point for calling the full pipeline of Voice2Action.
    /// </summary>
    private async Task CallGPT(string prompt)
    {
        m_HistoryMessages.Add("User: <color=blue>" + prompt + "</color>\n");
        UpdateMessageDisplay("User: <color=blue>" + prompt + "</color>");
        await PropertyExtractor.SelectProperty(prompt, m_HistoryMessages);
        if (PropertyExtractor.propertyPreds.Count == 0)
        {
            m_OpenAIStatus = false;
            m_HistoryMessages.Add("Assistant: <color=green>" + PropertyMatcher.matchedControllers.Count +
                                  " objects selected\n</color>");
            UpdateMessageDisplay("Assistant: <color=green>" + PropertyMatcher.matchedControllers.Count +
                                 " objects selected</color>");
            m_FormattedMessage = PrintHistory(m_HistoryMessages);
            m_MessageText.text = m_FormattedMessage;
        }
        else
        {
            m_OpenAIStatus = true;
            ResetControllers();
            await PropertyMatcher.MatchProperty(PropertyExtractor.propertyPreds, m_AllControllers, m_HistoryMessages);
            m_FadeActive = true;
            var countProxy = 0;
            foreach (var controller in PropertyMatcher.matchedControllers)
            {
                m_MatchedControllers.Add(controller.name, controller);
                if (countProxy < SceneManager.maxExpandNum)
                {
                    var proxyController = controller.interactableTarget.makeVoodoo();
                    SceneManager.add_Expanding_and_Voodoo(controller, proxyController);
                    countProxy += 1;
                }
            }

            m_HistoryMessages.Add("Assistant: <color=green>" + PropertyMatcher.matchedControllers.Count +
                                  " objects selected\n</color>");
            UpdateMessageDisplay("Assistant: <color=green>" + PropertyMatcher.matchedControllers.Count +
                                 " objects selected</color>");
            m_FormattedMessage = PrintHistory(m_HistoryMessages);
            m_MessageText.text = m_FormattedMessage;
        }
    }

    /// <summary>
    ///     (Deprecated) Entry point for calling ChatGPT from the OpenAI API.
    /// </summary>
    private async void CallChat(string prompt)
    {
        try
        {
            m_ChatPrompts.Add(new Message(Role.User, prompt));
            m_HistoryMessages.Add("<color=blue>User: " + prompt + "</color>\n");
            var chatRequest = new ChatRequest(m_ChatPrompts);
            var result = await Utils.s_OpenAIClient.ChatEndpoint.GetCompletionAsync(chatRequest);
            m_OpenAIMessage = result.FirstChoice.ToString();
            m_HistoryMessages.Add("<color=green>Assistant: " + m_OpenAIMessage + "</color>\n");
            m_ChatPrompts.Add(new Message(Role.Assistant, m_OpenAIMessage));
            m_OpenAIStatus = true;
        }
        catch (Exception e)
        {
            m_OpenAIStatus = false;
            Debug.Log("exception in OpenAIChat:\n" + e);
            m_HistoryMessages.Add("<color=blue>User: " + prompt + "</color>\n");
            m_HistoryMessages.Add(
                "<color=red>System: Sorry, can you say that one more time to the assistant?</color>\n");
        }
    }

    /// <summary>
    ///     This method is automatically called when we re-expand.
    /// </summary>
    private void ResetControllers()
    {
        m_MatchedControllers.Clear();
        SceneManager.clearProxys();
    }

    /// <summary>
    ///     This method is manually invoked when the user wants to reset the expand panel.
    /// </summary>
    private void ResetExpand()
    {
        m_MatchedControllers.Clear();
        SceneManager.clearProxys();
        SceneManager.expandPanel.SetActive(false);
        foreach (var shapeController in m_AllControllers)
            m_MatchedControllers.Add(shapeController.name, shapeController);

        m_FadeActive = true;
    }

    /// <summary>
    ///     Update the scroll view information.
    /// </summary>
    private static void UpdateMessageDisplay(string message)
    {
        var newText = new GameObject("newText");
        newText.transform.SetParent(m_ScrollText.transform);
        newText.transform.localPosition = Vector3.zero;
        newText.transform.localRotation = Quaternion.identity;
        newText.transform.localScale = Vector3.one;
        var textMeshProUGUI = newText.AddComponent<TextMeshProUGUI>();
        textMeshProUGUI.text = message;
        textMeshProUGUI.alignment = TextAlignmentOptions.Center;
        textMeshProUGUI.fontSize = 10;
        textMeshProUGUI.color = Color.black; // darker green
        textMeshProUGUI.rectTransform.sizeDelta = new Vector2(200, 20);
    }
}