using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class AudioManager : MonoBehaviour
{
    public static AudioManager instance;

    // Reference to the AudioSource in your GameManager
    public AudioSource gameManagerAudioSource;

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

        SceneManager.sceneLoaded += OnSceneLoaded; // Subscribe to scene changes
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
      

        // Check the scene name and change the audio as needed
        switch (scene.name)
        {
            case "MainMenu":
                // Change the audio for the MainMenu scene
                gameManagerAudioSource.clip = yourMainMenuAudioClip;
                gameManagerAudioSource.Play();
                break;
            case "GamePlay_1":
                // Change the audio for the GamePlay_1 scene
                gameManagerAudioSource.clip = yourGamePlayAudioClip;
                gameManagerAudioSource.Play();
                break;
            case "GamePlay_2":
                // Change the audio for the GamePlay_2 scene
                gameManagerAudioSource.clip = yourGamePlayAudioClip;
                gameManagerAudioSource.Play();
                break;
            case "GamePlay_3":
                // Change the audio for the GamePlay_3 scene
                gameManagerAudioSource.clip = yourGamePlayAudioClip;
                gameManagerAudioSource.Play();
                break;

                
        }
        // Add more conditions for other scenes as needed
    }

    // Define your audio clips here
    public AudioClip yourMainMenuAudioClip;
    public AudioClip yourGamePlayAudioClip;
}
