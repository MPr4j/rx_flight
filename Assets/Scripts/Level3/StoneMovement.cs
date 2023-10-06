using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoneMovement : MonoBehaviour

{
    private Rigidbody2D myBody;
    [SerializeField] private float minimumScale = .4f;
    private float rotation = 360;
    private Vector3 targetScale = Vector3.one;
    private Vector3 initalScale = Vector3.one;
    private void Awake()
    {
        myBody = GetComponent<Rigidbody2D>();    
    }
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(SelfDestroy());
    }

    // Update is called once per frame
    void Update()
    {
        float localScale = transform.localScale.x;
        if (localScale <= minimumScale)
        {
            // Self Destroy object for stone
            Destroy(gameObject);
        }
        // Add force from right to left 
        myBody.AddForce(new Vector2(Random.Range(-.3f, -.7f), 0));
        myBody.angularVelocity = 40f;
        transform.localScale = Vector3.Lerp(initalScale, targetScale, Time.deltaTime * 80f);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    { 
       
            initalScale = transform.localScale;
            float decreaseLevel = 0;
            if (collision.tag == "Player" || collision.tag == "Fire")
            {
                decreaseLevel = .3f;
            }
            if (collision.tag == "Lightning")
            {
                  decreaseLevel = .03f;
             }
            // Change the local scale of stone
            targetScale -= new Vector3(decreaseLevel,decreaseLevel,0);
    }

    IEnumerator SelfDestroy()
    {
        yield return new WaitForSeconds(12f);
        Destroy(gameObject);
    }
}
