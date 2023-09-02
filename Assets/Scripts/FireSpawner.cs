using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireSpawner : MonoBehaviour
{
    [SerializeField]
    private GameObject fireShape;
    private float deltaTime;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(HandleTouch());
    }

  
    IEnumerator HandleTouch()
    {
        while(true)
        {
            yield return new WaitForSeconds(1f);
            if (Input.touchCount > 0)
            {
                InstantiateNewFire(fireShape);
            }
            else
            {
                StopCoroutine("InstantiateNewFire");
            }
        }

    }

    void InstantiateNewFire(GameObject fireShape)
    {

        Instantiate(fireShape, transform.position,transform.rotation);
    }
}
