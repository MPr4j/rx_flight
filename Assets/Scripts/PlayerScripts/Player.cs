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
    private Vector2 moveDirection = Vector2.zero;
    private Rigidbody2D rigidBody;

    GameObject lightningObj;
    public bool lightningEnabled { set; get; } = false;
    private void Awake()
    {
    }
    private void Start()
    {
        // Subscribe to the GameManager in order to check power ups
        GameManager.trophyWatcher += TrophyTriggered;
        if (secondaryWeapon != null)
        {
            LightningEffect = secondaryWeapon.GetComponent<ChainLightning>();
        }

    }
    private void OnDisable()
    {
        GameManager.trophyWatcher -= TrophyTriggered;
    }
    private void Update()
    {

    }

    private void TrophyTriggered(string trohpyTag)
    {
        switch (trohpyTag)
        {
            case "TStar":
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
        if (collision.tag.Contains("Enemy") || collision.tag == "EFire" || collision.tag == "StoneTiny")
        {
            remainedHealth = GameManager.GetInstance().OnDamage(20);
            lightningEnabled = false;
            if (GameManager.constants[Constants.KeyVibration])
                CrossPlatformVibration.Vibrate(100);
        }
        else if (collision.tag == "StoneBig")
        {
            remainedHealth = GameManager.GetInstance().OnDamage(40);
            lightningEnabled = false;
            if (GameManager.constants[Constants.KeyVibration])
                CrossPlatformVibration.Vibrate(100);

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
   

}

  
