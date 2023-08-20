using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissilesSpawner : MonoBehaviour
{
    [SerializeField]
    private GameObject missiles;
    private int missileCount = 0;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            if (missileCount < 2)
            {
/*
                Instantiate(missiles, transform.localPosition, Quaternion.identity);
                missileCount++;*/
            }
        }
    
        
    }
}
