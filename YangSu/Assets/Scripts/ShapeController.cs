using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class ShapeController : MonoBehaviour
{
    public Shapes shapes;

    private XRGrabInteractable m_GrabInteractable;

    private InteractableTarget m_InteractableTarget;

    private List<Renderer> m_Renderers;

    private bool isInit = false;

    public XRGrabInteractable grabInteractable
    {
        get => m_GrabInteractable;
        set => m_GrabInteractable = value;
    }

    public InteractableTarget interactableTarget
    {
        get => m_InteractableTarget;
        set => m_InteractableTarget = value;
    }

    public List<Renderer> renderers
    {
        get => m_Renderers;
        set => m_Renderers = value;
    }

    public void InitShape()
    {
        m_GrabInteractable = GetComponent<XRGrabInteractable>();
        m_InteractableTarget = GetComponent<InteractableTarget>();
        m_Renderers = new List<Renderer>(GetComponentsInChildren<Renderer>());
        if (GetComponent<Renderer>() != null) m_Renderers.Add(GetComponent<Renderer>());
        isInit = true;
    }
    
    public void AddTransparency(float alpha)
    {
        if (!isInit)
        {
            throw new Exception("ShapeController not initialized");
        }
        // only fade-in fade-out for the real objects
        if (interactableTarget.isVoodoo) return;
        foreach (Renderer renderer in m_Renderers)
        {
            Material material = renderer.material;
            Color color = material.color;
            material.SetFloat("_Mode", 3);
            material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
            material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
            material.SetInt("_ZWrite", 0);
            color.a = Mathf.Clamp(color.a + alpha, 0, 1);
            material.SetColor("_Color", color);
            material.DisableKeyword("_ALPHATEST_ON");
            material.DisableKeyword("_ALPHABLEND_ON");
            material.EnableKeyword("_ALPHAPREMULTIPLY_ON");
            material.renderQueue = 3000;
        }
    }

    public void SetColor(Color color)
    {
        if (!isInit)
        {
            throw new Exception("ShapeController not initialized");
        }

        foreach (Renderer renderer in m_Renderers)
        {
            renderer.material.color = color;
        }
    }

    public void RotateTo(float targetRotation)
    {
        Vector3 targetDirection = new Vector3(targetRotation, 0, 0);
        Quaternion new_rotation = Quaternion.Euler(targetDirection);
        transform.rotation = new_rotation;
    }
}
