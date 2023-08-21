using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyAI : MonoBehaviour
{
    // AI with X,Y,Z rotation

    /* public Transform player; // Reference to the player's GameObject
     public float moveSpeed = 5f;
     public float rotationSpeed = 5f;
     public float detectionRange = 100f;
     private void Update()
     {
         // Calculate distance to the player
         float distanceToPlayer = Vector3.Distance(transform.position, player.position);

         if (distanceToPlayer < detectionRange)
         {
             // Rotate towards the player's position
             Vector3 targetDirection = player.position - transform.position;
             Quaternion targetRotation = Quaternion.LookRotation(targetDirection, Vector3.up);
             transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, rotationSpeed * Time.deltaTime);

             // Move towards the player's position
             Vector3 moveDirection = targetDirection.normalized;
             transform.Translate(moveDirection * moveSpeed * Time.deltaTime);
         }

     }*/


    // AI with X,Y rotation
    /*ublic Transform player; // Reference to the player's GameObject
    public float moveSpeed = 5f;
    public float rotationSpeed = 5f;
    public float detectionRange = 10f;

    private void Update()
    {
        // Calculate distance to the player
        float distanceToPlayer = Vector3.Distance(transform.position, player.position);

        if (distanceToPlayer < detectionRange)
        {
            // Calculate target direction only on the Z-axis
            Vector3 targetDirection = player.position - transform.position;
            float targetAngle = Mathf.Atan2(targetDirection.y, targetDirection.x) * Mathf.Rad2Deg;

            // Smoothly rotate towards the target angle
            Quaternion targetRotation = Quaternion.Euler(0f, 0f, targetAngle);
            transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, rotationSpeed * Time.deltaTime);

            // Move towards the player's position
            Vector3 moveDirection = targetDirection.normalized;
            transform.Translate(moveDirection * moveSpeed * Time.deltaTime);
        }



    }*/

    private Transform randomTransferPosition; // Reference to the player's GameObject
    public float circleRadius = 1f;
    public float circleSpeed = 10f;

    private float angle = 0f;
    public float moveSpeed = 5f;
    public float rotationSpeed = 5f;
    public float detectionRange = 10f;

    public float minX = -14.82f;
    public float maxX = 14.45f;
    public float minY = -9.47f;
    public float maxY = -1.3f;

    public void Start()
    {
        CreateRandomTransformPosition();
    }
    private void Update()
    {
        float distanceToPlayer = Vector3.Distance(transform.position, randomTransferPosition.position);
        Debug.DrawRay(transform.position, randomTransferPosition.position);
        if (distanceToPlayer > 5f)
        {

            // Calculate target direction only on the Z-axis
            Vector3 targetDirection = randomTransferPosition.position - transform.position;
            float targetAngle = Mathf.Atan2(targetDirection.y, targetDirection.x) * Mathf.Rad2Deg;
         
            // Smoothly rotate towards the target angle
            Quaternion targetRotation = Quaternion.Euler(0f, 0f, targetAngle);
            transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, rotationSpeed * Time.deltaTime);

            // Move towards the player's position
           /* Vector3 moveDirection = targetDirection.normalized;
            transform.Translate(moveDirection * moveSpeed * Time.deltaTime);*/

        }
        else
        {
            // Destroy the temporary new Transform
            CreateRandomTransformPosition();
        }
       

    }
    public void CreateRandomTransformPosition()
    {
        float randomX = Random.Range(minX, maxX);
        float randomY = Random.Range(minY, maxY);
        if (randomTransferPosition == null)
        {
        randomTransferPosition = new GameObject().transform;
        }
        randomTransferPosition.position = new Vector3(randomX, randomY, 0);
  
    }
}

