using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class AudioManager : MonoBehaviour
{
    public static AudioManager instance;


    // Define your audio clips here
    public AudioClip yourMainMenuAudioClip;
    public AudioClip yourGamePlay1AudioClip;
    public AudioClip yourGamePlay2AudioClip;
    public AudioClip yourGamePlay3AudioClip;
    public AudioClip gameOverAudioClip;
    // Reference to the AudioSource in your GameManager
    private AudioSource audioSource;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
        GameManager.gameIsOver += GameIsOver;
        SceneManager.sceneLoaded += OnSceneLoaded; // Subscribe to scene changes
    }
    private void Start()
    {
        audioSource = GetComponent<AudioSource>();
    }
    public void GameIsOver()
    {
        
        audioSource.clip = gameOverAudioClip;
        audioSource.loop = false;
        audioSource.Play();

    }
    public static AudioManager GetInstance()
    {
        return instance;
    }
    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
      ConstantsHolder.RetreiveConstantsFromPlayerPrefs();
      PlayRelevantAudio(scene);
        // Add more conditions for other scenes as needed
    }
    private void PlayRelevantAudio(Scene scene)
    {
        if (GameManager.constants[Constants.KeyMusic])
        {

            // Check the scene name and change the audio as needed
            switch (scene.name)
            {
                case "MainMenu":
                    // Change the audio for the MainMenu scene
                    audioSource.clip = yourMainMenuAudioClip;
                    audioSource.loop = true;
                    audioSource.Play();
                    break;
                case "GamePlay_1":
                    // Change the audio for the GamePlay_1 scene
                    audioSource.clip = yourGamePlay1AudioClip;
                    audioSource.loop = true;
                    audioSource.Play();
                    break;
                case "GamePlay_2":
                    // Change the audio for the GamePlay_2 scene
                    audioSource.clip = yourGamePlay2AudioClip;
                    audioSource.loop = true;
                    audioSource.Play();
                    break;
                case "GamePlay_3":
                    // Change the audio for the GamePlay_3 scene
                    audioSource.clip = yourGamePlay3AudioClip;
                    audioSource.loop = true;
                    audioSource.Play();
                    break;


            }
        }
    }

    public void SettingIsChanged()
    {
        if (!GameManager.constants[Constants.KeyMusic])
        {
            audioSource.Stop();
        }
        else
        {
            PlayRelevantAudio(GameManager.GetInstance().currentScene);
        }
        
    }

}
