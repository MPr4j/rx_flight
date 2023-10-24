using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UFOEnemies : MonoBehaviour
{
    [SerializeField]
    private GameObject explosionPrefab;
    private void Awake()
    {
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private bool isDestroyed = false;


    private void OnTriggerEnter2D(Collider2D collision)
    {

        if (!isDestroyed && (collision.gameObject.tag == "Fire" || collision.gameObject.tag == "Player" || collision.gameObject.tag == "Lightning"))
        {
            // Mark the enemy as destroyed to prevent multiple triggers
            isDestroyed = true;

            GameManager.GetInstance().NotifyEnemyIsDead(gameObject.tag, gameObject.transform);

            // Create an explosion effect
            GameObject pNewObject = (GameObject)GameObject.Instantiate(explosionPrefab, transform.position, Quaternion.identity);

            // Destroy the enemy
            Destroy(gameObject);
        }

    }
 

}
