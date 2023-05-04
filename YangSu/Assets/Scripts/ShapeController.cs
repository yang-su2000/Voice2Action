using System;
using UnityEngine;

public class ShapeController : MonoBehaviour
{
    public Shapes shapes;

    // public Material material;

    public void Start()
    {
        // material = transform.GetComponent<Renderer>().material;
    }

    public void SetColor(Color color)
    {
        transform.GetComponent<Renderer>().material.color = color;
    }

    public static void AddTransparency(Transform myTransform, float alpha)
    {
        Renderer renderer = myTransform.GetComponent<Renderer>();
        if (renderer != null)
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
        foreach (Transform childTransform in myTransform)
        {
            AddTransparency(childTransform, alpha);
        }
    }

    public void RotateTo(float targetRotation)
    {
        Vector3 targetDirection = new Vector3(targetRotation, 0, 0);
        Quaternion new_rotation = Quaternion.Euler(targetDirection);
        transform.rotation = new_rotation;
    }
}
