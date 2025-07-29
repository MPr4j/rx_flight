using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CommanderEnemy : MonoBehaviour
{
    // Start is called before the first frame update
    public List<Transform> nextMoves;

    private float rotationSpeed = 400f;

    private bool reverse = false;

    public float speed { set; get; } = .5f;

    Rigidbody2D rigidbody2;
    void Start()
    {
        rigidbody2 = GetComponent<Rigidbody2D>(); 
    }

    // Update is called once per frame
    int i = 0;
    void Update()
    { 
        if (nextMoves != null && nextMoves.Count > 0)
        {
            if (i == nextMoves.Count - 1)
            {
                reverse = true;
            }
            if (i == 0)
            {
                reverse = false;
            }
            Transform t = nextMoves[i];
            if (t != null)
            { 
                if (Vector2.Distance(transform.position, nextMoves[i].position) < 2f)
                {
                    if (!reverse)
                        i++;
                    else
                        i--;
                }
                else
                {
                    
                    if (nextMoves[reverse ? i - 1 : i + 1] != null)
                    {
                        // at this time we sure we find player 
                        Vector3 dir = t.position - transform.position;
                        float zAngele = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg - 90;
                        Quaternion disiredRot = Quaternion.Euler(0, 0, zAngele);
                        transform.rotation = Quaternion.RotateTowards(transform.rotation, disiredRot, rotationSpeed * Time.deltaTime);
                        transform.position += new Vector3(t.position.x - transform.position.x, t.position.y - transform.position.y, 0) * Time.deltaTime * speed;
                    }
                }
               
               
            }
         
        }
    }

   

}
