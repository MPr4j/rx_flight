using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public delegate void GameIsOver();
    public static event GameIsOver gameIsOver;

    private GameOverScreen gameOverScreen;

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
        print("Scene change");
        if(scene.name == "GamePlay")
        {
            
            GameObject gameObject = GameObject.FindGameObjectWithTag("GameOver");
            if (gameObject != null)
            {
                gameOverScreen = gameObject.GetComponent<GameOverScreen>();
                gameObject.SetActive(false);
            }
            else
            {
                print("Game object is null");
            }
        }
        Grid grid = new Grid();
        
    }



    public void NotifyGameIsOver()
    {
        gameOverScreen.GameOver();
    }
}
