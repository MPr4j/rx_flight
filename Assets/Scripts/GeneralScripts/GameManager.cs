using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public delegate void GameIsOver();
    public static event GameIsOver gameIsOver;

    public delegate void ScoreWatcher(int score);
    public static event ScoreWatcher scoreWatcher;

    public delegate void EnemyWatcher(string enemy,Transform position);
    public static event EnemyWatcher enemyWatcher;

    public delegate void TrophyWatcher(string trophy);
    public static event TrophyWatcher trophyWatcher;

    private GameOverScreen gameOverScreen;

    public Dictionary<string, int> destroyedEnemies = new Dictionary<string, int>();

    public static int SelectedMap = 0;

    public HealthSystem healthSystem;

    public Scene currentScene { get; set; }
    public enum MAP
    {
        GAMEPLAY_1,
        GAMEPLAY_2,
        GAMEPLAY_3,
    }

    public static Dictionary<int, string> gameMap = new Dictionary<int, string>();

    public const string keyMap = "MAP";
    public static Dictionary<string, bool> constants = new Dictionary<string, bool>()
    {

    };

    [SerializeField]
    private GameObject playerPrefabToSpawn;
    private static GameManager Instance
    {
        get;
        set;
    }

    private void LateUpdate()
    {
        // Exit from the Scene
        if(Input.GetKeyDown(KeyCode.Escape))
        {
            if (currentScene.name.Contains("GamePlay"))
            {
                // Load 
                SceneManager.LoadScene("MainMenu");
            }
        }
    }


    // Awake function that is called from unity
    private void Awake()
    {
     
        if (Instance == null)
        {
            Constants.Init();
            ConstantsHolder.RetreiveConstantsFromPlayerPrefs();
            Instance = this;
            DontDestroyOnLoad(gameObject);
            gameMap.Add((int)MAP.GAMEPLAY_1, "GamePlay_1");
            gameMap.Add((int)MAP.GAMEPLAY_2, "GamePlay_2");
            gameMap.Add((int)MAP.GAMEPLAY_3, "GamePlay_3");
   
        }
        else
        {
            Destroy(gameObject);
        }

     
        
    }

    public bool isKeyAlive(string key)
    {
        return PlayerPrefs.HasKey(key);
    }

    public  void SaveUserBooleanPrefs(string key,int value)
    {
        PlayerPrefs.SetInt(key, value);
    }

    public int GetUserBooleanPref(string key) { return PlayerPrefs.GetInt(key); }
   
  
    public static GameManager GetInstance()
    {
        if (Instance == null)
        {
            print("Game manager is null");
        }
        return Instance;
    }

    // Start is called before the first frame update
    private void OnEnable()
    {
        SceneManager.sceneLoaded += OnSceneChanged;
    }
    private void OnDisable()
    {
        SceneManager.sceneLoaded -= OnSceneChanged;
    }


    public void StartGame()
    {
        // Read choosen map from PlayerPrefs
        if (PlayerPrefs.HasKey(keyMap))
        {
            // Load chosen key
            SceneManager.LoadScene(gameMap[PlayerPrefs.GetInt(keyMap)]);
        }
        else
        {
            // Add this key for the first time:  1 == GAMEPLAY_1
            PlayerPrefs.SetInt(keyMap, 0);
            SceneManager.LoadScene(gameMap[(int) MAP.GAMEPLAY_1]);
        } 
    }
    public void OnSceneChanged(Scene scene,LoadSceneMode mode) {
        if(scene.name.Contains("GamePlay"))
        {
           InstantiateNecessaryObjects();
            
           DisableObjectsOnStart();
           healthSystem = new HealthSystem();
        }
        currentScene = scene;
    }


    private void InstantiateNecessaryObjects()
    {
        // Instantiate Player Object with it's prefab
        Instantiate(playerPrefabToSpawn);

    }

    private void DisableObjectsOnStart()
    {
        // Disable GameOver Screen when first GamePlay Scene gets loaded
        GameObject gameObject = GameObject.FindGameObjectWithTag("GameOver");
        if (gameObject != null)
        {
            gameOverScreen = gameObject.GetComponent<GameOverScreen>();
            gameObject.SetActive(false);
        }
    }
    public void NotifyGameIsOver()
    {
        GameObject joystick = GameObject.Find("Fixed Joystick");
        GameObject fireBtn = GameObject.Find("Fire");
        GameObject score = GameObject.Find("Text_Score");
        GameObject move = GameObject.Find("Move");
       
       
        Destroy(joystick);
        Destroy(fireBtn);
        Destroy(score);
        Destroy(move);
        print("Joystick destroyed");
        gameOverScreen.GameOver();
    }
    public void NotifyEnemyIsDead(string tag, Transform killedPosition)
    {
       if (enemyWatcher != null)
        {

            enemyWatcher(tag,killedPosition);  
        }
        

        // Add to the Dictionary
    }
    public void NotifyScoreIsChanged(int score)
    {
        if (scoreWatcher != null)
        { 
            scoreWatcher(score);
        }
    }

    public float OnDamage(float damage)
    {
        print("OnDamage + " + healthSystem);
        float remainedHealth = 0f;
        if (healthSystem != null)
        {
            remainedHealth = healthSystem.Damage(damage);
            print("OnDamage + " + remainedHealth);
            if (remainedHealth <= 0)
            {
                NotifyGameIsOver();
            }

            
        }

        return remainedHealth;
    }

    public void NotifyTrophyHasTriggered(string trophy)
    {
        if (trophyWatcher != null)
        {            
            trophyWatcher(trophy);
        }
    }
}
