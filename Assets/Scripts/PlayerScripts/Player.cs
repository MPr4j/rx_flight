using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    private Vector3 targetPosition;
    private float minYPosition;
    private float maxYPosition;
    public float swipeSpeed = 10f; // Adjust this value to control movement speed
    private Vector2 lastTouchDelta;
    public delegate void PlayerDied();
    private GameManager gameManager;

    public void Awake()
    {
     
    }
    private void Start()
    { 
    }

    private void Update()
    {
        
        HandleTouch();
       
    }
    public void HandleTouch()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Moved)
            {

                lastTouchDelta = touch.deltaPosition;
            }
            // Normalize the touch delta to avoid overly large movement
            Vector3 normalizedDelta = new Vector3(lastTouchDelta.x, lastTouchDelta.y, 0f).normalized;

            // Translate the player using the normalized touch delta
            transform.Translate(normalizedDelta * swipeSpeed * Time.deltaTime);
        }
        else
        {
            lastTouchDelta = Vector3.zero;
        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Enemy"))
        {
            Destroy(gameObject);
            GameManager.GetInstance().NotifyGameIsOver();
        }
       
    }
}
