using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Airbehaviour : MonoBehaviour
{
    public Camera mainCamera;
    public float swipeMultiplier = 0.1f; // Adjust this value to control movement speed

    private Vector3 targetPosition;
    private float minYPosition;
    private float maxYPosition;

    private void Start()
    {
      
    }

    public float swipeSpeed = 100f; // Adjust this value to control movement speed

    private void Update()
    {
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
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Moved)
            {
                Vector2 touchDelta = touch.deltaPosition;

                // Normalize the touch delta to avoid overly large movement
                Vector3 normalizedDelta = new Vector3(touchDelta.x, touchDelta.y, 0f).normalized;

                // Translate the player using the normalized touch delta
                transform.Translate(normalizedDelta * swipeSpeed * Time.deltaTime);
            }
        }
    
}
}
