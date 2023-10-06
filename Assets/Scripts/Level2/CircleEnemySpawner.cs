using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CircleEnemySpawner : MonoBehaviour
{
    [SerializeField] private List<GameObject> spawnerLocations;
    [SerializeField] private GameObject circleAroundPlayerEnemy;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(SpawnNewEnemy());
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    IEnumerator SpawnNewEnemy()
    {
        yield return new WaitForSeconds(20f);
        for (int i = 0;i < spawnerLocations.Count; i++)
        {
            GameObject gameObject = GameObject.Instantiate(circleAroundPlayerEnemy, spawnerLocations[i].transform);
        }
    }
}
