using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CircleAroundPlayer : MonoBehaviour
{
    [SerializeField]
    private GameObject explosionPrefab;

    bool getNearThePlayer = true;

    public float rotationSpeed = 90f;
    public float circleRadius = 5;
    public float circleSpeed = 50f;


    private float angle = 0f;
    private float speedMax = 150f;

    // Player Object to track
    private Transform trackingTransform;
    private Rigidbody2D rigidbody;

    private Vector2 moveDirection = Vector2.up;

    // Start is called before the first frame update
    void Awake()
    {
        trackingTransform = GameObject.FindWithTag("Player").GetComponent<Transform>();

        // Take RigidBody in order to add velocity 
        rigidbody = GetComponent<Rigidbody2D>();
        if (trackingTransform == null)
        {
            Destroy(gameObject);    // Self Destroy if trackingTransform is null
        }

    }

    // Update is called once per frame
    void Update()
    {

        if (trackingTransform != null)
        {
            // CheckState in every frame
            getNearThePlayer = GetNearToTheTrackingPosition();

            if (getNearThePlayer)
            {
                // Rotate towards the tracking position
                RotateTowardTrackingPosition();

                // Move towards to the tracking position
                MoveTowardTrackingPosition();
            }
            else
            {
                RotateTowardTrackingPosition();
                CircleAroundPosition();
            }
        }
    
    }

    void CircleAroundPosition()
    {
        // Calculate the desired position around the player
        Vector3 circlePosition = trackingTransform.position + Quaternion.Euler(0f, 0f, angle) * Vector3.right * circleRadius;
        // Move the enemy to the desired position
        transform.position = circlePosition;

        // Increment the angle over time to make the enemy circle around the player
        angle += circleSpeed * Time.deltaTime;
        if (angle > 360f)
        {
            angle -= 360f;
        }
    }

    void RotateTowardTrackingPosition()
    {
        // at this time we sure we find player 
        Vector3 dir = trackingTransform.position - transform.position;
        dir.Normalize();
        float zAngele = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg - 90;
        Quaternion disiredRot = Quaternion.Euler(0, 0, zAngele);
        transform.rotation = Quaternion.RotateTowards(transform.rotation, disiredRot, rotationSpeed * Time.deltaTime);
    }

    void MoveTowardTrackingPosition()
    {
        float zAngle = transform.rotation.eulerAngles.z;
        moveDirection = Quaternion.Euler(0,0,zAngle) * Vector3.up;
        rigidbody.velocity = moveDirection * Time.deltaTime * speedMax;
        Vector2 diff = transform.position - trackingTransform.position;
        angle = Mathf.Atan2(diff.y, diff.x) * Mathf.Rad2Deg;
    }
    bool GetNearToTheTrackingPosition()
    {
        Vector3 currentPosition = transform.position;

        // Calculate distance from tracking transform and currentPosition
        float distance = Vector2.Distance(currentPosition, trackingTransform.position);
        return distance > circleRadius;
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Fire" || collision.gameObject.tag == "Player")
        {

            GameObject pNewObject = (GameObject)GameObject.Instantiate(explosionPrefab, transform.position, Quaternion.identity);
/*            ScoreManeger.instance.AddPoint();
*/        }

    }

}
