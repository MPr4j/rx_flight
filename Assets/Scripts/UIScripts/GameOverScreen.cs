using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Assertions;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameOverScreen : MonoBehaviour
{
    public Text PointText;
    public void Start()
    {
        GameManager.gameIsOver += GameOver;
    }
    // Subscriber function
    public void GameOver()
    {
        gameObject.SetActive(true);
    }
    public void RestartButton()
    {
        SceneManager.LoadScene(GameManager.GetInstance().currentScene.name);
    }
    public void MainButton()
    {
        SceneManager.LoadScene("MainMenu");
    }
}
