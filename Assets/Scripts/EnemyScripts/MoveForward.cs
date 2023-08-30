using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveForward : MonoBehaviour
{
    [SerializeField]
    private float speedMax = 5f;
    // Update is called once per frame
    void Update()
    {
        Vector3 pos=transform.position;
        Vector3 velacity=new Vector3(0,speedMax*Time.deltaTime,0);
        pos += transform.rotation * velacity;
        transform.position = pos;
    }
}
