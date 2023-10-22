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
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Fire" || collision.gameObject.tag == "Player" || collision.gameObject.tag == "Lightning")
        {
/*            GameManager.GetInstance().NotifyEnemyIsDead(collision.tag, collision.transform);
*/            GameObject pNewObject = (GameObject)GameObject.Instantiate(explosionPrefab, transform.position, Quaternion.identity);
              Destroy(gameObject);
        }

    }
  


}
