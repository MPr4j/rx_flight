using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UIElements;

public class Player : MonoBehaviour
{
    [SerializeField] private GameObject primaryWeapon;
    [SerializeField] private GameObject secondaryWeapon;
    private ChainLightning LightningEffect;

    [SerializeField] private Transform fireLocationToSpawn;
    private AudioSource a_AudioSource;
    private Vector2 moveDirection = Vector2.zero;
    private Rigidbody2D rigidbody;

    GameObject lightningObj;
    bool lightningEnabled = false;
    private void Awake()
    {
        a_AudioSource = GetComponent<AudioSource>();

    }
    private void Start()
    {
        // Subscribe to the GameManager in order to check power ups
        GameManager.trophyWatcher += TrophyTriggered;
        if (secondaryWeapon != null )
        {
            LightningEffect = secondaryWeapon.GetComponent<ChainLightning>();
        }
        
    }
    private void Update()
    {

    }

    private void TrophyTriggered(string trohpyTag)
    {
        switch(trohpyTag)
        {
            case "TStar":
                ScoreManeger.instance.AddPoint();
                break;
            case "TLight":
                lightningEnabled = true;
                break;
            case "THeal":
                 GameManager.GetInstance().healthSystem.Heal(20);
                break;
                
        }
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        float remainedHealth = 100f;
        switch (collision.gameObject.tag)
        {
            case "StoneTiny":
            case "Enemy":
            case "EnemyFire":
                remainedHealth = GameManager.GetInstance().OnDamage(20);
                lightningEnabled = false;
                CrossPlatformVibration.Vibrate(100);
                break;
            case "StoneBig":
                remainedHealth = GameManager.GetInstance().OnDamage(40);
                lightningEnabled = false;
                CrossPlatformVibration.Vibrate(100);
                break;
            default:
                /*remainedHealth = GameManager.GetInstance().healthSystem.GetHealhPercentage() * 100;*/
                break;
        }
        if (remainedHealth <= 0)
        {
            Destroy(gameObject);
        }

    }
  

    public void enableFire()
    {
        if (!lightningEnabled)
        {
            Destroy(lightningObj);
            Instantiate(primaryWeapon, fireLocationToSpawn.position, fireLocationToSpawn.rotation);
            if (GameManager.constants[Constants.KeySound])
            {
                a_AudioSource.Play();
            }
        }
        else
        {
            if (lightningObj == null)
            {
                lightningObj =  Instantiate(secondaryWeapon, fireLocationToSpawn.position, transform.rotation);
            }
           
        }
       
    }
    public void disableFire()
    {
        lightningEnabled = false;
    }
    public void Stop()
    {
        
    }

}

  
