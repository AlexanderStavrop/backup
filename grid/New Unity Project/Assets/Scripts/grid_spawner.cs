using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class grid_spawner : MonoBehaviour
{
    public GameObject[] itemOptions;
    public GameObject player;
    public int gridWidth = 10;
    public int gridHeight = 10;
    public float gridSpacing = 1.0f;
    public Vector3 gridOrigin = Vector3.zero;

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

                if (itemInstance.name == "grid_green(Clone)")
                {
                    position_watchdog watchdog = itemInstance.GetComponent<position_watchdog>();
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
