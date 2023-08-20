using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OneTimeAnimation : MonoBehaviour
{
    Animator animator;
    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
        animator.StopPlayback();
    }

    // Update is called once per frame
    IEnumerator StopAnimation()
    {
        yield return new WaitForSeconds(3f);
        
    }
}
