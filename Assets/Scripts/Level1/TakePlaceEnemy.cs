using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TakePlaceEnemy : MonoBehaviour
{
    // This is the exact location to take in place
    public Vector3 placeToTake { get; set; }

    // The speed of movement
    public float _speed = 2f;

    public float rotationSpeed = 200f;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Vector2.Distance(transform.position,placeToTake) > .01f)
        {
            // RotateTowrads to the place
            LookRotationToThePlace();

            // Move forward to the position
            MoveForward();
        }
        else
        {
            // Rotation to the bottom
            LookRotationToTheDegree(180);
        }
        
    }

    private void LookRotationToTheDegree(float degree)
    {
        Quaternion disiredRot = Quaternion.Euler(0, 0, degree);
        transform.rotation = Quaternion.RotateTowards(transform.rotation, disiredRot, rotationSpeed * Time.deltaTime);
    }
    private void LookRotationToThePlace()
    {
        //find player 
        if (placeToTake == null)
        {
            return;
        }
        // at this time we sure we find player 
        Vector2 dir = placeToTake - transform.position;
        dir.Normalize();
        float zAngele = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg - 90;
        Quaternion disiredRot = Quaternion.Euler(0, 0, zAngele);
        transform.rotation = Quaternion.RotateTowards(transform.rotation, disiredRot, rotationSpeed * Time.deltaTime);
    }

    private void MoveForward()
    {
        Vector3 pos = transform.position;
        Vector3 velocity = new Vector3(0, _speed * Time.deltaTime, 0);
        pos += transform.rotation * velocity;
        transform.position = pos;
    }

}
