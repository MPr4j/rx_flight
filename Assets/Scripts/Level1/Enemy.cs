using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{

    public IEnemy enemy { set; get; }
    public EnemyBehaviour behaviour { get; set; }

    public float FireRate = 5f;

    // Start is called before the first frame update
    void Start()
    {
        // Init behaviour in order to run retrieve objects to run algorithms
        behaviour.Init();
        enemy.GetReady();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
