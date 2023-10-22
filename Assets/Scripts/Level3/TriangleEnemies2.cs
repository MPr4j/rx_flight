using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UIElements;

public class TriangleEnemies2 : MonoBehaviour
{
    private static string TAG = "EnemyTriangle";

    // AnimationCurve to have ping pong style in position transitions
    [SerializeField] private AnimationCurve _curve;
    private float _current, _target;


    // Speed of movement of the group of enemies
    private float _speed = .5f;

    // Target Position of group to follow
    [SerializeField] private Vector2 _goalPosition;

    // Row and Column of Path
    private int gridSizeX = 5;
    private int gridSizeY = 5;

    // Base Sprite in order to create and render path in a space
    [SerializeField]
    private Sprite sourceSprite;

    // Prefab of enemy to make an instance
    [SerializeField] private GameObject prefab;

    private int destroyedMembers = 0;

    // Points in a path to follow
    private List<Vector2> targets = new List<Vector2>();
    // Instantiated Enemies 
    private List<GameObject> gameObjects = new List<GameObject>();
    // Start is called before the first frame update

    [SerializeField] private List<Transform> spawnerLocations;

    private void Awake()
    {
        GameManager.enemyWatcher += EnemyDeadWatcher;
    }
    private void EnemyDeadWatcher(string tag, Transform killedPosition)
    {
        if (tag == TAG)
        {
            destroyedMembers++;
        }
        if (destroyedMembers == 15)
        {
            // Check Destroyed enemies in order to re-create them
            StartCoroutine("CheckDestroyedObjects");
        }
    }
    void Start()
    {
        // Start creating enemies after a delay
        StartCoroutine(StartJobWithDelay(2f));
    }

    IEnumerator StartJobWithDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        // Make the Grid 
        CreateGridAndTransforms();

        // 
        CreateAndPositionPrefabs();

        // Coroutine to call Fire Function on enemies, randomly
        StartCoroutine(RandomFireCall());
    }

    public void CreateGridAndTransforms()
    {
        if (sourceSprite != null)
        {
            // Calculate the size of each grid cell based on the sprite's dimensions
            float cellWidth = sourceSprite.bounds.size.x * 6 / gridSizeX;
            float cellHeight = sourceSprite.bounds.size.y * 4/ gridSizeY;
            for (int y = 0; y < gridSizeY; y++)
            {
                for (int x = 0; x < gridSizeX; x++)
                {
                    float posX = x * cellWidth + (cellWidth / 2.0f) + transform.position.x;
                    float posY = y * cellHeight + (cellHeight / 2.0f) + transform.position.y;
                    Vector2 position = new Vector2(posX, posY);
                    targets.Add(position);
                }
            }
        }

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    // Create now enemies
    public void CreateAndPositionPrefabs()
    {
        int numRows = gridSizeY;
        int numCols = gridSizeX;

        // Loop through the rows in reverse order (top to bottom)
        for (int row = numRows - 1; row >= 0; row--)
        {
            // Calculate the number of prefabs to create in the current row
            int numInRow = numCols - row;

            // Calculate the offset for the current row to center-align the triangle
            float rowOffsetX = (numCols - numInRow) * 0.5f * prefab.transform.localScale.x;

            // Loop through the columns in the current row
            for (int col = 0; col < numInRow; col++)
            {
                // Calculate the position for the prefab
                float posX = col * prefab.transform.localScale.x + rowOffsetX + transform.position.x;
                float posY = (numRows - 1 - row) * prefab.transform.localScale.y 
                    + transform.position.y;

                // Create and position the prefab
                if (spawnerLocations.Count > 0)
                {
                    GameObject gameObject = Instantiate(prefab, spawnerLocations[Random.Range(0, spawnerLocations.Count - 1)].position, Quaternion.identity);
                    // Add TakePlaceEnemy behaviour in order to spawn enemy from different location
                    // and follow their own behaviour to get in place after sometime.
                    TakePlaceEnemy takePlaceEnemyBehaviour = gameObject.AddComponent<TakePlaceEnemy>();
                    takePlaceEnemyBehaviour.placeToTake = new Vector2(posX, posY);
                }
                else
                {
                    GameObject gameObject = Instantiate(prefab, new Vector2(posX,posY), Quaternion.identity);

                }                

                // Set tag to the parent
                gameObject.tag = TAG;
                gameObjects.Add(gameObject);
                gameObject.transform.SetParent(transform);
            }
        }
    }
    IEnumerator RandomFireCall()
    {
        while (true)
        {
            yield return new WaitForSeconds(4);
            GameObject gObj = gameObjects[Random.Range(0, gameObjects.Count)];
            if (gObj == null)
            {
                print("This object is null " + gameObjects.Count + " " );
                continue;
            }
            FireAbility fireAbility = gObj.GetComponent<FireAbility>();
            if (fireAbility != null)
            {
                /*fireAbility.Fire();*/
            }

        }
    }
    IEnumerator CheckDestroyedObjects()
    {
        

            yield return new WaitForSeconds(15);
            if (destroyedMembers % 15 == 0)
            {
                gameObjects.Clear();
                targets.Clear();
                // Make the Grid 
                CreateGridAndTransforms();

                // 
                CreateAndPositionPrefabs();
                destroyedMembers = 0;
            }

        StopCoroutine("CheckDestroyedObjects");
    }
}
