using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class positionWatchdog : MonoBehaviour
{
    public GameObject player = null;
    private Vector3 cords;


    void OnMouseDown()
    {      
        cords.x = transform.position.x;
        cords.y = 1.5f;    
        cords.z = transform.position.z;

        playerMovement movement = player.GetComponent<playerMovement>();       
        movement.updatePosition(cords);
    }

}
