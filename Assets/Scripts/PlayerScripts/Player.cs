using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UIElements;

public class Player : MonoBehaviour

{
    [SerializeField]
    private GameObject fireShape;
    private AudioSource a_AudioSource;

    private Vector2 moveDirection = Vector2.zero;
    private Rigidbody2D rigidbody;

    
    private void Awake()
    {
        a_AudioSource = GetComponent<AudioSource>();
    }
    private void Start()
    {
        
    }
    private void Update()
    {
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Enemy")||collision.gameObject.CompareTag("EnemyFire"))
        {
            Destroy(gameObject);
            CrossPlatformVibration.Vibrate(100);
            GameManager.GetInstance().NotifyGameIsOver();
        }
    }
  

    public void InstantiateNewFire()
    {

        Instantiate(fireShape, transform.position, transform.rotation);
        a_AudioSource.Play();
    }

  
    public void Stop()
    {
        
    }

}

  
