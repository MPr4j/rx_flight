using UnityEngine;

public class CrossPlatformVibration : MonoBehaviour
{
    // Start is called before the first frame update
    public static void Vibrate(long milliseconds)
    {
#if UNITY_ANDROID
        // Android specific code to vibrate
        AndroidVibration.VibrateAndroid(milliseconds);
#endif
    }
  
}
