using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthBar : MonoBehaviour
{
    private HealthSystem _healthSystem;

    private void Awake()
    {
       
    }
    // Start is called before the first frame update
    void Start()
    {
        GameManager gameManager = GameObject.FindWithTag("GameController").GetComponent<GameManager>();
        _healthSystem = gameManager.healthSystem;
    }

    // Update is called once per frame
    void Update()
    {  
        if (_healthSystem != null)
        {
            if (_healthSystem.health < 0)
            {
                transform.localScale = new Vector3(0, 1);
            }
            else
            {   
                transform.localScale = new Vector3(_healthSystem.GetHealhPercentage(), 1);
            }
        }
        
    }
}
