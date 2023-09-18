using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class MoveBTN : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    private GameObject playerObj;
    private Rigidbody2D rigidbody;
    private Vector2 moveDirection = Vector2.up;
    public float moveSpeed = 180f;

    private bool move = false;
    // Start is called before the first frame update
    void Start()
    {
        playerObj = GameObject.FindWithTag("Player");
        if (playerObj != null) {
            rigidbody = playerObj.GetComponent<Rigidbody2D>();
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        if (move) {
            float zAngele = playerObj.transform.rotation.eulerAngles.z;
            moveDirection = (Quaternion.Euler(0, 0, zAngele) * Vector2.up) ;
            moveDirection.Normalize();
            rigidbody.velocity = moveDirection * moveSpeed * Time.deltaTime;
        }
        else
        {
            if (rigidbody != null)
            {
            rigidbody.velocity = Vector2.zero;
            }

        }

    }

 
    public void OnTouchStopped()
    {
        rigidbody.velocity = Vector3.zero;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        move = true;

    }

    public void OnPointerUp(PointerEventData eventData)
    {
        move = false;
    }
}
