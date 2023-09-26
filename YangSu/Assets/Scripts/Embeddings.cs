using System.Collections.Generic;
using UnityEngine;

// this is a backyard for all key -> class / property
// should be modified when ...
// 1. the scene starts
// 2. the state of the scene changes
public static class Embeddings
{
    public static Dictionary<string, Color> m_ColorMap = new()
    {
        { "black", Color.black },
        { "blue", Color.blue },
        { "cyan", Color.cyan },
        { "grey", Color.grey },
        { "green", Color.green },
        { "red", Color.red },
        { "white", Color.white },
        { "yellow", Color.yellow }
    };

    // (x1, x2, z1, z2)
    public static Dictionary<string, (float, float, float, float)> m_AddressMap = new();

    public static Dictionary<string, Shapes> m_ShapesMap = new()
    {
        { "object", Shapes.Object }
    };

    public static Dictionary<string, Vector3> m_DirectionMap = new()
    {
        { "left", Vector3.left },
        { "right", Vector3.right },
        { "up", Vector3.up },
        { "down", Vector3.down },
        { "front", Vector3.forward },
        { "behind", Vector3.back }
    };

    public static void AddColor(string name, Color color)
    {
        m_ColorMap[name] = color;
    }

    public static void AddAddress(string name, GameObject addressObject)
    {
        var bound = addressObject.GetComponent<MeshCollider>().bounds;
        var bottomLeft = bound.center - bound.extents;
        var upperRight = bound.center + bound.extents;
        m_AddressMap[name] = (bottomLeft.x, upperRight.x, bottomLeft.z, upperRight.z);
    }

    public static void AddShapes(string name, Shapes shapes)
    {
        m_ShapesMap[name] = shapes;
    }
}