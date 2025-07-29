using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SquaredEnemies : MonoBehaviour
{

    private int gridSizeX = 3;
    private int gridSizeY = 3;
    [SerializeField]
    private Sprite sourceSprite;
    [SerializeField]
    private GameObject prefab;
    private List<Vector2> targets = new List<Vector2>();

    [SerializeField]
    private List<Transform> spawnerLocations;

    void Start()
    {
        CreateGridAndTransforms();
        CreateAndPositionPrefabs();
    }

    public void CreateGridAndTransforms()
    {
        if (sourceSprite != null)
        {
            // Calculate the size of each grid cell based on the sprite's dimensions
            float cellWidth = sourceSprite.bounds.size.x * 6 / gridSizeX;
            float cellHeight = sourceSprite.bounds.size.y * 6 / gridSizeY;
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
        for (int i = 1; i < targets.Count; i += 2)
        {
            GameObject gameObject = Instantiate(prefab, targets[i], Quaternion.identity) as GameObject;
            // Set the parent of the instantiated object to this GameObject
            gameObject.transform.SetParent(transform);
        }
    }
}
