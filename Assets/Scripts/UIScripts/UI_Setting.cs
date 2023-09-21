using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UI_Setting : MonoBehaviour
{

    public void PuseGame()
    {
        Time.timeScale = 0;
    }
    public void ResumeGame()
    {
        Time.timeScale = 1;
    }
    public void Resart()
    {
        
        Time.timeScale = 1;
        string CurrentSceneName = GameManager.GetInstance().currentScene.name;
        SceneManager.LoadScene(CurrentSceneName);

    }
    public void BackMenu()
    {
        SceneManager.LoadScene("MainMenu");
    }
}
