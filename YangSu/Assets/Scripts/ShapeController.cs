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
            case Direction.Up:
                transform.position += Vector3.up;
                break;
            case Direction.Down:
                transform.position += Vector3.down;
                break;
            case Direction.Forward:
                transform.position += Vector3.forward;
                break;
            case Direction.Backward:
                transform.position += Vector3.back;
                break;
            case Direction.Left:
                transform.position += Vector3.left;
                break;
            case Direction.Right:
                transform.position += Vector3.right;
                break;
        }
    }
}
