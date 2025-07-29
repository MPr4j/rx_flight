using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class ScoreManeger : MonoBehaviour
{
    public static ScoreManeger instance;

    [SerializeField]
    private Text ScoreText;
    // Start is called before the first frame update
    int totalScore = 0;
    private void Awake()
    {
        instance = this;
        GameManager.gameIsOver += GameOver;
        GameManager.scoreWatcher += ScoreWatcher;
    }
    public void GameOver()
    {
    }
    void Start()
    {
        totalScore = PlayerPrefs.GetInt("HighScore");
        ScoreText.text = totalScore.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
   
    public void ScoreWatcher(int score)
    {
        print("Set score to the score text " + score);
        if (ScoreText != null)
        {
            ScoreText.text = score.ToString();
        }
    }
    
}
