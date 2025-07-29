using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Path3 : MonoBehaviour
{
    int gridSizeX = 12; // Number of squares in the X-axis
    int gridSizeY = 12; // Number of squares in the Y-axis

    private Graph graph;
    private SearchGraph searchGraph;

    private List<GameObject> grid = new List<GameObject>();
    List<Transform> path;


    [SerializeField] private GameObject spawnerLocation;
    [SerializeField] private float spawnDelay = 1f;
    [SerializeField] private float startDelay = 240f;
    [SerializeField] public GameObject commander = null;

    [SerializeField] private Sprite sprite;

    private int producedEnemiesCount = 0;
    private int totalCount = 0;
    private float membersSpeed = 1f;
    private int MAX_Number = 5;
    private float MAX_SPEED = 3f;
    private const float RATE_IMPROVEMENT = .5f;
    private int ONCE_RATE_IMPROVEMENT = 3;



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
        int[,] map = new int[12, 12]
       {
            { 0,0,0,1,0,0,0,1,0,0,0,1},
            { 0,1,0,1,0,1,0,1,0,1,0,1},
            { 0,1,0,1,0,1,0,1,0,1,0,1},
            { 0,1,0,1,0,1,0,1,0,1,0,1},
            { 0,1,0,1,0,1,0,1,0,1,0,1},
            { 0,1,0,1,0,1,0,1,0,1,0,1},
            { 0,1,0,1,0,1,0,1,0,1,0,1},
            { 0,1,0,1,0,1,0,1,0,1,0,1},
            { 0,1,0,1,0,1,0,1,0,1,0,1},
            { 0,1,0,1,0,1,0,1,0,1,0,1},
            { 0,1,0,1,0,1,0,1,0,1,0,1},
            { 0,1,0,0,0,1,0,0,0,1,0,0},
       };
        graph = new Graph(map);

        searchGraph = new SearchGraph(graph);
        searchGraph.Start(graph.nodes[143], graph.nodes[132]);
        while (!searchGraph.finished)
        {
            searchGraph.Step();
        }

        path = new List<Transform>();

        for (int i = 0; i < searchGraph.path.Count; i++)
        {
            int index = Int32.Parse(searchGraph.path[i].label);
            /* grid[index].GetComponent<SpriteRenderer>().sortingLayerName = "Enemy";*/
            /*            grid[index].GetComponent<SpriteRenderer>().sprite = sprite;
            */
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
                GameObject square = new GameObject("Point" + x + "_" + y);
                square.transform.SetParent(transform, false);

                // Set the square's position
                square.transform.position = new Vector3(posX, posY, 0);
                grid.Add(square);



                // Optionally, you can add a sprite renderer to the square GameObject and assign a sprite to it.
                // Example:
                /*                 SpriteRenderer squareRenderer = square.AddComponent<SpriteRenderer>();
                */
                // You can also add other components or functionality to the squares as needed.
            }
        }
    }

    public void CreateGraphFromTransforms()
    {

    }


    IEnumerator SpwanNewEnemy()
    {

        yield return new WaitForSeconds(startDelay);
        while (true)
        {
            if (MAX_Number == 30)
                break;
            if (totalCount == MAX_Number)
            {
                yield return new WaitForSeconds(30f);
                MAX_Number += ((int)(MAX_Number * RATE_IMPROVEMENT));
                totalCount = 0;
            }

            if (producedEnemiesCount == ONCE_RATE_IMPROVEMENT)
            {
                producedEnemiesCount = 0;
                ONCE_RATE_IMPROVEMENT++;
            }
            else
            {
                yield return new WaitForSeconds(spawnDelay);
            }
            GameObject gameObject = GameObject.Instantiate(commander, spawnerLocation.transform);
            CommanderEnemy comEnemy = gameObject.GetComponent<CommanderEnemy>() as CommanderEnemy;
            comEnemy.speed = membersSpeed;
            comEnemy.nextMoves = path;
            producedEnemiesCount++;
            totalCount++;
        }
    }
    
}
