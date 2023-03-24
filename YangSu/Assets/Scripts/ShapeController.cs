using UnityEngine;

public class ShapeController : MonoBehaviour
{
    public Shapes shapes;

    public void SetColor(Color color)
    {
        transform.GetComponent<Renderer>().material.color = color;
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
