using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class FireBTN : MonoBehaviour , IPointerDownHandler, IPointerUpHandler
{
    private GameObject playerObj;
    Player player;
    private AudioSource lightningAudioSource;

    [SerializeField] private AudioClip lighningClip;
    [SerializeField] private AudioClip laserClip;

    public void OnPointerDown(PointerEventData eventData)
    {
        if(player != null)
        {
            player.enableFire();
            if (GameManager.constants[Constants.KeySound])
            {
                if (player.lightningEnabled)
                {
                    if (lightningAudioSource != null)
                    {
                        lightningAudioSource.clip = lighningClip;
                        lightningAudioSource.Play();
                    }
                }
                else
                {
                    if (lightningAudioSource != null)
                    {
                        lightningAudioSource.clip = laserClip;
                        lightningAudioSource.Play();
                    }
                }
            }
            
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
       
    }

    public void Start()
    {
        lightningAudioSource = GetComponent<AudioSource>();
        playerObj = GameObject.FindWithTag("Player");
        if (playerObj != null)
            player = playerObj.GetComponent<Player>();

        

    }
   
}
