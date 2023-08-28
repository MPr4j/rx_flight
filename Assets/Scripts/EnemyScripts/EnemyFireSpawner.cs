using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyFireSpawner : MonoBehaviour
{
    [SerializeField]
    private GameObject fireShape;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(InstantiateNewFire(fireShape));
    }

    // Update is called once per frame
    IEnumerator InstantiateNewFire(GameObject fireShape)
    {
        while (true)
        {
            yield return new WaitForSeconds(5f);
            Instantiate(fireShape, transform.position, Quaternion.identity);
        }

    }
}
