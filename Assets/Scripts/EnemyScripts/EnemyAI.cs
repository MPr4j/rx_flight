using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyAI : MonoBehaviour
{
   
    private Transform lookinglocation; // Reference to the player's GameObject
    [SerializeField] private AnimationCurve curve;
    public float circleRadius = 1f;
    public float circleSpeed = 1f;

    private Rigidbody2D _rigidbody2D;

    private float rotationSpeed = 180f;
    public float minX = -10.5f;
    public float maxX = 12.8f;
    public float minY = -2.5f;
    public float maxY = 3.5f;
    public void Awake()
    {
        _rigidbody2D = GetComponent<Rigidbody2D>();

    }
    public void Start()
    {
    }
  
    private void FixedUpdate()
    {
        if (lookinglocation != null)
        {
            Quaternion rotation = Quaternion.LookRotation(Vector3.forward, lookinglocation.position);
            transform.rotation = Quaternion.Lerp(transform.rotation, rotation, Time.deltaTime * rotationSpeed);

            float distanceToPostionX = Mathf.Abs(lookinglocation.position.x - transform.position.x);
            float distanceToPostionY = Mathf.Abs(lookinglocation.position.y - transform.position.y);

            if (distanceToPostionX > .1f || distanceToPostionY > 0.1f)
            {
                transform.position = Vector3.Lerp(transform.position, lookinglocation.position, circleSpeed * Time.deltaTime);
            }
        }
        


    }

   
}

