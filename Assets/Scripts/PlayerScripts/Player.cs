using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.EventSystems;

public class Player : MonoBehaviour
{
    public float maxSpeed = 50f; // Adjust the speed as needed
    public float rotSpeed = 100f; // Adjust the rotation speed as needed

    private Rigidbody2D rb;


    private void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Enemy"))
        {
            Destroy(gameObject);
            GameManager.GetInstance().NotifyGameIsOver();
        }
    }

  
}
