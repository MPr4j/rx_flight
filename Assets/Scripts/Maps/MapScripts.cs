using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

public class MapScripts : MonoBehaviour
{
    [SerializeField] private Text collectedStarText;
    [SerializeField] private Image collectedStarIcon;

    [SerializeField] private Text seenAdsText;
    [SerializeField] private Image adsIcon;

    private int requiredStar = 100;
    private int requiredAds = 3;
    
    private void Awake()
    {
       
    }
    // Start is called before the first frame update
    void Start()
    {
        int highScore = PlayerPrefs.GetInt("HighScore", 0);
        if (highScore >= 100)
        {
            collectedStarText.enabled = false;
            collectedStarIcon.enabled = false;
        }
        else
        {
            if (collectedStarText != null)
            {
                collectedStarText.text = String.Format(" {0} / {1} ", highScore, requiredStar);
            }
        }

        int nebuloSeenAds = PlayerPrefs.GetInt("Nebuloriax", 0);
        if (nebuloSeenAds == 3)
        {
            adsIcon.enabled = false;
            seenAdsText.enabled = false;
        }
        else
        {

            seenAdsText.text = String.Format(" {0} / {1} ", nebuloSeenAds, requiredAds);
        }

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
