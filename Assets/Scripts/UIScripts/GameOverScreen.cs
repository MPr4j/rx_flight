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
    public void OnDisable()
    {
        GameManager.gameIsOver -= GameOver;
    }
    public void OnDestroy()
    {
        GameManager.gameIsOver -= GameOver;
    }
    // Subscriber function
    public void GameOver()
    {
        gameObject.SetActive(true);
    }
    public void RestartButton()
    {
        Time.timeScale = 1.0f;
        SceneManager.LoadScene(GameManager.GetInstance().currentScene.name);
    }
    public void MainButton()
    {
        Time.timeScale = 1.0f;
        SceneManager.LoadScene("MainMenu");
    }

}
