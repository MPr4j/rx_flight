using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class PlanetUIButton : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{

    private Animator animator;

    public void OnPointerDown(PointerEventData eventData)
    {
        animator.SetBool("Selected", true);
        int selectedMap = int.Parse(UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject.name);
        GameManager.SelectedMap = selectedMap;
        PlayerPrefs.SetInt(GameManager.keyMap, selectedMap);

    }
    

    public void OnPointerUp(PointerEventData eventData)
    {

    }

    public void StopAnimation() 
    {
        animator.SetBool("Selected", false);
    }

    void Awake()
    {
        animator = GetComponent<Animator>();
        
    }
}
