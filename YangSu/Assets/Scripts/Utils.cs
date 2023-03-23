using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Utils
{
    [Header("Example Properties")]
    public static List<Color> AllColors = new List<Color>
    {
        Color.black, Color.blue, Color.cyan, Color.gray, Color.green, Color.green, Color.magenta, Color.red,
        Color.white, Color.yellow,
    };

    public static List<(PrimitiveType, Shapes)> AllShapes = new List<(PrimitiveType, Shapes)>
    {
        (PrimitiveType.Capsule, Shapes.Capsule), 
        (PrimitiveType.Cube, Shapes.Cube), 
        (PrimitiveType.Cylinder, Shapes.Cylinder), 
        (PrimitiveType.Sphere, Shapes.Sphere),
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
            cube.GetComponent<Renderer>().material.color = AllColors[Random.Range(0, AllColors.Count)];
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
