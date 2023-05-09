using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Box_movement : MonoBehaviour
{
    public float speed;    
    public Vector3 movePoint;
    public Vector3 cords;


    // Start is called before the first frame update
    void Start()
    {
        movePoint = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        transform.position = Vector3.MoveTowards(transform.position, movePoint, speed * Time.deltaTime);
    }
    
    public void move(Vector3 cords)
    {
        movePoint = cords;
        Debug.Log(movePoint);

        // transform.position = Vector3.MoveTowards(transform.position, cords, speed * Time.deltaTime);
        
    }
}
