using UnityEngine;

public class ShapeController : MonoBehaviour
{
    public Shapes shapes;

    public void SetColor(Color color)
    {
        transform.GetComponent<Renderer>().material.color = color;
    }

    public void AddTransparency(float alpha)
    {
        Material material = transform.GetComponent<Renderer>().material;
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

    public void RotateTo(float targetRotation)
    {
        Vector3 targetDirection = new Vector3(targetRotation, 0, 0);
        Quaternion new_rotation = Quaternion.Euler(targetDirection);
        transform.rotation = new_rotation;
    }

    public void MoveDirection(Direction direction)
    {
        switch (direction)
        {
            case Direction.Left:
                transform.position += Vector3.left;
                break;
            case Direction.Right:
                transform.position += Vector3.right;
                break;
        }
    }
}
