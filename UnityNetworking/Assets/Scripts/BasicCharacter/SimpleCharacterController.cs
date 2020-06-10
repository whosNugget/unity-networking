using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.InputSystem;

[RequireComponent(typeof(Rigidbody))]
public class SimpleCharacterController : MonoBehaviour, InputControls.IDevDefaultActions, FloorCollider.IFloorColliderCallbacks
{
	#region OdinInspector methods
#pragma warning disable IDE0051 // Prevent unused private members warning. Justification: Warnings understood. These methods will be called by Odin Inspector via Reflection only within the Unity Inspector
#if UNITY_EDITOR //These methods only need to be called within the Unity Editor
	bool ValidateSpeedLessThanMaxHorizontalMovementVelocity(float speed) => speed <= maxHorizontalMovementVelocity;
	bool ValidateMaxVelocityGreaterThanSpeed(float maxVelocity) => maxVelocity >= speed;
	bool ValidateAerialDragDoesNotExceedObsceneValues(float aerialDrag) => aerialDrag <= 25f;
	bool ValidateJumpImpulseForceDontExceedObsceneValues(float jumpForce) => jumpForce <= 65f;
#endif
#pragma warning restore IDE0051 // Permit unused private members warning
	#endregion

	#region Serialized fields
	[Tooltip("First person camera to control the roation of")]
	[BoxGroup("Controller Settings"), FoldoutGroup("Controller Settings/Scene Objects"), SceneObjectsOnly]
	[SerializeField] Camera playerCamera = null;

	[Tooltip("Camera target position transform. Must be a scene object")]
	[BoxGroup("Controller Settings"), FoldoutGroup("Controller Settings/Scene Objects"), SceneObjectsOnly]
	[SerializeField] Transform cameraTarget = null;

	[Tooltip("Collider used to determine when the player is on the ground")]
	[BoxGroup("Controller Settings"), FoldoutGroup("Controller Settings/Scene Objects"), SceneObjectsOnly]
	[SerializeField] FloorCollider groundDetectionCollider = null;

	[Tooltip("Camera look sensitivity")]
	[BoxGroup("Controller Settings"), FoldoutGroup("Controller Settings/Forces"), MinValue(0.01f), MaxValue(5f)]
	[SerializeField] float lookSensitivity = 0.5f;

	[Tooltip("Speed applied to each independent direction based on control input. Should be less than Max Horizontal Movement Velocity")]
	[BoxGroup("Controller Settings"), FoldoutGroup("Controller Settings/Forces"), MinValue(0.01f), ValidateInput("ValidateSpeedLessThanMaxHorizontalMovementVelocity", DefaultMessage = "Speed should not be set to a value greater than Max Velocity")]
	[SerializeField] float speed = 2.5f;

	[Tooltip("Maximum velocity attainable in any direction by the attached rigidbody. Should be greater than Speed")]
	[BoxGroup("Controller Settings"), FoldoutGroup("Controller Settings/Forces"), MinValue(0.01f), ValidateInput("ValidateMaxVelocityGreaterThanSpeed", DefaultMessage = "Max Velocity should not be set to a value less than Speed")]
	[SerializeField] float maxHorizontalMovementVelocity = 2.5f;

	[Tooltip("Drag the attached rigidbody will be set to when not planted on the ground. Used to simulate smoother aerial movement")]
	[BoxGroup("Controller Settings"), FoldoutGroup("Controller Settings/Forces"), MinValue(0f), ValidateInput("ValidateAerialDragDoesNotExceedObsceneValues", DefaultMessage = "Aerial Velocity should be a very small value for smooth movement when in air. Higher values will produce unrealistic properties", MessageType = InfoMessageType.Warning)]
	[SerializeField] float aerialDrag = .02f;

	[Tooltip("Impulse force applied to the body when a jump event occurs")]
	[BoxGroup("Controller Settings"), FoldoutGroup("Controller Settings/Forces"), MinValue(0), ValidateInput("ValidateJumpImpulseForceDontExceedObsceneValues", DefaultMessage = "Jump impulse force should not exceed vast values, as the height reached while jumping could be too large to unserstand", MessageType = InfoMessageType.Warning)]
	[SerializeField] float jumpImpulseForce = 5f;
	#endregion

	#region Private fields
	Rigidbody rb = null;
	float rbDrag = 0f;
	bool jump = false;

	InputControls controls = null;

	Vector3 moveDelta = Vector3.zero;
	Vector2 lookDelta = Vector2.zero;
	#endregion

	#region Monobehavior callbacks
	private void Awake()
	{
		rb = GetComponent<Rigidbody>();
		rbDrag = rb.drag;

		controls = new InputControls();
		controls.DevDefault.SetCallbacks(this);

		groundDetectionCollider.SetCallbacks(this);
	}
	private void OnEnable()
	{
		controls.Enable();
	}
	private void OnDisable()
	{
		controls.Disable();
	}
	private void Update()
	{
		MoveCamera();
		RotateCamera();
		RotatePlayer();
	}
	private void FixedUpdate()
	{
		MovePlayer();
	}
	#endregion

	#region Event callbacks 
	public void LandOnGround() => rb.drag = rbDrag;
	public void JumpOffGround() => rb.drag = aerialDrag;

	//Input callbacks
	public void OnHorizontal(InputAction.CallbackContext context) => moveDelta.x = context.ReadValue<float>();
	public void OnVertical(InputAction.CallbackContext context) => moveDelta.z = context.ReadValue<float>();
	public void OnLook(InputAction.CallbackContext context) => lookDelta = context.performed ? context.ReadValue<Vector2>() * lookSensitivity : Vector2.zero;
	public void OnJump(InputAction.CallbackContext context) => jump = context.performed;
	public void OnFire(InputAction.CallbackContext context) => print("pew");
	public void OnSprint(InputAction.CallbackContext context) => print("no sprint here");
	#endregion

	#region Coroutines
	#endregion

	#region Private methods
	void RotateCamera()
	{
		float pitch = -lookDelta.y + playerCamera.transform.rotation.eulerAngles.x;
		float yaw = lookDelta.x + playerCamera.transform.rotation.eulerAngles.y;
		pitch -= (pitch > 180f) ? 360f : 0f; //Returned angle is between 0-360... move it between -180 to 180
		pitch = Mathf.Clamp(pitch, -85f, 85f);

		playerCamera.transform.rotation = Quaternion.Euler(pitch, yaw, 0f);
	}
	void MoveCamera() => playerCamera.transform.position = cameraTarget.position;
	void RotatePlayer() => transform.rotation = Quaternion.Euler(0, playerCamera.transform.rotation.eulerAngles.y, 0);
	void MovePlayer()
	{
		if (groundDetectionCollider.IsGrounded) //Only apply movement forces when the player is on the ground
		{
			if (jump) rb.AddRelativeForce(Vector3.up * jumpImpulseForce, ForceMode.Impulse);
			rb.AddRelativeForce(moveDelta.normalized * speed, ForceMode.VelocityChange);

			//Clamp the velocity in the X and Z directions, but preserve the Y velocity (to prevent odd behavior when jumping or falling)
			Vector3 clampedVelocity = new Vector3 { x = rb.velocity.x, z = rb.velocity.z };
			clampedVelocity = Vector3.ClampMagnitude(clampedVelocity, maxHorizontalMovementVelocity);
			clampedVelocity.y = rb.velocity.y;
			rb.velocity = clampedVelocity;
		}
	}
	#endregion

	#region Public Methods
	#endregion
}
