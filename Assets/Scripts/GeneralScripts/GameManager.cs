using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public delegate void GameIsOver();
    public static event GameIsOver gameIsOver;

    private GameOverScreen gameOverScreen;

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

    public void OnSceneChanged(Scene scene,LoadSceneMode mode) {
        if(scene.name == "GamePlay_1")
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
