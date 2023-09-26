using System;
using System.Collections.Generic;
using OpenAI;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using Random = UnityEngine.Random;

public enum Shapes
{
    Object, // default shape - it is called every time
    Cube,
    Sphere,
    Capsule,
    Cylinder,
    Building,
    Car,
    MiniBus,
    SchoolBus,
    Tree
}

public static class Utils
{
    [Header("OpenAI API")] public static readonly OpenAIClient s_OpenAIClient = new();

    [Header("OpenAI Parameters")] public static readonly float s_CompletionTemperature = 0.0f;

    // <summary>Out of 100</summary>
    public const int k_MinConfidenceToProceed = 50;

    public const int k_TopK = 1;

    [Header("Example Properties")] private static readonly List<Color> s_AllColors = new()
    {
        Color.black, Color.blue, Color.cyan, Color.grey, Color.green, Color.red,
        Color.white, Color.yellow
    };

    private static readonly List<(PrimitiveType, Shapes)> s_AllShapes = new()
    {
        (PrimitiveType.Capsule, Shapes.Capsule),
        (PrimitiveType.Cube, Shapes.Cube),
        (PrimitiveType.Sphere, Shapes.Sphere),
        (PrimitiveType.Cylinder, Shapes.Cylinder)
    };

    /// <summary>
    ///     The entry point for initializing sample buildings in the scene for evaluation.
    /// </summary>
    public static void InitBuildings(GameObject parentInteractable, int spawnCount)
    {
        for (var i = 0; i < spawnCount; i++)
        {
            var shapePair = s_AllShapes[Random.Range(0, s_AllShapes.Count)];
            var cube = GameObject.CreatePrimitive(shapePair.Item1);
            var interactable = cube.AddComponent<XRGrabInteractable>();
            var interactableTarget = cube.AddComponent<InteractableTarget>();
            interactable.useDynamicAttach = true;
            interactable.throwOnDetach = false;
            // <Debug Code>
            // interactable.matchAttachPosition = true;
            // interactable.matchAttachRotation = true;
            // interactable.snapToColliderVolume = true;
            // interactable.reinitializeDynamicAttachEverySingleGrab = true;
            // <Debug Code>
            cube.GetComponent<Rigidbody>().useGravity = false;
            cube.GetComponent<Rigidbody>().isKinematic = true;
            cube.transform.parent = parentInteractable.transform;
            var shapeController = cube.AddComponent<ShapeController>();
            shapeController.m_Shapes = shapePair.Item2;
            cube.transform.localScale =
                new Vector3(Random.Range(0.25f, 1f), Random.Range(0.25f, 2f), Random.Range(0.25f, 1f));
            var renderer = shapeController.GetComponent<Renderer>();
            renderer.material = Resources.Load<Material>("Materials/BuildingMaterial");
            renderer.material.SetFloat("_Mode", 2);
            renderer.material.color = s_AllColors[Random.Range(0, s_AllColors.Count)];
            shapeController.InitShape();
            if (Random.Range(0f, 1f) < 0.5f)
            {
                if (Random.Range(0f, 1f) < 0.5f)
                    cube.transform.position = new Vector3(Random.Range(-10, -2), cube.transform.localScale.y / 2 - 2,
                        Random.Range(-10, -2));
                else
                    cube.transform.position = new Vector3(Random.Range(-10, -2), cube.transform.localScale.y / 2 - 2,
                        Random.Range(2, 10));
            }
            else
            {
                if (Random.Range(0f, 1f) < 0.5f)
                    cube.transform.position = new Vector3(Random.Range(2, 10), cube.transform.localScale.y / 2 - 2,
                        Random.Range(-10, -2));
                else
                    cube.transform.position = new Vector3(Random.Range(2, 10), cube.transform.localScale.y / 2 - 2,
                        Random.Range(2, 10));
            }
        }
    }

    /// <summary>
    ///     The entry point for initializing sample position markers in the scene for evaluation.
    /// </summary>
    public static void InitPositionMarker(GameObject parentMarker)
    {
        foreach (Transform markerTransform in parentMarker.transform)
            Embeddings.AddAddress(markerTransform.name, markerTransform.gameObject);
    }

    /// <summary>
    ///     The entry point for initializing the required components for Voice2Action from the given interactable and its
    ///     children in the scene for evaluation.
    /// </summary>
    public static void InitInteractable(GameObject interactable)
    {
        foreach (Transform category in interactable.transform)
        {
            var categoryType = Shapes.Object;
            foreach (Shapes shapeType in Enum.GetValues(typeof(Shapes)))
                if (category.name.Contains(shapeType.ToString()))
                {
                    categoryType = shapeType;
                    if (!Embeddings.m_ShapesMap.ContainsKey(shapeType.ToString()))
                        Embeddings.m_ShapesMap.Add(shapeType.ToString(), shapeType);

                    break; // one category can only have one shape
                }

            if (categoryType == Shapes.Object) continue; // not a valid shape
            foreach (Transform instance in category) InitInstance(instance.gameObject, categoryType);
        }
    }

    /// <summary>
    ///     The entry point for initializing the required components for Expand from the given interactable and its shape for
    ///     evaluation.
    /// </summary>
    private static void InitInstance(GameObject instance, Shapes shapeType)
    {
        var xrGrabInteractable = instance.AddComponent<XRGrabInteractable>();
        var interactableTarget = instance.AddComponent<InteractableTarget>();
        interactableTarget.isVoodoo = false;
        var outline = instance.AddComponent<Outline>();
        outline.OutlineWidth = 0;
        outline.OutlineColor = new Color(255, 128, 0, 1); // orange
        xrGrabInteractable.useDynamicAttach = true;
        xrGrabInteractable.throwOnDetach = false;
        // <Debug Code>
        // xrGrabInteractable.matchAttachPosition = true;
        // xrGrabInteractable.matchAttachRotation = true;
        // xrGrabInteractable.snapToColliderVolume = true;
        // xrGrabInteractable.reinitializeDynamicAttachEverySingleGrab = true;
        // <Debug Code>
        instance.GetComponent<Rigidbody>().useGravity = false;
        instance.GetComponent<Rigidbody>().isKinematic = true;
        var shapeController = instance.AddComponent<ShapeController>();
        shapeController.m_Shapes = shapeType;
        var renderer = instance.GetComponent<Renderer>();
        if (renderer != null)
        {
            // <Debug Code>
            // Debug.Log("+" + instance.name);
            // <Debug Code>
            if (shapeType == Shapes.Building)
            {
                renderer.material = Resources.Load<Material>("Materials/BuildingMaterial");
                renderer.material.color = s_AllColors[Random.Range(0, s_AllColors.Count)];
            }

            renderer.material.SetFloat("_Mode", 2);
            // <Debug Code>
            // shapeController.material = renderer.material;
            // <Debug Code>
        }

        if (shapeType == Shapes.Car) // TODO: temporary for demo, all car components should have the same color
        {
            var colorGroup = s_AllColors[Random.Range(0, s_AllColors.Count)];
            foreach (Transform childInstance in instance.transform)
            {
                var childRenderer = childInstance.GetComponent<Renderer>();
                childRenderer.material = Resources.Load<Material>("Materials/CarMaterial");
                childRenderer.material.color = colorGroup;
            }
        }

        shapeController.InitShape();
    }

    /// <summary>
    ///     Utility function to check if two colors are similar enough.
    /// </summary>
    public static bool IsColorClose(Color color1, Color color2, float confidence)
    {
        var aDist = color1.a - color2.a;
        var rDist = color1.r - color2.r;
        var gDist = color1.g - color2.g;
        var bDist = color1.b - color2.b;
        var dist = Mathf.Sqrt(aDist * aDist + rDist * rDist + gDist * gDist + bDist * bDist);
        var maxDist = 2f;
        Debug.Log(dist + color1.ToString() + color2);
        return dist / maxDist <= 1f - confidence;
    }
}