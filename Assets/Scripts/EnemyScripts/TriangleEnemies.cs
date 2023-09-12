using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriangleEnemies : MonoBehaviour
{
    private int gridSizeX = 5;
    private int gridSizeY = 5;
    [SerializeField]
    private Sprite sourceSprite;
    [SerializeField]
    private GameObject prefab;
    private List<Vector2> targets = new List<Vector2>();
    private List<GameObject> gameObjects = new List<GameObject>();
    // Start is called before the first frame update
    void Start()
    {
        CreateGridAndTransforms();
        CreateAndPositionPrefabs();
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
                GameObject gameObject = Instantiate(prefab, new Vector2(posX, posY), Quaternion.identity);
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
            FireAbility fireAbility = gameObjects[Random.RandomRange(0,gameObjects.Count)].GetComponent<FireAbility>();
            if (fireAbility != null)
            {
                fireAbility.Fire();
            }

        }
    }
}
