using UnityEngine;
using UnityEngine.InputSystem;
using Photon.Pun;

[RequireComponent(typeof(Rigidbody))]
public class Dev_SimplePlayerController : MonoBehaviourPunCallbacks
{
    public Camera controlledCamera = null;
    public float walkSpeed = 2f;
    public float lookSensitivity = 0.2f;

    Rigidbody rb = null;

    Keyboard kb = Keyboard.current;
    Mouse m = Mouse.current;

    Vector3 moveDelta;

    public override void OnEnable()
    {
        rb = GetComponent<Rigidbody>();
        print(PhotonNetwork.ConnectUsingSettings());
    }

    private void Update()
    {
        //authority
        {
            moveDelta = new Vector3()
            {
                x = kb.dKey.isPressed ? walkSpeed : kb.aKey.isPressed ? -walkSpeed : 0,
                z = kb.wKey.isPressed ? walkSpeed : kb.sKey.isPressed ? -walkSpeed : 0,
            };

            //controlledCamera.transform.position = transform.position;
        }
    }

    private void FixedUpdate()
    {
        if (moveDelta == Vector3.zero) return;

        rb.AddForce(moveDelta, ForceMode.VelocityChange);

        moveDelta = Vector3.zero;
    }
}