using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public delegate void GameIsOver();
    public static event GameIsOver gameIsOver;

    private GameOverScreen gameOverScreen;

    public static int SelectedMap = 0;

    public enum MAP
    {
        GAMEPLAY_1,
        GAMEPLAY_2,
        GAMEPLAY_3,
    }

    public static Dictionary<int, string> gameMap = new Dictionary<int, string>();

    public const string keyMap = "MAP";
    public static bool isVibrationEnabled = false;

    [SerializeField]
    private GameObject playerPrefabToSpawn;
    private static GameManager Instance
    {
        get;
        set;
    }


    // Awake function that is called from unity
    private void Awake()
    {

      
        if (Instance == null)
        {
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

        if (!isKeyAlive(Constants.KeyVibration))
        {
            EnableVibration();
        }
        else
        {
            isVibrationEnabled = GetUserBooleanPref(Constants.KeyVibration) == 0 ? false : true;
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
   
    public void EnableVibration()
    {
        isVibrationEnabled = true;
        SaveUserBooleanPrefs(Constants.KeyVibration, 1);
    }
    public void DisableVibration()
    {
        isVibrationEnabled = false;
        SaveUserBooleanPrefs(Constants.KeyVibration, 0);
    }
    public static GameManager GetInstance()
    {
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
        }
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
}
