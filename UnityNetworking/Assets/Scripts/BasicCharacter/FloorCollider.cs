using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Collider), typeof(Rigidbody))]
public class FloorCollider : MonoBehaviour
{
    public interface IFloorColliderCallbacks
    {
        void LandOnGround();
        void JumpOffGround();
    }

    public event Action ColliderEnterGrounded;
    public event Action ColliderExitGrounded;

    private bool isGrounded = true;
    public bool IsGrounded { get => isGrounded; }

    new Collider collider = null;
    Rigidbody rb = null;

    private void Awake()
    {
        collider = GetComponent<Collider>();
        rb = GetComponent<Rigidbody>();
     
        collider.isTrigger = true;
        rb.isKinematic = true;
        rb.useGravity = false;
    }

    private void OnTriggerEnter(Collider other)
    {
		if (other.gameObject.layer == gameObject.layer) return;

        isGrounded = true;
        ColliderEnterGrounded?.Invoke();
    }

    private void OnTriggerExit(Collider other)
    {
		if (other.gameObject.layer == gameObject.layer) return;

        isGrounded = false;
        ColliderExitGrounded?.Invoke();
    }

    public void SetCallbacks(IFloorColliderCallbacks instance)
    {
        ColliderEnterGrounded += instance.LandOnGround;
        ColliderExitGrounded += instance.JumpOffGround;
    }
}