using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class ScoreManeger : MonoBehaviour
{
    public static ScoreManeger instance;

    public Text ScoreText;
    public Text HeighScoreText;
    // Start is called before the first frame update
    int score = 0;
    int heighScore = 0;
    private void Awake()
    {
        instance = this;
    }
    void Start()
    {
        heighScore = PlayerPrefs.GetInt("HeighScore", 0);
        ScoreText.text=score.ToString()+" Points";
        HeighScoreText.text = "Heigh Score: " + heighScore.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void AddPoint()
    {
        score++;
        ScoreText.text = score.ToString() + " Points";
        if (heighScore < score)
        {
            PlayerPrefs.SetInt("HeighScore", score);
        }

    }
    
}
