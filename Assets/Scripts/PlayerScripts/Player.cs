using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float maxSpeed = 50f; // Adjust the speed as needed
    public float rotSpeed = 10f; // Adjust the rotation speed as needed

    private Rigidbody2D rb;

    private Vector2 moveDirection = Vector2.up;

    private void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    private void Update()
    {
        // Handle user input for rotation
        HandleRotationInput();

       
        rb.velocity = moveDirection * maxSpeed;
    }

    private void HandleRotationInput()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Moved)
            {
                // Calculate the rotation change based on swipe direction
                float zRotation = transform.rotation.eulerAngles.z;
                zRotation -= touch.deltaPosition.x * rotSpeed * Time.deltaTime;

                // Set the new rotation
                transform.rotation = Quaternion.Euler(0, 0, zRotation);

                moveDirection = Quaternion.Euler(0, 0, zRotation) * Vector2.up;
                
            }
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
