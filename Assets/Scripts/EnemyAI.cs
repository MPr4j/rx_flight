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
    /*  public Transform player; // Reference to the player's GameObject
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

    public Transform player; // Reference to the player's GameObject
    public float circleRadius = 1f;
    public float circleSpeed = 10f;

    private float angle = 0f;

    private void Update()
    {
        // Calculate the desired position around the player
        Vector3 circlePosition = player.position + Quaternion.Euler(0f, 0f, angle) * Vector3.right * circleRadius;

        // Calculate rotation to look at the player
        Vector3 lookDirection = player.position - transform.position;
        float targetAngle = Mathf.Atan2(lookDirection.y, lookDirection.x) * Mathf.Rad2Deg;

        // Apply rotation and move the enemy to the desired position
        transform.rotation = Quaternion.Euler(0f, 0f, targetAngle);
        transform.position = circlePosition;

        // Increment the angle over time to make the enemy circle around the player
        angle += circleSpeed * Time.deltaTime;
        if (angle > 360f)
        {
            angle -= 360f;
        }

    }
}
