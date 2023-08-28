using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public delegate void GameIsOver();
    public static event GameIsOver gameIsOver;

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
            
        }
    }

    public static GameManager GetInstance()
    {
        return Instance;
    }

    // Start is called before the first frame update
    void Start()
    {
    }



    public void NotifyGameIsOver()
    {
        gameIsOver();
    }
}
