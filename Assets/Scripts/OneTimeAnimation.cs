using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OneTimeAnimation : MonoBehaviour
{
    Animator animator;
    bool played = false;
    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        if (!played)
        {
            animator.SetBool("play", true);
            played = true;
        }
        else
        {
            StartCoroutine(StopAnimation());
        }

    }
    IEnumerator StopAnimation()
    {
        yield return new WaitForSeconds(10f);
        animator.SetBool("play", false);
        
    }
}
