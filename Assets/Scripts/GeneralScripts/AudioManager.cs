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
                gameManagerAudioSource.Stop();
                gameManagerAudioSource.clip = yourMainMenuAudioClip;    
                gameManagerAudioSource.Play();
                break;
            case "GamePlay_1":
                // Change the audio for the GamePlay_1 scene
                gameManagerAudioSource.Stop();
                gameManagerAudioSource.clip = yourGamePlay1AudioClip;
                gameManagerAudioSource.Play();
                break;
            case "GamePlay_2":
                // Change the audio for the GamePlay_2 scene
                gameManagerAudioSource.Stop();
                gameManagerAudioSource.clip = yourGamePlay2AudioClip;
                gameManagerAudioSource.Play();
                break;
            case "GamePlay_3":
                // Change the audio for the GamePlay_3 scene
                gameManagerAudioSource.Stop();
                gameManagerAudioSource.clip = yourGamePlay3AudioClip;
                gameManagerAudioSource.Play();
                break;

                
        }
        // Add more conditions for other scenes as needed
    }

}
