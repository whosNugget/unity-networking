using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Animator))]
public class Dev_AnimationManager : MonoBehaviourPun
{
    #region Serialized fields
    [SerializeField] float turnDampTime = 0.25f;
    #endregion

    #region Private fields
    private Animator animator = null;

    private InputControls controls = null;

    float deltaInputX = 0;
    float deltaInputZ = 0;
    bool requestJump = false; 
    #endregion

    #region Monobehavior callbacks
    private void Start()
    {
        animator = GetComponent<Animator>();
        controls = new InputControls();
        controls.Enable();

        controls.DevDefault.Horizontal.performed += ctx => { deltaInputX = ctx.ReadValue<float>(); };
        controls.DevDefault.Horizontal .canceled +=  _  => { deltaInputX = 0f; };
        controls.DevDefault.Vertical  .performed += ctx => { deltaInputZ = ctx.ReadValue<float>(); };
        controls.DevDefault.Vertical   .canceled +=  _  => { deltaInputZ = 0f; };
        controls.DevDefault.Jump      .performed += ctx => { requestJump = true; };
        controls.DevDefault.Jump       .canceled +=  _  => { requestJump = false; };
    }
    private void Update()
    {
        if (photonView.IsMine && PhotonNetwork.IsConnected)
        {
            if (animator)
            {
                AnimatorStateInfo stateInfo = animator.GetCurrentAnimatorStateInfo(0);

                if (stateInfo.IsName("Base Layer.Run"))
                    if (requestJump)
                    {
                        animator.SetTrigger("Jump");
                        requestJump = false;
                    }

                deltaInputZ = Mathf.Max(0, deltaInputZ);
                animator.SetFloat("Speed", deltaInputX * deltaInputX + deltaInputZ * deltaInputZ);

                animator.SetFloat("Direction", deltaInputX, turnDampTime, Time.deltaTime);
            }
        }
    }
    #endregion

    #region Input events
    #endregion
}
