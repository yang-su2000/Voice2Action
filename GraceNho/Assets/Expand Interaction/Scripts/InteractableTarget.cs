using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.XR.Interaction.Toolkit;
using Random = System.Random;

public class InteractableTarget : MonoBehaviour
{
    // Start is called before the first frame update
    private XRGrabInteractable interactable;
    private Vector3 targetPosition;
    private Vector3 originalPosition;
    private int lerpFrames = 1000;
    private int currentFrame = 0;
    private bool isLerping;
    void Start()
    {
        interactable = this.gameObject.GetComponent<XRGrabInteractable>();
        interactable.activated.AddListener(OnActivated);
        SceneManager.ActivateInteractable += expand_response;
    }

    // Update is called once per frame
    void Update()
    {
        if (isLerping)
        {
            float interpolationRatio = (float)currentFrame / lerpFrames;

            Vector3 interpolatedPosition = Vector3.Lerp(originalPosition, targetPosition, interpolationRatio);
            transform.position = interpolatedPosition;
            currentFrame = (currentFrame + 1);
            if (currentFrame == lerpFrames)
            {
                currentFrame = 0;
                isLerping = false;
            }
        }
    }

    void OnActivated(ActivateEventArgs args)
    {
        SceneManager.notify_activated(transform);
    }

    public void lerp_to_target_positon(Vector3 position)
    {
        originalPosition = transform.position;
        targetPosition = position;
        isLerping = true;
    }

    void expand_response(Transform interactable_activated)
    {
        if ((transform.position - interactable_activated.position).magnitude < 1)
        {
          
            GameObject voodoo = Instantiate(gameObject);
            
            //change the position of the voodoo to the transform position. 
            voodoo.transform.position = transform.position;
            SceneManager.add_Expanding_and_Voodoo(gameObject, voodoo);
        }
    }
    
}
