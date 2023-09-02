using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class JoystickHandler : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    // Start is called before the first frame update
    [SerializeField]
    private GameObject playerObj;
    private Rigidbody2D playerRigidBody2D;
    private bool isTouhcingJoystick = false;
    private Vector2 moveDirection = Vector2.up;
    [SerializeField]
    private Joystick joystick;
    public float moveSpeed = 20f;
    public float rotSpeed = 100f;

    void Start()
    {
        if (playerObj != null)
        {
            playerRigidBody2D = playerObj.GetComponent<Rigidbody2D>();
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (!isTouhcingJoystick)
        {
            if (playerRigidBody2D != null)
            {
                 playerRigidBody2D.velocity = Vector3.zero;
            }

        }
        else
        {
            RotateUserWhenJoystickTouched();
        }
    }
    public void RotateUserWhenJoystickTouched()
    {

        if (joystick != null)
        {
            if (isTouhcingJoystick)
            {
                float horizontal = joystick.Horizontal;
                float vertical = joystick.Vertical;
                float zAngele = Mathf.Atan2(horizontal, vertical) * Mathf.Rad2Deg;
                Quaternion disiredRot = Quaternion.Euler(0, 0, -zAngele);
                playerObj.transform.rotation = Quaternion.RotateTowards(playerObj.transform.rotation, disiredRot, rotSpeed * Time.deltaTime);

                moveDirection = Quaternion.Euler(0, 0, -zAngele) * Vector2.up;
                playerRigidBody2D.velocity = moveDirection * moveSpeed * Time.deltaTime;
            }

        }
    }
    public void OnPointerUp(PointerEventData eventData)
    {
        isTouhcingJoystick = false;
        playerRigidBody2D.velocity = Vector2.zero;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        Vector2 touchPosition = eventData.position;
        if (RectTransformUtility.RectangleContainsScreenPoint(
            GetComponent<RectTransform>(),
            touchPosition,
            Camera.main
            ))
        {
            isTouhcingJoystick = true;
        }
    }
}
