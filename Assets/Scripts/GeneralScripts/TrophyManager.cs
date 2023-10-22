
using UnityEngine;

public class TrophyManager : MonoBehaviour
{
    private int numberOfKilledEnemy = 0;

    [SerializeField] 
    private GameObject StarTrophy;
    [SerializeField] 
    private GameObject LightningWeaponTrophy;
    [SerializeField]
    private GameObject HealthTrophy;

     void Start()
    {
        
    }
    private void OnEnable()
    {
        // Subscribe to the EnemyWatcher of GameManager
        GameManager.enemyWatcher += KilledEnemyWatcher;

        // Subscribe to the ScoreWatcher of GameManager
        GameManager.scoreWatcher += CurrentScoreWatcher;
    }
    private void OnDisable()
    {
        GameManager.scoreWatcher -= CurrentScoreWatcher;
        GameManager.enemyWatcher -= KilledEnemyWatcher;
        numberOfKilledEnemy = 0;
    }

    public void CurrentScoreWatcher(int score)
    {
    }
    public void KilledEnemyWatcher(string enemyTag, Transform killedPosition)
    {
        print("number of KILLED " + numberOfKilledEnemy);
        // Increament the number of killed enemies
        numberOfKilledEnemy++;
        if ( numberOfKilledEnemy % 10 == 0)
        {
            Instantiate(StarTrophy, killedPosition.position, killedPosition.rotation);   
        }
        else if (numberOfKilledEnemy % 21 == 0)
        {
            Instantiate(LightningWeaponTrophy, killedPosition.position, killedPosition.rotation);   
        }else if (numberOfKilledEnemy % 15 == 0)
        {
            Instantiate(HealthTrophy, killedPosition.position, killedPosition.rotation);
        }

    }
    // Update is called once per frame
    void Update()
    {
        // Decide base on currentScore and number of killed enemies
    }
}
