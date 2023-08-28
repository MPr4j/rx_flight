using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UiGameController : MonoBehaviour
{
    public GameOverScreen gameOverScreen;
    int maxKill;
    public void Start()
    {
        GameManager.gameIsOver += GameOver;
    }
    public void GameOver()
    {
        gameOverScreen.SetUp(maxKill);
    }
}