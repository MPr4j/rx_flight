using UnityEngine;

public class AndroidVibration 
{
    public static void VibrateAndroid(long milliseconds)
    {
        if (Application.platform == RuntimePlatform.Android)
        {
            // Check if the Android device supports vibration
            if (SystemInfo.supportsVibration)
            {
                // Vibrate the device for the specified duration
                Handheld.Vibrate();
                
            }
            else
            {
                Debug.LogWarning("Vibration is not supported on this Android device.");
            }
        }
    }
}
