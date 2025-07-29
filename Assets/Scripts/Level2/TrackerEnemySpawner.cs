using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrackerEnemySpawner : MonoBehaviour
{
    [SerializeField] private List<GameObject> spawnerLocations = new List<GameObject>();
    [SerializeField] private GameObject enemyToSpawn;

    [SerializeField] private int initCount = 3;

    private float spawnDelay = 30f;

    private int totalCount = 3;

    private float enemiesCurrentSpeed = 1.5f;
    private const  float MAX_SPEED = 1.5f;
    private int producedEnemiesCount = 0;
    private float MAX_Number = 3f;
    void Start()
    {
        for(int i = 0; i <= initCount; i++)
        {
            GameObject gameObject = GameObject.Instantiate(enemyToSpawn, spawnerLocations[Random.Range(0, spawnerLocations.Count)].transform);
            MoveForward moveForwardBehaviour = gameObject.GetComponent<MoveForward>();
            if (moveForwardBehaviour != null)
            {
                moveForwardBehaviour.speedMax = enemiesCurrentSpeed;
            }
        }
        StartCoroutine(SpwanNewEnemy());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator SpwanNewEnemy()
    {
        yield return new WaitForSeconds(5f);
        while (true)
        {
            if (MAX_Number > 8)
                break;
            if (totalCount == 5 || totalCount == 7 || totalCount == 8)
                enemiesCurrentSpeed += .3f;
            if (totalCount == MAX_Number)
            {
                yield return new WaitForSeconds(spawnDelay);
                print("MAX_NUMBER " + MAX_Number + " Total Count " + totalCount);
                MAX_Number += 2;
                totalCount = 0;
            }
            GameObject gameObject = GameObject.Instantiate(enemyToSpawn, spawnerLocations[Random.Range(0, spawnerLocations.Count)].transform);
            MoveForward moveForwardBehaviour = gameObject.GetComponent<MoveForward>();
            if (moveForwardBehaviour != null)
            {
                moveForwardBehaviour.speedMax = enemiesCurrentSpeed;
            }
            totalCount++;
        }
    }
}
