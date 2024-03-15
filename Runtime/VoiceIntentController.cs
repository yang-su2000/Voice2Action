using System;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Threading.Tasks;
using OpenAI;
using OpenAI.Audio;
using OpenAI.Chat;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;

namespace Voice2Action
{
    /// <summary>
    /// The main class of Voice2Action, contains all core required components for the system. <br/>
    /// This class is not inheritable, instead, the user wants to inherit each individual components for customizable behaviors. <br/>
    /// This is a minimal implementation, we will add function re-ordering, rejection sampling, and alignment training with environment and user feedback in future package version. <br/>
    /// The "LLM for Pre-Processing" step in Voice2Action is omitted here by adapting OpenAI Whisper voice recognition.
    /// </summary>
    public class VoiceIntentController : MonoBehaviour
    {
        /// <value>Controls user voice input activation.</value>
        [Header("Input Action Property")]
        [SerializeField] private InputActionProperty m_VoiceActivateAction;
        
        /// <value>Resets Expand Panel.</value>
        [SerializeField] private InputActionProperty m_ExpandResetAction;

        /// <value>The instance of "LLM for Classification".</value>
        [Header("Voice2Action Property")]
        [SerializeField] private PropertyClassifier m_PropertyClassifier;
        
        /// <value>The instance of "LLM for Extraction".</value>
        [SerializeField] private PropertyExtractor m_PropertyExtractor;
        
        /// <value>The instance of "LLM for Execution".</value>
        [SerializeField] private PropertyExecutor m_PropertyExecutor;

        /// <value>All history conversations of users vs. AI.</value>
        [Header("UI")]
        [SerializeField] private GameObject m_Voice2ActionGUIScrollText;
        
        /// <value>The instance of the Speaking Feedback Panel that indicates whether "speaking mode" is activated.</value>
        [SerializeField] private GameObject m_SpeakingFeedbackPanel;

        /// <value>The instance of SceneManager.</value>
        [SerializeField] private SceneManager m_SceneManager;
        
        /// <value>[Debug] Displayed on the top left of the scene in play mode.</value>
        [SerializeField] private GUIStyle m_MessageGUI;
        
        [Header("Custom Interactable")]
        [SerializeField] private GameObject m_Interactable;
        
        [SerializeField] private GameObject m_MyInteractable;
        
        [Header("Custom Action")]
        [SerializeField] private Embeddings m_MyEmbeddings;
        
        [SerializeField] private ShapeController m_MyShapeController;
        
        /// <value>Type of user-defined Embeddings.</value>
        private Type m_MyEmbeddingsType;
        
        /// <value>Type of user-defined ShapeController.</value>
        private Type m_MyShapeControllerType;
        
        /// <value>All candidate objects that are interactable in the Voice2Action pipeline.</value>
        private ShapeController[] m_AllControllers;
        
        /// <value>Selected object indexes in the current frame.</value>
        private bool[] m_SelectedControllers;

        /// <value>Fade state. If true, non-selected objects are faded.</value>
        [Header("Fade In Fade Out")] 
        private bool m_FadeActive;
        
        /// <value>Total clock length to fade.</value>
        private const float k_FadeDuration = 2f;
        
        /// <value>Current clock length to fade.</value>
        private float m_FadeTimer;
        
        /// <value>Most recent user message.</value>
        [Header("Text Params")]
        private string m_UserMessage;
        
        /// <value>Most recent AI message.</value>
        private string m_OpenAIMessage;
        
        /// <value>Most recent message (well-formatted).</value>
        private string m_FormattedMessage;
        
        /// <value>ALl history conversation messages.</value>
        private List<string> m_HistoryMessages;
        
        /// <value>[Debug] Denote model status.</value>
        private bool m_OpenAIStatus;
        
        /// <value>Audio source for listening user voice signal.</value>
        [Header("Audio Params")]
        private AudioSource m_AudioSource;
        
        /// <value>Processed user voice signal.</value>
        private byte[] m_Bytes;
        
        // <value>[Debug] Denote voice recognition status.</value>
        // private bool m_AppVoiceActive; // <Debug Code>

        /// <value>A dictionary where key = functionName, value = JsonSchema of that function in OpenAI API required format.</value>
        [Header("Function Params")]
        private Dictionary<string, Tool> m_ToolDict;

        /// <summary>
        /// Contains default game objects that the user want to interact with using Voice2Action. <br/>
        /// To take effect, the user wants to attach it to the actual parent interactable in the Unity hierarchy before the game starts.
        /// </summary>
        /// <value>The default parent interactable.</value>
        public GameObject interactable
        {
            get => m_Interactable;
            set => m_Interactable = value;
        }

        /// <summary>
        /// Contains user-defined game objects that the user want to interact with using Voice2Action. <br/>
        /// e.g. In CityDemo, this is defined as the parent for all "Address" game objects. <br/>
        /// To take effect, the user wants to attach it to the actual parent interactable in the Unity hierarchy before the game starts. <br/>
        /// To scale, the user can also put sub-parents under it and call them respectively in the user-defined property classes. <br/>
        /// </summary>
        /// <value>The customizable parent interactable.</value>
        public GameObject myInteractable
        {
            get => m_MyInteractable;
            set => m_MyInteractable = value;
        }

        /// <summary>
        /// Contains user-defined fields and attributes for all atomic functions. Also used for customizable behavior in scene initialization.
        /// </summary>
        /// <value>The instance of user-defined Embeddings.</value>
        public Embeddings myEmbeddings
        {
            get => m_MyEmbeddings;
            set => m_MyEmbeddings = value;
        }

        /// <summary>
        /// Contains user-defined interactable properties and actual implementations of all atomic functions.
        /// </summary>
        /// <value>The instance of user-defined ShapeController.</value>
        public ShapeController myShapeController
        {
            get => m_MyShapeController;
            set => m_MyShapeController = value;
        }
        
        private void Awake()
        {
            m_MyShapeControllerType = myShapeController.GetType();
            DestroyImmediate(myShapeController);
            myShapeController = null;
            m_MyEmbeddingsType = myEmbeddings.GetType();
            myEmbeddings.InitProperty(m_PropertyClassifier, m_PropertyExtractor, m_PropertyExecutor);
            myEmbeddings.InitInteractable(interactable, m_MyShapeControllerType);
            myEmbeddings.InitMyInteractable(interactable, myInteractable, m_MyShapeControllerType);
            
            List<string> propertyFunctionNames = new List<string>();
            propertyFunctionNames.AddRange(m_PropertyExtractor.selectionGroup.properties);
            propertyFunctionNames.AddRange(m_PropertyExtractor.modificationGroup.properties);
            m_ToolDict = m_PropertyExecutor.InitFunctionCalls(m_MyShapeControllerType, propertyFunctionNames);
            ShapeController.player = m_SceneManager.xrOriginCamera.gameObject;
            InteractableTarget.sceneManager = m_SceneManager;
            
            m_AllControllers = FindObjectsOfType<ShapeController>();
            m_SelectedControllers = new bool[m_AllControllers.Length];
            for (int i = 0; i < m_SelectedControllers.Length; i++) m_SelectedControllers[i] = true;
            m_AudioSource = GetComponent<AudioSource>();
            m_HistoryMessages = new List<string>();
            m_MessageGUI = new GUIStyle
            {
                richText = true
            };
            m_FormattedMessage = "This is the beginning of the conversation.";
            m_VoiceActivateAction.action.started += _ =>
            {
                // m_AppVoiceActive = true; // <Debug Code>
                m_SpeakingFeedbackPanel.SetActive(true);
                Debug.Log("OnAction Started");
                m_AudioSource.clip = Microphone.Start(Microphone.devices[0], false, 10, 44100);
                if (m_AudioSource == null)
                {
                    Debug.Log("microphone not detected, audio not recorded");
                }
            };
            m_VoiceActivateAction.action.canceled += async _ =>
            {
                // m_AppVoiceActive = false; // <Debug Code>
                m_SpeakingFeedbackPanel.SetActive(false);
                Debug.Log("OnAction Canceled");
                if (Utils.openAIClient == null)
                {
                    try
                    {
                        Utils.openAIClient = new OpenAIClient();
                    }
                    catch (Exception e)
                    {
                        Debug.Log(e);
                        throw;
                    }
                }
                m_UserMessage = await CallWhisper(m_AudioSource.clip);
                if (m_UserMessage != Utils.k_FailureResponse) await CallVoice2Action(m_UserMessage);
            };
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
                for (int i = 0; i < m_AllControllers.Length; i++)
                {
                    if (m_SelectedControllers[i]) m_AllControllers[i].AddTransparency(deltaAlpha);
                    else m_AllControllers[i].AddTransparency(-deltaAlpha);
                }
            }
        }

        /// <summary>
        /// Print message to the Message GUI.
        /// </summary>
        private void OnGUI()
        {
            GUILayout.Label(m_FormattedMessage, m_MessageGUI);
        }

        /// <summary>
        /// Print full message of the user and the AI assistant.
        /// </summary>
        /// <param name="formattedMessages">List of messages denoting user and AI assistant's conversation</param>
        /// <param name="tail">Number of history conversations to keep</param>
        /// <returns>Last "tail" conversations.</returns>
        private string PrintHistory(List<string> formattedMessages, int tail = 10)
        {
            var ret = "";
            for (var i = Math.Max(0, formattedMessages.Count - tail); i < formattedMessages.Count; i++)
                ret += formattedMessages[i];

            return ret;
        }
        
        /// <summary>
        /// Entry point for calling Whisper from the OpenAI API, which translates audio clip to text.
        /// </summary>
        /// <param name="audioClip">Input audio clip to Whisper</param>
        /// <returns>Output text of Whisper, the function needs to be asynchronous to take effect.</returns>
        private async Task<string> CallWhisper(AudioClip audioClip)
        {
            var request = new AudioTranscriptionRequest(audioClip, language: "en");
            try
            {
                var result = await Utils.openAIClient.AudioEndpoint.CreateTranscriptionAsync(request);
                Debug.Log("Whisper: " + result);
                m_OpenAIStatus = true;
                return result;
            }
            catch (Exception e)
            {
                m_OpenAIStatus = false;
                Debug.LogWarning("Exception in Whisper:\n" + e);
                m_HistoryMessages.Add(
                    "<color=red>System: Sorry, can you say that one more time to the assistant?</color>\n");
                return Utils.k_FailureResponse;
            }
        }

        /// <summary>
        /// Entry point for calling the full pipeline of Voice2Action.
        /// </summary>
        /// <param name="prompt">Input message to Voice2Action</param>
        /// <returns>No return value, but the function needs to be asynchronous to take effect.</returns>
        private async Task CallVoice2Action(string prompt)
        {
            m_HistoryMessages.Add("<color=white>User:</color> <color=green>" + prompt + "</color>\n");
            UpdateMessageDisplay("<color=white>User:</color> <color=green>" + prompt + "</color>", m_Voice2ActionGUIScrollText);
            Dictionary<string, string> classifyDict = await m_PropertyClassifier.ClassifyProperty(prompt);
            var countControllers = 0;
            if (classifyDict.TryGetValue("select", out string selectionInput))
            {
                OrderedDictionary selectDict = await m_PropertyExtractor.ExtractProperty("select", selectionInput);
                if (selectDict.Count == 0)
                {
                    m_OpenAIStatus = false;
                    m_HistoryMessages.Add("<color=white>Assistant: no objects selected\n</color>");
                    UpdateMessageDisplay("<color=white>Assistant: no objects selected</color>", m_Voice2ActionGUIScrollText);
                    m_FormattedMessage = PrintHistory(m_HistoryMessages);
                }
                else
                {
                    m_OpenAIStatus = true;
                    ResetControllers();
                    m_SelectedControllers = await m_PropertyExecutor.ExecuteProperty(selectDict, m_ToolDict, 
                        m_MyShapeControllerType, m_AllControllers, m_SelectedControllers, 
                        m_MyEmbeddingsType, myEmbeddings,
                        m_HistoryMessages);
                    m_FadeActive = true;
                    var countProxy = 0;
                    for (int i = 0; i < m_SelectedControllers.Length; i++)
                    {
                        if (!m_SelectedControllers[i]) continue;
                        countControllers++;
                        if (countProxy < SceneManager.k_MaxExpandNum)
                        {
                            m_SceneManager.AddExpandingAndProxy(m_AllControllers[i]);
                            countProxy += 1;
                        }
                    }
                    m_HistoryMessages.Add("<color=white>Assistant:</color> <color=green>" + countControllers +
                                          " objects selected\n</color>");
                    UpdateMessageDisplay("<color=white>Assistant:</color> <color=green>" + countControllers +
                                         " objects selected</color>", m_Voice2ActionGUIScrollText);
                    m_FormattedMessage = PrintHistory(m_HistoryMessages);
                }
            }
            if (classifyDict.TryGetValue("modify", out string modificationInput))
            {
                OrderedDictionary modifyDict = await m_PropertyExtractor.ExtractProperty("modify", modificationInput);
                m_SelectedControllers = await m_PropertyExecutor.ExecuteProperty(modifyDict, m_ToolDict, 
                    m_MyShapeControllerType, m_AllControllers, m_SelectedControllers, 
                    m_MyEmbeddingsType, myEmbeddings,
                    m_HistoryMessages);
                countControllers = 0;
                foreach (var flag in m_SelectedControllers)
                {
                    if (flag) countControllers++;
                }
                m_OpenAIStatus = (countControllers > 0);
                if (m_OpenAIStatus)
                {
                    m_HistoryMessages.Add("<color=white>Assistant:</color> <color=green>" + countControllers +
                                          " objects modified\n</color>");
                    UpdateMessageDisplay("<color=white>Assistant:</color> <color=green>" + countControllers +
                                         " objects modified</color>", m_Voice2ActionGUIScrollText);
                    m_FormattedMessage = PrintHistory(m_HistoryMessages);
                }
            }
        }

        /// <summary>
        /// Utility function to perform text embedding retrieval with the OpenAI API.
        /// </summary>
        /// <param name="userInput">Input user message</param>
        /// <returns>A list of double values.</returns>
        public static async Task<IReadOnlyList<double>> CallEmbedding(string userInput)
        {
            IReadOnlyList<double> output = null;
            try
            {
                var chatResponse =
                    await Utils.openAIClient.EmbeddingsEndpoint.CreateEmbeddingAsync(userInput,
                        model: Utils.k_EmbeddingModel, dimensions: Utils.k_EmbeddingDim);
                output = chatResponse.Data[0].Embedding;
            }
            catch (Exception e)
            {
                Debug.LogWarning("Exception in CallEmbedding:\n" + e);
            }
            return output;
        }
        
        /// <summary>
        /// Utility function to perform chat completion with the OpenAI API.
        /// </summary>
        /// <param name="userInput">Input user message</param>
        /// <param name="systemInput">Input system message</param>
        /// <returns>Response to input instructions.</returns>
        public static async Task<string> CallCompletion(string userInput, string systemInput = "you must follow user instructions.")
        {
            var chatPrompts = new List<Message>
            {
                new(Role.System, systemInput),
                new(Role.User, userInput),
            };
            var chatRequest = new ChatRequest(chatPrompts, model: Utils.k_ChatModel, temperature: Utils.k_CompletionTemperature);
            string output = Utils.k_FailureResponse;
            try
            {
                var chatResponse = await Utils.openAIClient.ChatEndpoint.GetCompletionAsync(chatRequest);
                output = chatResponse.FirstChoice.ToString();
            }
            catch (Exception e)
            {
                Debug.LogWarning("Exception in CallCompletion:\n" + e);
            }
            return output;
        }

        /// <summary>
        /// Utility function to perform function execution with the OpenAI API.
        /// </summary>
        /// <param name="userInput">Input user message</param>
        /// <param name="tools">Json-formatted function declarations</param>
        /// <returns>Json-formatted function call arguments.</returns>
        public static async Task<string> CallCompletionWithTools(string userInput, List<Tool> tools)
        {
            var chatPrompts = new List<Message>
            {
                new(Role.System, PropertyExecutor.k_ExecutionInstruction),
                new(Role.User, userInput),
            };
            var chatRequest = new ChatRequest(chatPrompts, tools: tools, model: Utils.k_ChatModel, temperature: Utils.k_CompletionTemperature);
            string output = Utils.k_FailureResponse;
            try
            {
                var chatResponse = await Utils.openAIClient.ChatEndpoint.GetCompletionAsync(chatRequest);
                if (!string.IsNullOrEmpty(chatResponse.ToString()))
                {
                    // TODO: improve this to support multi-turn conversations
                    Debug.LogWarning($"Tool not used | Response: {chatResponse.FirstChoice} | Finish Reason: {chatResponse.FirstChoice.FinishReason}");
                }
                else
                {
                    var usedTool = chatResponse.FirstChoice.Message.ToolCalls[0];
                    Debug.Log($"Tool used | Function Name: {usedTool.Function.Name} | Response: {usedTool.Function.Arguments} | Finish Reason: {chatResponse.FirstChoice.FinishReason}");
                    output = usedTool.Function.Arguments.ToString();
                }
            }
            catch (Exception e)
            {
                Debug.LogWarning("Exception in CallCompletionWithTools:\n" + e);
            }
            return output;
        }

        /// <summary>
        /// This method is automatically called when we re-expand.
        /// </summary>
        private void ResetControllers()
        {
            for (int i = 0; i < m_SelectedControllers.Length; i++)
            {
                m_SelectedControllers[i] = true;
            }
            m_SceneManager.ClearProxies();
        }

        /// <summary>
        /// This method is manually invoked when the user wants to reset the expand panel.
        /// </summary>
        private void ResetExpand()
        {
            m_SceneManager.ClearProxies();
            m_SceneManager.expandPanel.SetActive(false);
            for (int i = 0; i < m_SelectedControllers.Length; i++)
            {
                m_SelectedControllers[i] = true;
            }
            m_FadeActive = true;
        }

        /// <summary>
        /// Update the scroll view information.
        /// </summary>
        /// <param name="message">Message to view</param>
        /// <param name="parentScrollView">Parent game object to append the message to.</param>
        public static void UpdateMessageDisplay(string message, GameObject parentScrollView)
        {
            var newText = new GameObject(message);
            newText.transform.SetParent(parentScrollView.transform);
            newText.transform.SetSiblingIndex(0);
            newText.transform.localPosition = Vector3.zero;
            newText.transform.localRotation = Quaternion.identity;
            newText.transform.localScale = Vector3.one;
            var textMeshProUGUI = newText.AddComponent<TextMeshProUGUI>();
            textMeshProUGUI.text = message;
            textMeshProUGUI.alignment = TextAlignmentOptions.Center;
            textMeshProUGUI.fontSize = 10;
            textMeshProUGUI.color = Color.black;
            textMeshProUGUI.rectTransform.sizeDelta = new Vector2(200, 20);
        }
    }
}