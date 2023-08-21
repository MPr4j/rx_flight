using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjCollector : MonoBehaviour
{

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Fire"))
        {
            Destroy(collision.gameObject);
        }
    }

}
