using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Level3Manager : MonoBehaviour
{
    // Meteor Spawner necessary objects to spawn
    [SerializeField] private List<GameObject> spawnerLocations;
    [SerializeField] private List<GameObject> stoneObjects;


    [SerializeField] private List<GameObject> followingEnemyLocations;
    [SerializeField] private List<GameObject> followingEnemyPrefab;


    // Triangle necessary objects
    [SerializeField] private GameObject triangleLocation;

   
    private float DURATION_TO_SPAWN = 25f;

    private float initalDelay = 120f;
    private float initalDelayPolice = 60f;
   
    private bool StoneWelcomeDelayIsDone = false;
    private bool StoneCoroutineIsDone = false;

    private bool PoliceWelcomeDelayIsDone = false;
    private bool PoliceCoroutineIsDone = false;



    // Start is called before the first frame update
    void Start()
    {
        initalDelay += Time.time;
        initalDelayPolice += Time.time;

    }

    // Update is called once per frame
    void Update()
    {
        if (!StoneWelcomeDelayIsDone && Time.time >= initalDelay)
        {
            StoneWelcomeDelayIsDone = true;
        }
        if (!StoneCoroutineIsDone && StoneWelcomeDelayIsDone)
        {
            StoneCoroutineIsDone = true;
            StartCoroutine(GenerateStone());
        }
        if (!PoliceWelcomeDelayIsDone && Time.time >= initalDelayPolice)
        {
            PoliceWelcomeDelayIsDone = true;
        }
        if (!PoliceCoroutineIsDone && PoliceWelcomeDelayIsDone)
        {

            PoliceCoroutineIsDone = true;
            StartCoroutine(GeneratePolice());
        }

        
    }

    IEnumerator GenerateStone()
    {
        float nextStop = Time.time + DURATION_TO_SPAWN;
        while (true)
        {
            if (Time.time < nextStop)
            {
                yield return new WaitForSeconds(Random.Range(.5f, .7f));
                GameObject stoneInstance = Instantiate(
                stoneObjects[(int)Random.Range(0, stoneObjects.Count)],
                spawnerLocations[(int)Random.Range(0, spawnerLocations.Count)].transform);
            }
            else
            {
                yield return new WaitForSeconds(120f);
                nextStop = Time.time + DURATION_TO_SPAWN;
            } 
        }
    }
    IEnumerator GeneratePolice()
    {
        while (true)
        {
            yield return new WaitForSeconds(30f);
            for (int i =0; i < 4; i++)
            {
             GameObject stoneInstance = Instantiate(
              followingEnemyPrefab[(int)Random.Range(0, followingEnemyPrefab.Count)],
              followingEnemyLocations[i].transform);
            }
         }
           
        }
    }

