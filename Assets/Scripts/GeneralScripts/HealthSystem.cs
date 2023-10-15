using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthSystem
{

    private float MAX_HEALTH = 100;

    public float health { get; private set; }

    public HealthSystem() {

        health = MAX_HEALTH;
    }
    public float Heal(float heal)
    {

        health += heal;
        if (health > MAX_HEALTH)
        {
            health = MAX_HEALTH;
        }
        return health; 
    }
    public float Damage(float damage)
    {
        health -= damage;
        if (health < 0)
        {
            health = 0;
        }
        return health;
    }

    public float GetHealhPercentage()
    {
        return ((float) health / MAX_HEALTH);
    }


}
