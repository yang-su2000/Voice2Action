using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Utils
{
    public static void InitBuildings(GameObject parentInteractable, int spawnCount)
    {
        for (int i = 0; i < spawnCount; i++)
        {
            GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
            cube.transform.parent = parentInteractable.transform;
            cube.AddComponent<ShapeController>();
            cube.GetComponent<Renderer>().material.color =
                new Vector4((int)Random.Range(0.5f, 1.5f), (int)Random.Range(0.5f, 1.5f), (int)Random.Range(0.5f, 1.5f), (int)Random.Range(0.5f, 1.5f));
            cube.transform.localScale = new Vector3(Random.Range(0.25f, 0.5f), Random.Range(0.25f, 4), Random.Range(0.25f, 0.5f));
            cube.transform.position = new Vector3(Random.Range(-10, 10), cube.transform.localScale.y / 2 - 2, Random.Range(0, 10));
        }
    }
}
