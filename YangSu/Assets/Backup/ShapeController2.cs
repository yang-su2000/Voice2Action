using System.Collections;
using System.Collections.Generic;
using Oculus.Platform;
using UnityEngine;

public class ShapeController2 : MonoBehaviour
{
    public const float rotateSpeed = 1.0f;

    public void SetColor(Color color)
    {
        transform.GetComponent<Renderer>().material.color = color;
    }

    public void RotateTo(float targetRotation)
    {
        Vector3 targetDirection = new Vector3(targetRotation, 0, 0);
        float singleStep = rotateSpeed * Time.deltaTime;
        Vector3 newDirection = Vector3.RotateTowards(transform.forward, targetDirection, singleStep, 0);
        transform.rotation = Quaternion.LookRotation(newDirection);
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
