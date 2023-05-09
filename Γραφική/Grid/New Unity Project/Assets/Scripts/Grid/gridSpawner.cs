using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gridSpawner : MonoBehaviour
{
    private Vector3 gridOrigin = Vector3.zero;

    [Header("Ground blocks")]
    public GameObject[] itemOptions;
    
    [Header("Player object")]
    public GameObject player;

    [Header("Grid options")]
    public int gridWidth = 10;
    public int gridHeight = 10;
    public float gridSpacing = 1.0f;


    // Start is called before the first frame update
    void Start()
    {
        spawnGrid();
    }
    
    // Function to spawn a grid of objects
    public void spawnGrid()
    {
        // Loop through the grid width
        for (int x = 0; x < gridWidth; x++)
        {
            // Loop through the grid height
            for (int z = 0; z < gridHeight; z++)
            {
                // Get a random item from the itemOptions array
                GameObject itemToSpawn = itemOptions[Random.Range(0, itemOptions.Length)];
                
                // Create an instance of the item
                GameObject itemInstance = Instantiate(itemToSpawn);

                if (itemInstance.name == "greenGrid(Clone)")
                {
                    positionWatchdog watchdog = itemInstance.GetComponent<positionWatchdog>();
                    watchdog.player = player;
                }

                // Set the parent of the item instance to the current object
                itemInstance.transform.parent = transform;

                // Set the position of the item instance
                itemInstance.transform.position = new Vector3(x * gridSpacing, 0, z * gridSpacing) + gridOrigin;
            } 
        }
    }
}