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














    //mobin kossher
    //public float swipeMultiplier = 0.1f; // Adjust this value to control movement speed
    /*if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            // Check the swipe direction based on the change in touch position
            if (touch.phase == TouchPhase.Moved)
            {
                float swipeDirectionY = Mathf.Sign(touch.deltaPosition.y);
                float swipeDirectionX = Mathf.Sign(-touch.deltaPosition.x);
                Vector3 newPosition = transform.position + Vector3.up * swipeDirectionX * swipeSpeed * Time.deltaTime;
                transform.position = newPosition;
            }
        }*/



}
