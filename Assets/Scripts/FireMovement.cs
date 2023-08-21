using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireMovement : MonoBehaviour
{
    [SerializeField]
    private float moveSpeed = 2.5f;
    // Update is called once per frame
    void Update()
    {
        transform.position += new Vector3(0, 1 , 0) * Time.deltaTime * moveSpeed;
    }
}
