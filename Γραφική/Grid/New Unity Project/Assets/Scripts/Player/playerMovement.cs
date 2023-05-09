using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playerMovement : MonoBehaviour
{
    // Vector containing the target location
    private Vector3 movePoint;

    [Header("Movement speed")]
    public float speed;    
    

    void Start()
    {
        // Initializing the position of player
        movePoint = transform.position;
    }

    void Update()
    {
        // Moving player to target location
        transform.position = Vector3.MoveTowards(transform.position, movePoint, speed * Time.deltaTime);
    }
    
    // Function for updating the target position
    public void updatePosition(Vector3 cords)
    {
        movePoint = cords;        
    }
}