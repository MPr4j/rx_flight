using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoneSpawner : MonoBehaviour
{
    [SerializeField] private List<GameObject> spawnerLocations;
    [SerializeField] private List<GameObject> stoneObjects;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(GenerateStone());   
    
    }

    // Update is called once per frame
    void Update()
    {
            
    }

    IEnumerator GenerateStone()
    {
        while (true)
        {
            yield return new WaitForSeconds(Random.Range(.7f,2.3f));
            GameObject stoneInstance = Instantiate(
                stoneObjects[(int)Random.Range(0, stoneObjects.Count)],
                spawnerLocations[(int)Random.Range(0, spawnerLocations.Count)].transform);
        }
        
    }
  
}
