using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// this is a backyard for all key -> class / property
// should be modified when ...
// 1. the scene starts
// 2. the state of the scene changes
public static class Embeddings
{
    public static Dictionary<string, Color> ColorMap = new Dictionary<string, Color>
    {
        { "black", Color.black }, 
        { "blue", Color.blue }, 
        { "cyan", Color.cyan },
        { "grey", Color.grey }, 
        { "green", Color.green }, 
        { "red", Color.red },
        { "white", Color.white }, 
        { "yellow", Color.yellow },
    };

    // (x1, x2, z1, z2)
    public static Dictionary<string, (float, float, float, float)> AddressMap =
        new Dictionary<string, (float, float, float, float)>();

    public static Dictionary<string, Shapes> ShapesMap = new Dictionary<string, Shapes>();

    public static Dictionary<string, Vector3> DirectionMap = new Dictionary<string, Vector3>
    {
        { "left", Vector3.left },
        { "right", Vector3.right },
        { "up", Vector3.up },
        { "down", Vector3.down },
        { "front", Vector3.forward },
        { "behind", Vector3.back },
    };

    public static void AddColor(string name, Color color)
    {
        ColorMap[name] = color;
    }

    public static void AddAddress(string name, GameObject addressObject)
    {
        Bounds bound = addressObject.GetComponent<MeshCollider>().bounds;
        Vector3 bottomLeft = bound.center - bound.extents;
        Vector3 upperRight = bound.center + bound.extents;
        AddressMap[name] = (bottomLeft.x, upperRight.x, bottomLeft.z, upperRight.z);
    }

    public static void AddShapes(string name, Shapes shapes)
    {
        ShapesMap[name] = shapes;
    }
}
