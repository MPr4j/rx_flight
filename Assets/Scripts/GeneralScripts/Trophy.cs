using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Trophy : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Player")
        {        
            GameManager.GetInstance().NotifyTrophyHasTriggered(gameObject.tag);
            Destroy(gameObject);            
        }
    }
}
