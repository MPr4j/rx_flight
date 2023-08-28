using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireMovement : MonoBehaviour
{
    [SerializeField]
    private float moveSpeed = 2.5f;
    [SerializeField]
    private float directionY;
    // Update is called once per frame
    void Update()
    {
        transform.position += new Vector3(0, directionY , 0) * Time.deltaTime * moveSpeed;
    }
}
