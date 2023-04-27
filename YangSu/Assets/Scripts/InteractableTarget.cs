using System;
using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
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
    private int lerpFrames = 200;
    private int currentFrame = 0;
    private bool isLerping;
    public bool isVoodoo = false;
    private Transform originObject = null;
    private LineRenderer connecting_line = null;
    private GameObject expandPanel;
    void Start()
    {
        expandPanel = GameObject.Find("ExpandInventoryScroll");
        interactable = gameObject.GetComponent<XRGrabInteractable>();
        interactable.activated.AddListener(OnActivated);
        interactable.selectEntered.AddListener(voodoo_on_selected);
        interactable.hoverEntered.AddListener(draw_connecting_lines);
        interactable.hoverExited.AddListener(remove_connecting_lines);
        SceneManager.ActivateInteractable += expand_response;
        SceneManager.destory_object_not_grabbed += destory_not_grabbed;
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

        // if (isVoodoo)
        // {
        //     originObject.transform.rotation = transform.rotation;
        // }

        if (connecting_line)
        {
            connecting_line.SetPosition(0, transform.position);
            connecting_line.SetPosition(1, originalPosition);
        }
    }

    void draw_connecting_lines(HoverEnterEventArgs args)
    {
        if (!isVoodoo)
        {
            return;
        }
        connecting_line = gameObject.AddComponent<LineRenderer>();
        connecting_line.useWorldSpace = true;
        connecting_line.startColor = Color.magenta;
        connecting_line.endColor = Color.magenta;
        connecting_line.startWidth = 0.01f;
        connecting_line.endWidth = 0.01f;
        connecting_line.SetPosition(0, transform.position);
        connecting_line.SetPosition(1, originalPosition);
        
    }

    void remove_connecting_lines(HoverExitEventArgs args)
    {
        Destroy(connecting_line);
        connecting_line = null;
    }
    
    void OnActivated(ActivateEventArgs args)
    {
        if (isVoodoo) return;
        SceneManager.notify_activated(transform);
    }

    public void lerp_to_target_positon(Vector3 position)
    {
        originalPosition = transform.position;
        targetPosition = position;
        isLerping = true;
    }

    public GameObject makeVoodoo()
    {
        GameObject voodoo = Instantiate(gameObject);
            
        //change the position of the voodoo to the transform position. 
        voodoo.transform.position = transform.position;
        // voodoo.transform.rotation = expandPanel.transform.rotation;
        voodoo.GetComponent<InteractableTarget>().isVoodoo = true;
        voodoo.GetComponent<InteractableTarget>().originObject = transform;
        voodoo.GetComponent<Renderer>().material.SetFloat("_Mode", 2);
        return voodoo;
    }
    
    void expand_response(Transform interactable_activated)
    {
        if (isVoodoo)
        {
            Destroy(gameObject);
        }
        
        if ((transform.position - interactable_activated.position).magnitude < 1)
        {

            GameObject voodoo = makeVoodoo();
            SceneManager.add_Expanding_and_Voodoo(gameObject, voodoo);
        }
    }

    private void voodoo_on_selected(SelectEnterEventArgs args)
    {
        if(!isVoodoo) return;

        Destroy(connecting_line);
        connecting_line = null;
        SceneManager.notify_Voodoo_selected(transform);
    }
    void destory_not_grabbed(Transform grabbed_voodoo_transform)
    {
        if (isVoodoo & (grabbed_voodoo_transform != transform))
        {
            Destroy(gameObject);
        }
    }

    private void OnDestroy()
    {
        interactable.activated.RemoveListener(OnActivated);
        interactable.selectEntered.RemoveListener(voodoo_on_selected);
        interactable.hoverEntered.RemoveListener(draw_connecting_lines);
        interactable.hoverExited.RemoveListener(remove_connecting_lines);
        SceneManager.ActivateInteractable -= expand_response;
        SceneManager.destory_object_not_grabbed -= destory_not_grabbed;
    }
}
