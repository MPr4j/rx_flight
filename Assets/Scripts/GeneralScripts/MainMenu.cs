using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{

    public void ExitBotten()
    {
        Application.Quit();
        Debug.Log("Game is Exit");
    }
    public void StartGame()
    {
        SceneManager.LoadScene("GamePlay");
    }
    public void GameMap()
    {
        SceneManager.LoadScene("Map");
    }
    
}
