using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cameraControls : MonoBehaviour
{   
    // Needed vectors
    private Vector3 movePoint;
    private float offset = 0.3f;    

    [Header("Camera Speed")]
    public float speed;

    
    // Start is called before the first frame update
    void Start()
    {
        GameObject player = GameObject.Find("Player");
        Debug.Log(player.transform.position);

        movePoint.x = player.transform.position.x - 5;
        movePoint.y = player.transform.position.y + 10;
        movePoint.z = player.transform.position.z - 10;

        transform.position = movePoint;
        transform.rotation = Quaternion.Euler(50, 40 , 0);
    }

    void Update()
    {
        // Detecting key presses and changing the movePoint accordingly
        if (Vector3.Distance(transform.position, movePoint) <= 0.05f){
            if (Input.GetKey(KeyCode.W))
            {
                movePoint += new Vector3(0, 0, offset);
            }
            if (Input.GetKey(KeyCode.S))
            {
                movePoint -= new Vector3(0, 0, offset);
            }
            if (Input.GetKey(KeyCode.A))
            {
                movePoint -= new Vector3(offset, 0, 0);
            }
            if (Input.GetKey(KeyCode.D))
            {
                movePoint += new Vector3(offset, 0, 0);
            }
        }
            
        // Moving the camera to the movePoint
        transform.position = Vector3.MoveTowards(transform.position, movePoint, speed * Time.deltaTime);
    }
}