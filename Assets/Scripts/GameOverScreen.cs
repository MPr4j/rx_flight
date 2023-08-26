using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameOverScreen : MonoBehaviour
{
    public Text PointText;
    public void SetUp(int score)
    {
        gameObject.SetActive(true);
        PointText.text = score.ToString() + ("POINTS");
    }
    public void RestartBotten()
    {
        SceneManager.LoadScene("GamePlay");
    }
    public void MainBotten()
    {
        SceneManager.LoadScene("MainMenu");
    }
}
