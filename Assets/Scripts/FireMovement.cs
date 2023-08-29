using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireMovement : MonoBehaviour
{
    [SerializeField]
    private float moveSpeed = 10f;

    // Update is called once per frame
    Rigidbody2D rb;
    public void Start()
    {
        rb = GetComponent<Rigidbody2D>();

        float zRotation = transform.rotation.eulerAngles.z;
        rb.velocity = Quaternion.Euler(0, 0, zRotation) * Vector2.up * moveSpeed;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Enemy")
        {
            Destroy(gameObject);
        }
    }

}
