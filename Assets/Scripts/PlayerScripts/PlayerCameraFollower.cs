using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCameraFollower : MonoBehaviour
{
    private Transform playerTransform;
    private Vector3 tempPos;

    [SerializeField]
    private float 
        rightBound,
        leftBound,
        topBound,
        bottomBound;
    private float cameraHalfWidth;
    private float cameraHalfHeight;

    // Start is called before the first frame update
    void Start()
    {
        GameObject playerObj = GameObject.FindWithTag("Player");
        if (playerObj != null)
        {
            playerTransform = playerObj.transform;
        }
        cameraHalfWidth = Camera.main.orthographicSize * Camera.main.aspect;
        cameraHalfHeight = Camera.main.orthographicSize;
    }


    // Update is called once per frame
    // Update is called once per frame
    void LateUpdate()
    {
        if(playerTransform != null)
        {
            tempPos = transform.position;
            tempPos.x = Mathf.Clamp(playerTransform.position.x, leftBound + cameraHalfWidth, rightBound - cameraHalfWidth);
            tempPos.y = Mathf.Clamp(playerTransform.position.y, bottomBound + cameraHalfHeight, topBound - cameraHalfHeight);
            transform.position = tempPos;
        }
       
    }
}
