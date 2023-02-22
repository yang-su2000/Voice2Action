using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using Oculus.Voice;
using TMPro;

public class VoiceIntentController : MonoBehaviour
{
    // add AppVoiceExperience reference
    [Header("Voice")] [SerializeField] private AppVoiceExperience appVoiceExperience;
    
    [Header("UI")] [SerializeField] private TextMeshProUGUI fullTranscriptText;
    
    [SerializeField] private TextMeshProUGUI partialTranscriptText;
    
    private ShapeController[] controllers;

    private bool appVoiceActive;

    private static ILogger logger;

    private void Awake()
    {
        controllers = FindObjectsOfType<ShapeController>();
        // fullTranscriptText.text = partialTranscriptText.text = string.Empty;
        logger = Debug.unityLogger;

        // bind transcriptions and activate state
        
        appVoiceExperience.events.onFullTranscription.AddListener((transcription) =>
        {
            fullTranscriptText.text = transcription;
        });
        
        appVoiceExperience.events.onPartialTranscription.AddListener((transcription) =>
        {
            partialTranscriptText.text = transcription;
        });
        
        appVoiceExperience.events.OnRequestCreated.AddListener((request) =>
        {
            appVoiceActive = true;
            logger.Log("OnRequestCreated Active");
        });
        
        appVoiceExperience.events.OnRequestCompleted.AddListener(() =>
        {
            appVoiceActive = false;
            logger.Log("OnRequestCompleted Active");
        });
    }

    private void Update()
    {
        if (Keyboard.current.spaceKey.wasPressedThisFrame && !appVoiceActive)
        {
            // activate voice experience
            appVoiceExperience.Activate();
        }
    }

    public void SetColor(String[] info)
    {
        DisplayValues("SetColor:", info);
        // set color info based on intent response
        if (info.Length > 0 && ColorUtility.TryParseHtmlString(info[0], out Color color))
        {
            foreach (var controller in controllers)
            {
                controller.SetColor(color);
            }
        }
    }

    public void SetRotation(String[] info)
    {
        DisplayValues("SetRotation:", info);
        // set rotation info based on intent response
        if (info.Length > 0 && float.TryParse(info[0], out float targetRotation))
        {
            foreach (var controller in controllers)
            {
                controller.RotateTo(targetRotation);
            }
        }
    }

    public void MoveShape(String[] info)
    {
        DisplayValues("MoveShape:", info);
        // move shape info based on intent response
        if (info.Length > 1 && Enum.TryParse(info[0], true, out Shapes shape))
        {
            if (Enum.TryParse(info[1], true, out Direction direction))
            {
                var shapeController = controllers.FirstOrDefault(c => c.Shape == shape);
                shapeController.MoveDirection(direction);
            }
        }
    }

    private static void DisplayValues(string prefix, string[] info)
    {
        foreach (var i in info)
        {
            logger.Log($"{prefix} {i}");
        }
    }
}
