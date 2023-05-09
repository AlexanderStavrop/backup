using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class position_watchdog : MonoBehaviour
{
    public GameObject player = null;
    private Vector3 cords;


    void OnMouseDown()
    {      
        cords.x = transform.position.x;
        cords.y = 1;    
        cords.z = transform.position.z;

        Box_movement movement = player.GetComponent<Box_movement>();       
        movement.move(cords);
    }

}
