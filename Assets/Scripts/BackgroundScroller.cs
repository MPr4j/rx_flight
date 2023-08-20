using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundScroller : MonoBehaviour
{
    [SerializeField]
    private float speed = 0.01f;
    MeshRenderer renderrer;
    // Start is called before the first frame update
    void Start()
    {
        renderrer = GetComponent<MeshRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        Vector2 offset = new Vector2(Time.time /100, 0);
   
        renderrer.material.mainTextureOffset = offset;
    }
}
