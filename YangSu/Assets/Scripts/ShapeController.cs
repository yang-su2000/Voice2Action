using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.XR.Interaction.Toolkit;

public class ShapeController : MonoBehaviour
{
    public Shapes m_Shapes;

    public string m_ShapeInfo = "";

    private bool m_IsInit;

    public XRGrabInteractable grabInteractable { get; private set; }

    public InteractableTarget interactableTarget { get; private set; }

    public Collider shapeCollider { get; private set; }

    public List<Renderer> renderers { get; private set; }

    /// <summary>
    ///     Initialize my required components for Voice2Action and Expand.
    /// </summary>
    public void InitShape()
    {
        grabInteractable = GetComponent<XRGrabInteractable>();
        interactableTarget = GetComponent<InteractableTarget>();
        shapeCollider = GetComponent<Collider>();
        renderers = new List<Renderer>(GetComponentsInChildren<Renderer>());
        if (GetComponent<Renderer>() != null) renderers.Add(GetComponent<Renderer>());
        m_IsInit = true;
    }

    /// <summary>
    ///     Add Transparency to my material if they exist.
    /// </summary>
    public void AddTransparency(float alpha)
    {
        if (!m_IsInit) throw new Exception("ShapeController not initialized");

        // only fade-in fade-out for the real objects
        if (interactableTarget.isVoodoo) return;
        foreach (var renderer1 in renderers)
        {
            var material = renderer1.material;
            var color = material.color;
            material.SetFloat("_Mode", 3);
            material.SetInt("_SrcBlend", (int)BlendMode.One);
            material.SetInt("_DstBlend", (int)BlendMode.OneMinusSrcAlpha);
            material.SetInt("_ZWrite", 0);
            color.a = Mathf.Clamp(color.a + alpha, 0, 1);
            material.SetColor("_Color", color);
            material.DisableKeyword("_ALPHATEST_ON");
            material.DisableKeyword("_ALPHABLEND_ON");
            material.EnableKeyword("_ALPHAPREMULTIPLY_ON");
            material.renderQueue = 3000;
        }
    }

    /// <summary>
    ///     Set color to my renderers.
    /// </summary>
    public void SetColor(Color color)
    {
        if (!m_IsInit) throw new Exception("ShapeController not initialized");

        foreach (var renderer1 in renderers) renderer1.material.color = color;
    }

    /// <summary>
    ///     Rotate my transform.
    /// </summary>
    public void RotateTo(float targetRotation)
    {
        var targetDirection = new Vector3(targetRotation, 0, 0);
        var newRotation = Quaternion.Euler(targetDirection);
        transform.rotation = newRotation;
    }

    /// <summary>
    ///     Print all my properties.
    /// </summary>
    public string GetShapeInfo()
    {
        var myColor = Color.clear;
        if (renderers.Count > 0) myColor = renderers[renderers.Count - 1].material.color;

        var myColorName = "N/A";
        foreach (var (colorName, color) in Embeddings.ColorMap)
            if (color.r == myColor.r && color.g == myColor.g && color.b == myColor.b)
                myColorName = colorName;

        var myAddress = "N/A";
        foreach ((var addressName, (var x1, var x2, var z1, var z2)) in Embeddings.AddressMap)
            if (x1 <= transform.position.x && transform.position.x <= x2 && z1 <= transform.position.z &&
                transform.position.z <= z2)
            {
                myAddress = addressName;
                break;
            }

        var myPosition = transform.position;
        var playerPosition = GameObject.FindGameObjectWithTag("Player").transform.position;
        var myDistance = Mathf.Sqrt(Mathf.Pow(myPosition.x - playerPosition.x, 2) +
                                    Mathf.Pow(myPosition.z - playerPosition.z, 2));
        var myDirection = "N/A";
        var diffPosition = myPosition - playerPosition;
        foreach (var (directionName, direction) in Embeddings.DirectionMap)
            if (Vector3.Dot(diffPosition, direction) > 0f)
            {
                myDirection = directionName;
                break;
            }

        m_ShapeInfo = "<color=blue>object properties</color>: \n" +
                      $"<color=blue>name</color>: {name}\n" +
                      $"<color=blue>shape</color>: {m_Shapes}\n" +
                      $"<color=blue>main color</color>: {myColorName}\n" +
                      $"<color=blue>address</color>: {myAddress}\n" +
                      $"<color=blue>distance (to user)</color>: {myDistance}\n" +
                      $"<color=blue>direction (to user)</color>: {myDirection}\n" +
                      $"<color=blue>position.x</color>: {myPosition.x}\n" +
                      $"<color=blue>position.y</color>: {myPosition.y}\n" +
                      $"<color=blue>position.z</color>: {myPosition.z}";
        return m_ShapeInfo;
    }
}
