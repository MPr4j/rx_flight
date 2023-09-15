using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class FireAbility : MonoBehaviour
{
    private GameObject playerObj;

    [SerializeField]
    private GameObject fireShape;
    // Start is called before the first frame update
    void Start()
    {
        playerObj = GameObject.FindGameObjectWithTag("Player");
    }

    public void Fire()
    {
        if (playerObj != null)
        {
            Instantiate(fireShape, transform.position, transform.rotation);
        }
        else
        {
            StopCoroutine("InstantiateNewFire");
        }
    }
}
