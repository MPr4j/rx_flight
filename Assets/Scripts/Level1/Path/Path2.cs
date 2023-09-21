using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Path2 : MonoBehaviour
{
    int gridSizeX = 10; // Number of squares in the X-axis
    int gridSizeY = 10; // Number of squares in the Y-axis

    private Graph graph;
    private SearchGraph searchGraph;

    private List<GameObject> grid = new List<GameObject>();
    List<Transform> path;


    [SerializeField] private GameObject spawnerLocation;
    [SerializeField] private float spawnDelay = 1f;
    [SerializeField] public GameObject commander = null;

    [SerializeField] private Sprite sprite;

    private int producedEnemiesCount = 0;
    private int totalCount = 0;

    private void Awake()
    {
        GameManager.scoreWatcher += ScoreChanged;
    }

    void ScoreChanged(int score)
    {

    }
    void Start()
    {
        StartCoroutine(SpwanNewEnemy());
        CreateGrid();
        int[,] map = new int[10, 10]
       {
            { 0,0,0,0,0,0,0,0,0,0},
            { 0,1,1,1,1,1,1,1,1,1},
            { 0,1,0,0,0,0,0,0,0,1},
            { 0,1,0,1,1,1,1,1,0,1},
            { 0,1,0,1,0,0,0,1,0,1},
            { 0,1,0,1,0,1,0,1,0,1},
            { 0,1,0,1,1,1,0,1,0,1},
            { 0,1,0,0,0,0,0,1,0,1},
            { 0,1,1,1,1,1,1,1,0,1},
            { 0,0,0,0,0,0,0,0,0,1},
       };
        graph = new Graph(map);

        searchGraph = new SearchGraph(graph);
        searchGraph.Start(graph.nodes[9], graph.nodes[54]);
        while (!searchGraph.finished)
        {
            searchGraph.Step();
        }

        path = new List<Transform>();

        for (int i = 0; i < searchGraph.path.Count; i++)
        {
            int index = Int32.Parse(searchGraph.path[i].label);
            grid[index].GetComponent<SpriteRenderer>().sortingLayerName = "Enemy";
            grid[index].GetComponent<SpriteRenderer>().sprite = sprite;
            path.Add(grid[index].transform);
        }

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
                float posX = x * cellWidth + (cellWidth / 2.0f) + spriteRenderer.bounds.min.x;
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


    IEnumerator SpwanNewEnemy()
    {

        yield return new WaitForSeconds(60f);
        while (true)
        {
            if (totalCount > 10)
                break;
            if (producedEnemiesCount == 3)
            {
                producedEnemiesCount = 0;
            }
            else
            {
                yield return new WaitForSeconds(spawnDelay);
            }
            GameObject gameObject = GameObject.Instantiate(commander, spawnerLocation.transform);
            CommanderEnemy comEnemy = gameObject.GetComponent<CommanderEnemy>() as CommanderEnemy;
            comEnemy.nextMoves = path;
            producedEnemiesCount++;
            totalCount++;
        }
    }

}
