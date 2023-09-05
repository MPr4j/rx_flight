using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundHandler : MonoBehaviour
{
    private int gridSizeX = 6; // Number of squares in the X-axis
    private int gridSizeY = 6; // Number of squares in the Y-axis

    private Graph graph;
    private SearchGraph searchGraph;

    private List<GameObject> grid = new List<GameObject>();


    [SerializeField]
    public GameObject commander = null;

    [SerializeField]
    private Sprite sprite;

    void Start()
    {
        CreateGrid();
        int[,] map = new int[6, 6]
       {
            { 0,1,0,0,0,1},
            { 0,1,0,1,0,1},
            { 0,1,0,1,0,1},
            { 0,1,0,1,0,1},
            { 0,1,0,1,0,1},
            { 0,0,0,1,0,1},
       };
        graph = new Graph(map);

        searchGraph = new SearchGraph(graph);
        searchGraph.Start(graph.nodes[0], graph.nodes[34]);
        while (!searchGraph.finished)
        {
            searchGraph.Step();
        }

        List<Transform> path = new List<Transform> ();

        for(int i =0 ;i < searchGraph.path.Count; i++)
        {
            int index = Int32.Parse(searchGraph.path[i].label);
            print(index);

            grid[index].GetComponent<SpriteRenderer>().sortingLayerName = "Enemy";
            grid[index].GetComponent<SpriteRenderer>().sprite = sprite;
            path.Add(grid[index].transform);
        }
        CommanderEnemy comEnemy = commander.GetComponent<CommanderEnemy>() as CommanderEnemy;
        comEnemy.nextMoves = path;
    }


    void CreateGrid()
    {
        // Get the SpriteRenderer component from the same GameObject
        SpriteRenderer spriteRenderer = GetComponent<SpriteRenderer>();

        if (spriteRenderer == null)
        {
            Debug.LogError("SpriteRenderer component not found on this GameObject.");
            return;
        }

        // Calculate the size of each grid cell based on the sprite's dimensions
        float cellWidth = spriteRenderer.bounds.size.x * 3 / gridSizeX;
        float cellHeight = spriteRenderer.bounds.size.y * 3 / gridSizeY;

        for (int y = 0; y < gridSizeY; y++)
        {
            for (int x = 0; x < gridSizeX; x++)
            {
                // Calculate the position of the square based on the grid cell size and current cell index
                float posX = x * cellWidth + (cellWidth / 2.0f) + spriteRenderer.bounds.min.x ;
                float posY = y * cellHeight + (cellHeight / 2.0f) + spriteRenderer.bounds.min.y;
                // Create an empty GameObject for the square at the calculated position
                GameObject square = new GameObject("Square" + x + "_" + y);

                // Set the square's position
                square.transform.position = new Vector3(posX, posY, 0);
                grid.Add(square);
                


                // Optionally, you can add a sprite renderer to the square GameObject and assign a sprite to it.
                // Example:
                 SpriteRenderer squareRenderer = square.AddComponent<SpriteRenderer>();

                // You can also add other components or functionality to the squares as needed.
            }
        }
    }

    public void CreateGraphFromTransforms()
    {

    }
   
}
