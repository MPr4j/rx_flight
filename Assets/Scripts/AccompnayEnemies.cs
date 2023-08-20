using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AccompnayEnemies : MonoBehaviour
{
    [SerializeField]
    private Transform playerTransform;
    private float speed = .5f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

        if (transform.position.y != playerTransform.position.y)
        {
            transform.position = new Vector3(transform.position.x, transform.position.y + (playerTransform.position.y - transform.position.y) * Time.deltaTime * speed, -1);
        }
    }
}
