using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StateButtonsHandler : MonoBehaviour
{
    public string buttonKey; // The key of button to store it's state in PlayerPrefs
    // Start is called before the first frame update

    [SerializeField]
    private Sprite activeState;
    [SerializeField]
    private Sprite disactiveState;

    private bool isActive = false;

    private Image btnImage;
    public void Awake()
    {
        if (PlayerPrefs.HasKey(buttonKey))
        {
            isActive = PlayerPrefs.GetInt(buttonKey) == 1 ? true : false;
        }
        else
        {
            PlayerPrefs.SetInt(buttonKey, 1);
            isActive = true;
        }
    }
    void Start()
    {
        btnImage = GetComponent<Image>();
        if (isActive)
            btnImage.sprite = activeState;
        else btnImage.sprite = disactiveState;

    }

    public void ChangeState()
    {
        if (isActive)
        {
            isActive = false;
            PlayerPrefs.SetInt(buttonKey, 0);
            btnImage.sprite = disactiveState;
        }
        else
        {
            isActive = true;
            btnImage.sprite = activeState;
            PlayerPrefs.SetInt(buttonKey, 1);
        }
        
    }


}
