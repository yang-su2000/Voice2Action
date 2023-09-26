using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class ShapeController : MonoBehaviour
{
    public Shapes shapes;

    public string shapeInfo = "";

    private XRGrabInteractable m_GrabInteractable;

    private InteractableTarget m_InteractableTarget;
    
    private Collider m_Collider;

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

    public Collider shapeCollider
    {
        get => m_Collider;
        set => m_Collider = value;
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
        m_Collider = GetComponent<Collider>();
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

    public string GetShapeInfo()
    {
        Color m_Color = Color.clear;
        if (m_Renderers.Count > 0)
        {
            m_Color = m_Renderers[m_Renderers.Count - 1].material.color;
        }
        string m_ColorName = "N/A";
        foreach ((string colorName, Color color) in Embeddings.m_ColorMap)
        {
            if (color.r == m_Color.r && color.g == m_Color.g && color.b == m_Color.b)
            {
                m_ColorName = colorName;
            }
        }
        string m_Address = "N/A";
        foreach ((string addressName, (float x1, float x2, float z1, float z2)) in Embeddings.m_AddressMap)
        {
            if (x1 <= transform.position.x && transform.position.x <= x2 && z1 <= transform.position.z &&
                transform.position.z <= z2)
            {
                m_Address = addressName;
                break;
            }
        }
        Vector3 playerPosition = GameObject.FindGameObjectWithTag("Player").transform.position;
        float m_Distance = Mathf.Sqrt(Mathf.Pow(transform.position.x - playerPosition.x, 2) + Mathf.Pow(transform.position.z - playerPosition.z, 2));
        string m_Direction = "N/A";
        Vector3 diffPosition = transform.position - playerPosition;
        foreach ((string directionName, Vector3 direction) in Embeddings.m_DirectionMap)
        {
            if (Vector3.Dot(diffPosition, direction) > 0f)
            {
                m_Direction = directionName;
                break;
            }
        }
        shapeInfo = "<color=blue>object properties</color>: \n" +
                    $"<color=blue>name</color>: {name}\n" +
                    $"<color=blue>shape</color>: {shapes}\n" +
                    $"<color=blue>main color</color>: {m_ColorName}\n" +
                    $"<color=blue>address</color>: {m_Address}\n" +
                    $"<color=blue>distance (to user)</color>: {m_Distance}\n" +
                    $"<color=blue>direction (to user)</color>: {m_Direction}\n" +
                    $"<color=blue>position.x</color>: {transform.position.x}\n" +
                    $"<color=blue>position.y</color>: {transform.position.y}\n" +
                    $"<color=blue>position.z</color>: {transform.position.z}";
        return shapeInfo;
    }
}
