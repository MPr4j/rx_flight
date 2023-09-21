using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour
{
    [SerializeField]
    private GameObject spawn;
    [SerializeField]
    private List<GameObject> spawnerLocations = new List<GameObject>();
    [SerializeField]
    private float spawnDelay = 10f;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(SpwanNewEnemy());
    }

    IEnumerator SpwanNewEnemy()
    {
        while (true)
        {
            yield return new WaitForSeconds(spawnDelay);
            GameObject gameObject = GameObject.Instantiate(spawn, spawnerLocations[GenerateRandomIndex()].transform);
        }
    }
    private int GenerateRandomIndex()
    {
        int index = Random.Range(0, spawnerLocations.Count);
        return index;
    }
}
