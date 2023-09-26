using System;
using System.Collections.Generic;
using UnityEngine;
using OpenAI;
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
    Tree,
}

public static class Utils
{
    [Header("OpenAI API")]
    public static readonly OpenAIClient s_OpenAIClient = new OpenAIClient();
    
    [Header("OpenAI Parameters")]
    public static readonly float s_CompletionTemperature = 0.0f;
    
    // out of 100
    public static readonly int s_MinConfidenceToProceed = 50;
    
    public static readonly int s_TopK = 1;

    [Header("Example Properties")]
    public static readonly List<Color> s_AllColors = new List<Color>
    {
        Color.black, Color.blue, Color.cyan, Color.grey, Color.green, Color.red,
        Color.white, Color.yellow,
    };

    public static readonly List<(PrimitiveType, Shapes)> s_AllShapes = new List<(PrimitiveType, Shapes)>
    {
        (PrimitiveType.Capsule, Shapes.Capsule), 
        (PrimitiveType.Cube, Shapes.Cube), 
        (PrimitiveType.Sphere, Shapes.Sphere),
        (PrimitiveType.Cylinder, Shapes.Cylinder), 
    };

    public static void InitBuildings(GameObject parentInteractable, int spawnCount)
    {
        for (int i = 0; i < spawnCount; i++)
        {
            var shapePair = s_AllShapes[Random.Range(0, s_AllShapes.Count)];
            GameObject cube = GameObject.CreatePrimitive(shapePair.Item1);
            XRGrabInteractable interactable = cube.AddComponent<XRGrabInteractable>();
            InteractableTarget interactableTarget = cube.AddComponent<InteractableTarget>();
            interactable.useDynamicAttach = true;
            interactable.throwOnDetach = false;
            //<Debug Code>
                // interactable.matchAttachPosition = true;
                // interactable.matchAttachRotation = true;
                // interactable.snapToColliderVolume = true;
                // interactable.reinitializeDynamicAttachEverySingleGrab = true;
            //<Debug Code>
            cube.GetComponent<Rigidbody>().useGravity = false;
            cube.GetComponent<Rigidbody>().isKinematic = true;
            cube.transform.parent = parentInteractable.transform;
            ShapeController shapeController = cube.AddComponent<ShapeController>();
            shapeController.shapes = shapePair.Item2;
            cube.transform.localScale =
                new Vector3(Random.Range(0.25f, 1f), Random.Range(0.25f, 2f), Random.Range(0.25f, 1f));
            Renderer renderer = shapeController.GetComponent<Renderer>();
            renderer.material = Resources.Load<Material>("Materials/BuildingMaterial");
            renderer.material.SetFloat("_Mode", 2);
            renderer.material.color = s_AllColors[Random.Range(0, s_AllColors.Count)];
            shapeController.InitShape();
            if (Random.Range(0f, 1f) < 0.5f)
            {
                if (Random.Range(0f, 1f) < 0.5f)
                {
                    cube.transform.position = new Vector3(Random.Range(-10, -2), cube.transform.localScale.y / 2 - 2, Random.Range(-10, -2));
                }
                else
                {
                    cube.transform.position = new Vector3(Random.Range(-10, -2), cube.transform.localScale.y / 2 - 2, Random.Range(2, 10));
                }
            }
            else
            {
                if (Random.Range(0f, 1f) < 0.5f)
                {
                    cube.transform.position = new Vector3(Random.Range(2, 10), cube.transform.localScale.y / 2 - 2, Random.Range(-10, -2));
                }
                else
                {
                    cube.transform.position = new Vector3(Random.Range(2, 10), cube.transform.localScale.y / 2 - 2, Random.Range(2, 10));
                }
            }
        }
    }

    public static void InitPositionMarker(GameObject parentMarker)
    {
        foreach (Transform markerTransform in parentMarker.transform)
        {
            Embeddings.AddAddress(markerTransform.name, markerTransform.gameObject);
        }
    }
    
    public static void InitInteractables(GameObject interactables)
    {
        foreach (Transform category in interactables.transform)
        {
            Shapes categoryType = Shapes.Object;
            
            foreach (Shapes shapeType in Enum.GetValues(typeof(Shapes)))
            {
                if (category.name.Contains(shapeType.ToString()))
                {
                    categoryType = shapeType;
                    if (!Embeddings.m_ShapesMap.ContainsKey(shapeType.ToString()))
                    {
                        Embeddings.m_ShapesMap.Add(shapeType.ToString(), shapeType);
                    }
                    break; // one category can only have one shape
                }
            }
            if (categoryType == Shapes.Object) continue; // not a valid shape
            foreach (Transform instance in category)
            {
                InitInstance(instance.gameObject, categoryType);
            }
        }
    }

    private static void InitInstance(GameObject instance, Shapes shapeType)
    {
        XRGrabInteractable xrGrabInteractable = instance.AddComponent<XRGrabInteractable>();
        InteractableTarget interactableTarget = instance.AddComponent<InteractableTarget>();
        interactableTarget.isVoodoo = false;
        Outline outline = instance.AddComponent<Outline>();
        outline.OutlineWidth = 0;
        outline.OutlineColor = new Color(255, 128, 0, 1); // orange
        xrGrabInteractable.useDynamicAttach = true;
        xrGrabInteractable.throwOnDetach = false;
        //<Debug Code>
            // xrGrabInteractable.matchAttachPosition = true;
            // xrGrabInteractable.matchAttachRotation = true;
            // xrGrabInteractable.snapToColliderVolume = true;
            // xrGrabInteractable.reinitializeDynamicAttachEverySingleGrab = true;
        // <Debug Code>
        instance.GetComponent<Rigidbody>().useGravity = false;
        instance.GetComponent<Rigidbody>().isKinematic = true;
        ShapeController shapeController = instance.AddComponent<ShapeController>();
        shapeController.shapes = shapeType;
        Renderer renderer = instance.GetComponent<Renderer>();
        if (renderer != null)
        {
            if (shapeType == Shapes.Building)
            {
                renderer.material = Resources.Load<Material>("Materials/BuildingMaterial");
                renderer.material.color = Utils.s_AllColors[UnityEngine.Random.Range(0, Utils.s_AllColors.Count)];
            }
            renderer.material.SetFloat("_Mode", 2);
        }
        if (shapeType == Shapes.Car) // TODO: temporary for demo, all car components should have the same color
        {
            Color colorGroup = Utils.s_AllColors[UnityEngine.Random.Range(0, Utils.s_AllColors.Count)];
            foreach (Transform childInstance in instance.transform)
            {
                Renderer childRenderer = childInstance.GetComponent<Renderer>();
                childRenderer.material = Resources.Load<Material>("Materials/CarMaterial");
                childRenderer.material.color = colorGroup;
            }
        }
        shapeController.InitShape();
    }

    public static bool IsColorClose(Color color1, Color color2, float confidence)
    {
        float aDist = color1.a - color2.a;
        float rDist = color1.r - color2.r;
        float gDist = color1.g - color2.g;
        float bDist = color1.b - color2.b;
        float dist = Mathf.Sqrt(aDist * aDist + rDist * rDist + gDist * gDist + bDist * bDist);
        float maxDist = 2f;
        Debug.Log(dist + color1.ToString() + color2.ToString());
        return dist / maxDist <= 1f - confidence;
    }
}
