using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RunParticle : MonoBehaviour
{
    ParticleSystem particle;
    // Start is called before the first frame update
    void Start()
    {
        particle = GetComponent<ParticleSystem>();
        if (particle != null)
        {
            particle.Play();
            
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
