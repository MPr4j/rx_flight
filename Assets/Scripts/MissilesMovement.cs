using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissilesMovement : MonoBehaviour
{
    public Transform enemy; // Reference to the player's GameObject
    public float moveSpeed = .5f;
    public float rotationSpeed = 5f;
    public float detectionRange = 10f;
    public void Start()
    {
        enemy = GameObject.FindGameObjectsWithTag("Enemy")[0].transform;
    }
    private void Update()
    {
        // Calculate distance to the player
        float distanceToPlayer = Vector3.Distance(transform.position, enemy.position);

        if (distanceToPlayer < detectionRange)
        {
            // Calculate target direction only on the Z-axis
            Vector3 targetDirection = enemy.position - transform.position;
            float targetAngle = Mathf.Atan2(targetDirection.y, targetDirection.x) * Mathf.Rad2Deg;

            // Smoothly rotate towards the target angle
            Quaternion targetRotation = Quaternion.Euler(0f, 0f, targetAngle);
            transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, rotationSpeed * Time.deltaTime);

            // Move towards the player's position
            Vector3 moveDirection = targetDirection.normalized;
            transform.Translate(moveDirection * moveSpeed * Time.deltaTime);
        }
    }
}
