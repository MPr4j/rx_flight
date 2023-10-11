
using UnityEngine;

public class TrophyManager : MonoBehaviour
{
    private int currentScore = 0;
    private int numberOfKilledEnemy = 0;

    [SerializeField] 
    private GameObject StarTrophy;
    [SerializeField] 
    private GameObject LightningWeaponTrophy;
    [SerializeField]
    private GameObject HealthTrophy;

     void Start()
    {
        // Subscribe to the EnemyWatcher of GameManager
        GameManager.enemyWatcher += KilledEnemyWatcher;

        // Subscribe to the ScoreWatcher of GameManager
        GameManager.scoreWatcher += CurrentScoreWatcher; 
    }

    public void CurrentScoreWatcher(int score)
    {
        currentScore = score;
    }
    public void KilledEnemyWatcher(string enemyTag, Transform killedPosition)
    {
        print("number of KILLED " + numberOfKilledEnemy);
        // Increament the number of killed enemies
        numberOfKilledEnemy++;
        if ( numberOfKilledEnemy % 10 == 0)
        {
            int RandomChance = Random.Range(0, 2);
            print("RandomFuncking Change " + RandomChance);
            if (RandomChance > 0 )
            {
                Instantiate(HealthTrophy, killedPosition.position,killedPosition.rotation);
            }
            else
            {
                Instantiate(StarTrophy, killedPosition.position, killedPosition.rotation);
            }
        }else if (numberOfKilledEnemy % 5 == 0)
        {
            Instantiate(LightningWeaponTrophy, killedPosition.position, killedPosition.rotation);   
        }

    }
    // Update is called once per frame
    void Update()
    {
        // Decide base on currentScore and number of killed enemies
    }
}
