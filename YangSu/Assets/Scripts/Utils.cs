using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using OpenAI;

public static class Utils
{
    [Header("OpenAI API")]
    public static readonly OpenAIClient OpenAIClient = new OpenAIClient();
    
    [Header("Example Properties")]
    private static readonly List<Color> AllColors = new List<Color>
    {
        Color.black, Color.blue, Color.grey, Color.green, Color.red,
        Color.white, Color.yellow,
    };

    private static readonly List<(PrimitiveType, Shapes)> AllShapes = new List<(PrimitiveType, Shapes)>
    {
        (PrimitiveType.Capsule, Shapes.Capsule), 
        (PrimitiveType.Cube, Shapes.Cube), 
        (PrimitiveType.Cylinder, Shapes.Cylinder), 
    };

    public static void InitBuildings(GameObject parentInteractable, int spawnCount)
    {
        for (int i = 0; i < spawnCount; i++)
        {
            var shapePair = AllShapes[Random.Range(0, AllShapes.Count)];
            GameObject cube = GameObject.CreatePrimitive(shapePair.Item1);
            cube.transform.parent = parentInteractable.transform;
            ShapeController shapeController = cube.AddComponent<ShapeController>();
            shapeController.shapes = shapePair.Item2;
            cube.transform.localScale =
                new Vector3(Random.Range(0.25f, 1f), Random.Range(0.25f, 2f), Random.Range(0.25f, 1f));
            Renderer renderer = shapeController.GetComponent<Renderer>();
            renderer.material = Resources.Load<Material>("Materials/myMaterial");
            renderer.material.SetFloat("_Mode", 2);
            renderer.material.color = AllColors[Random.Range(0, AllColors.Count)];
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
