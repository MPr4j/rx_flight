

public class Constants
{
    public static string KeyVibration = "k_vibration";
    public static string KeySound = "k_sound";
    public static string KeyMusic = "k_music";
    public static string KeyNotification = "k_notification";

    public static void Init()
    {
        GameManager.constants.Add(KeyVibration, false);
        GameManager.constants.Add(KeySound, false);
        GameManager.constants.Add(KeyMusic, false);
        GameManager.constants.Add(KeyNotification, false);
    }

}
