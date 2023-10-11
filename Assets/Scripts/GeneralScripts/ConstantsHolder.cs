using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConstantsHolder
{
    public static void RetreiveConstantsFromPlayerPrefs()
    {
        Dictionary<string,bool> tempValues = new Dictionary<string,bool>();
        foreach (string constant in GameManager.constants.Keys)
        {
            bool isExist = PlayerPrefs.HasKey(constant);
            if (isExist)
            {
                int value = PlayerPrefs.GetInt(constant);
                Debug.Log("Constant " +  constant + " value " + value);
                tempValues.Add(constant,value == 0 ? false : true);
            }
        }
        foreach(string constant in tempValues.Keys)
        {
            GameManager.constants.Remove(constant);
            GameManager.constants.Add(constant, tempValues[constant]);
        }
    }
}
