using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour
{
    [SerializeField]
    private List<GameObject> spawns = new List<GameObject>();
    [SerializeField]
    private float spawnDelay = 10f;
    private int count = 0;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(SpwanNewEnemy());
    }

    IEnumerator SpwanNewEnemy()
    {
        while (true)
        {
            if (count == 2)
            { 
                break;
            }
            yield return new WaitForSeconds(spawnDelay);
            GameObject gameObject = GameObject.Instantiate(spawns[GenerateRandomIndex()],transform);
            gameObject.tag = "Enemy";
            gameObject.AddComponent<EnemyAI>();
            count++;
        }
    }
    private int GenerateRandomIndex()
    {
        int index = Random.Range(0, spawns.Count);
        return index;   
    }
}
