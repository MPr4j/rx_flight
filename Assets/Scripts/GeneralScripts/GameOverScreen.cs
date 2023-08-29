using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameOverScreen : MonoBehaviour
{
    public Text PointText;

    public void Start()
    {
        GameManager.gameIsOver += GameOver;
        print("Subscribed to the game manager");
    }
    public void GameOver()
    {
        SetUp(100);
    }

    public void SetUp(int score)
    {
        gameObject.SetActive(true);
        PointText.text = score.ToString() + (" POINTS");
    }
    public void RestartButton()
    {
        SceneManager.LoadScene("GamePlay");
    }
    public void MainButton()
    {
        SceneManager.LoadScene("MainMenu");
    }
}
