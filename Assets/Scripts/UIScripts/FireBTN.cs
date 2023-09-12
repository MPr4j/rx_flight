using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireBTN : MonoBehaviour
{
    private GameObject playerObj;
    Player player;
    public void Start()
    {
        playerObj = GameObject.FindWithTag("Player");
        if (playerObj != null)
            player = playerObj.GetComponent<Player>();

    }
    public void OnClick()
    {
        
            if (player != null)
            {
                player.InstantiateNewFire();
            }
        

    }
}
