using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyShooting : MonoBehaviour
{
    [SerializeField]
    private GameObject fireShape;
    private GameObject playerObj;
    [SerializeField]
    private int fireDelay = 1;
    // Start is called before the first frame update
    private void Awake()
    {
        
    }
    void Start()
    {
        playerObj = GameObject.FindGameObjectWithTag("Player");
        StartCoroutine(Fire());
    }

    // Update is called once per frame
    void Update()
    {
    
    }
    IEnumerator Fire()
    {
        while (true)
        {
            yield return new WaitForSeconds(fireDelay);
            if (playerObj!=null)
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

        Instantiate(fireShape, transform.position, transform.rotation);
    }
}
