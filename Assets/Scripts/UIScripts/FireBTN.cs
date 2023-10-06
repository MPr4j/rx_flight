using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class FireBTN : MonoBehaviour , IPointerDownHandler, IPointerUpHandler
{
    private GameObject playerObj;
    Player player;

    public void OnPointerDown(PointerEventData eventData)
    {
        if(player != null)
        {
            player.enableFire();
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
       
    }

    public void Start()
    {
        playerObj = GameObject.FindWithTag("Player");
        if (playerObj != null)
            player = playerObj.GetComponent<Player>();

    }
   
}
