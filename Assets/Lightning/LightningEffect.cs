using UnityEngine;
using System.Collections;

public class LightningEffect : MonoBehaviour
{
   /* [Header("Prefabs")]
    public GameObject lineRendererPrefab;
    public GameObject lightRendererPrefab;

    [Header("Config")]
    public int lightnings;

    private Transform playerTransform; // Reference to the player's transform

    private LightningBolt lightningBolt;

    void Start()
    {
        // Find and store the player's transform
        GameObject player = GameObject.FindGameObjectWithTag("Player");
        if (player != null)
        {
            playerTransform = player.transform;
        }

        // Initialize the lightning bolt
        lightningBolt = new LightningBolt(lineRendererPrefab, lightRendererPrefab);
    }

    void Update()
    {
        if (playerTransform != null)
        {
            // Get the player's position
            Vector3 playerPosition = playerTransform.position;

            // Calculate a distant point in the player's direction
            Vector2 distantPoint = playerPosition + playerTransform.up * 10f; // Adjust the distance as needed

            // Draw the lightning between playerPosition and distantPoint
            lightningBolt.DrawLightning(playerPosition, distantPoint);
        }
    }*/
}