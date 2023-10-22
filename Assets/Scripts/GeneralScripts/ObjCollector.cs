using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjCollector : MonoBehaviour
{

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Fire") || collision.gameObject.CompareTag("EFire"))
        {
            Destroy(collision.gameObject);
        }
    }

}
