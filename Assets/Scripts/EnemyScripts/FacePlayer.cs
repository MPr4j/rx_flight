using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FacePlayer : MonoBehaviour
{
    Transform player;
    public float rotationSpeed = 90f;
    // Update is called once per frame

    [SerializeField]
    private GameObject explosionPrefab;

    private AudioSource explosionAudio;

    private void Awake()
    {
        explosionAudio = GetComponent<AudioSource>();    
    }
    void Update()
    {
        Look () ;
    }
    private void Look()
    {
        //find player 
        if (player == null)
        {
            GameObject go = GameObject.FindWithTag("Player");
            if (go != null)
            {
                player = go.transform;
            }
        }
        if (player == null)
        {
            return; // try to next frame
        }
        // at this time we sure we find player 
        Vector3 dir = player.position - transform.position;
        dir.Normalize();
        float zAngele = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg - 90;
        Quaternion disiredRot = Quaternion.Euler(0,0,zAngele);
        transform.rotation = Quaternion.RotateTowards(transform.rotation,disiredRot,rotationSpeed*Time.deltaTime);
    }


    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag=="Player")
        {
            Destroy(gameObject);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Fire")
        {
            if (explosionAudio != null)
            {
                explosionAudio.Play();
            }
            GameObject pNewObject = (GameObject)GameObject.Instantiate(explosionPrefab, transform.position , Quaternion.identity);
           
            ScoreManeger.instance.AddPoint();
        }
    }



}

