using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.EventSystems;

public class Player : MonoBehaviour

{
    [SerializeField]
    private GameObject fireShape;
    private AudioSource a_AudioSource;

    private void Awake()
    {
        a_AudioSource = GetComponent<AudioSource>();
    }
    private void Start()
    {
        StartCoroutine(HandleTouch());
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Enemy")||collision.gameObject.CompareTag("EnemyFire"))
        {
            Destroy(gameObject);
            GameManager.GetInstance().NotifyGameIsOver();
        }
    }
    IEnumerator HandleTouch()
    {
        while (true)
        {
            yield return new WaitForSeconds(0.5f);
            if (Input.touchCount > 0)
            {
                InstantiateNewFire(fireShape);
                a_AudioSource.Play();
            }
            else
            {
                StopCoroutine("InstantiateNewFire");
            }
        }

    }

    void InstantiateNewFire(GameObject fireShape)
    {

        Instantiate(fireShape, transform.position, transform.rotation);
    }
}

  
