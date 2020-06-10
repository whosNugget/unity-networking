using Sirenix.OdinInspector;
using UnityEngine;
using Photon.Pun;
using UnityEngine.InputSystem;
using System.Collections;

/// <summary>
/// Controls a character's movement and animations using physics as the motion medium. Supports IK for the Legs/Feet and Arms/Hands, 
/// and networks the position, rotation, animations and data using Photon.Pun
/// </summary>
[RequireComponent(typeof(Animator), typeof(Collider), typeof(CharacterController))]
public class RootCharacterController : MonoBehaviourPunCallbacks, InputControls.IDevDefaultActions
{
	#region PUN Static Fields
	public static GameObject localPlayerInstance;
	#endregion

	#region OdinInspector methods
	#endregion

	#region Properties
	#endregion

	#region Serialized fields
	[Tooltip("By default, this controller will target the main camera in the scene. If you want to specify a camera to control manually, check this option and provide the inspector with a camera in the scene")]
	[BoxGroup("Character Controller"), FoldoutGroup("Character Controller/Camera")]
	[SerializeField] bool targetCustomCamera = false;

	[Tooltip("The custom camera to target. If TargetCustomCamera is true but no camera is specified, this class will fall back to the scene's main camera")]
	[BoxGroup("Character Controller"), FoldoutGroup("Character Controller/Camera"), SceneObjectsOnly, ShowIf("targetCustomCamera")]
	[SerializeField] Camera targetCamera = null;

	[Tooltip("The specified transform positon the controlled camera will sync with")]
	[BoxGroup("Character Controller"), FoldoutGroup("Character Controller/Camera"), SceneObjectsOnly]
	[SerializeField] Transform targetTransform = null;

	[Tooltip("Look sensitivity the mouse delta will be multiplied with when rotating the camera")]
	[BoxGroup("Character Controller"), FoldoutGroup("Character Controller/Camera"), Range(0.01f, 5f)]
	[SerializeField] float lookSensitivity = 0f;

	//[Tooltip("Drag the attached rigidbody will use when the character is moving through the air. High drag values can cause extended or permanent suspension in air")]
	//[BoxGroup("Character Controller"), FoldoutGroup("Character Controller/Forces"), Range(0, 500)]
	//[SerializeField] float aerialDrag = 0f;

	[Tooltip("Length of time the movement values will take to return to zero from their largest value. Adds a damping effect to animations when releasing input keys")]
	[BoxGroup("Character Controller"), FoldoutGroup("Character Controller/Animations"), Range(0.1f, 10f)]
	[SerializeField] float movementDampTime = 0f;

	[Tooltip("Distance check used when searching for walkable IK targets")]
	[BoxGroup("Character Controller"), FoldoutGroup("Character Controller/Animations"), Range(0, 1)]
	[SerializeField] float distanceToGround = 0f;
	#endregion

	#region Private fields
	Animator animator = null;
	CharacterController controller = null;
	//Rigidbody rb = null;
	CharacterAnimationManager animManager;

	InputControls controls = null;

	float rbGroundedDrag = 0f;

	bool sprint = false;
	Vector3 moveDelta = Vector3.zero;
	Vector2 lookDelta = Vector2.zero;

	int forwardHash = 0;
	int lateralHash = 0;
	int sprintHash = 0;

	Coroutine horizontalPull = null;
	Coroutine horizontalPush = null;
	Coroutine verticalPull = null;
	Coroutine verticalPush = null;
	#endregion

	#region Monobehavior callbacks
	private void Awake()
	{
		if (photonView.IsMine)
		{
			localPlayerInstance = gameObject;

			if (!targetCustomCamera) targetCamera = Camera.main;
			else if (targetCamera is null)
			{
				Debug.LogWarning($"{name}:{nameof(RootCharacterController)}.{nameof(targetCamera)} was null when targeting a custom camera. Main camera was used instead. Make sure to set a custom camera in the inspector when targeting a custom camera");
				targetCamera = Camera.main;
			}

			if (!TryGetComponent(out animator) || !TryGetComponent(out controller))
				Debug.LogError($"{name}:{nameof(RootCharacterController)} could not get components of type [{nameof(Animator)}, {nameof(Rigidbody)}]; Ensure this gameobject has both components in the inspector, or that they are being created and added together");

			controls = new InputControls();
			controls.DevDefault.SetCallbacks(this);
			controls.Enable();

			animManager = new CharacterAnimationManager(ref animator);

			//rbGroundedDrag = rb.drag;
		}
		//else rb.isKinematic = true; //Photon will serialize the rigidbody and transform

		forwardHash = Animator.StringToHash("Forward");
		lateralHash = Animator.StringToHash("Lateral");
		sprintHash = Animator.StringToHash("Sprint");
	}

	public override void OnEnable() => controls?.Enable();
	public override void OnDisable() => controls?.Disable();

	private void Update()
	{
		if (photonView.IsMine && PhotonNetwork.IsConnected) //rely on Photon to synchronize character visuals exclusively
		{
			//UpdateDrag();
			UpdateCameraPosition();
			UpdateCameraRotation();
			UpdateCharacterRotation();
			UpdateAnimator();
		}
	}

	private void OnAnimatorIK(int layerIndex)
	{
		//do foot and arm IK on all instances
		if (animator)
		{
			animator.SetIKPositionWeight(AvatarIKGoal.LeftFoot, 1);
			animator.SetIKRotationWeight(AvatarIKGoal.LeftFoot, 1);
			animator.SetIKPositionWeight(AvatarIKGoal.RightFoot, 1);
			animator.SetIKRotationWeight(AvatarIKGoal.RightFoot, 1);

			Ray ikRay = new Ray(animator.GetIKPosition(AvatarIKGoal.LeftFoot) + Vector3.up, Vector3.down);

			//Left foot
			if (Physics.Raycast(ikRay, out RaycastHit hit, distanceToGround + 1f, ~gameObject.layer)) //unsure if ~layer works
			{
				Vector3 footPos = hit.point;
				footPos.y += distanceToGround;
				animator.SetIKPosition(AvatarIKGoal.LeftFoot, footPos);
				animator.SetIKRotation(AvatarIKGoal.LeftFoot, Quaternion.FromToRotation(Vector3.up, hit.normal) * transform.rotation);
			}

			//Right foot
			ikRay = new Ray(animator.GetIKPosition(AvatarIKGoal.RightFoot) + Vector3.up, Vector3.down);
			if (Physics.Raycast(ikRay, out hit, distanceToGround + 1f, ~gameObject.layer))
			{
				Vector3 footPos = hit.point;
				footPos.y += distanceToGround;
				animator.SetIKPosition(AvatarIKGoal.RightFoot, footPos);
				animator.SetIKRotation(AvatarIKGoal.RightFoot, Quaternion.FromToRotation(Vector3.up, hit.normal) * transform.rotation);
			}
		}
	}
	#endregion

	#region Input callbacks
	public void OnHorizontal(InputAction.CallbackContext context)
	{
		if (context.started || context.performed)
		{
			if (horizontalPull != null) StopCoroutine(horizontalPull);
			horizontalPush = StartCoroutine(PullHorizontalToVal(context.ReadValue<float>()));
		}
		else horizontalPull = StartCoroutine(PullHorizontalToZero());
	}
	public void OnVertical(InputAction.CallbackContext context)
	{
		if (context.started || context.performed)
		{
			if (verticalPull != null) StopCoroutine(verticalPull);
			verticalPush = StartCoroutine(PullVerticalToVal(context.ReadValue<float>()));
		}
		else verticalPull = StartCoroutine(PullVerticalToZero());
	}
	public void OnJump(InputAction.CallbackContext context) => print("jump nyi kek");
	public void OnFire(InputAction.CallbackContext context) => print("bro this ain't call of duty...");
	public void OnLook(InputAction.CallbackContext context) => lookDelta = context.ReadValue<Vector2>() * lookSensitivity;
	public void OnSprint(InputAction.CallbackContext context) => sprint = context.performed;
	#endregion

	#region Coroutines
	IEnumerator PullHorizontalToZero()
	{
		if (horizontalPush != null) StopCoroutine(horizontalPush);

		float factor = Time.deltaTime * movementDampTime;
		float initial = moveDelta.x;
		while (true)
		{
			if (moveDelta.x == 0) yield break;
			moveDelta.x += initial < 0 ? factor : -factor;
			moveDelta.x = (initial < 0 && moveDelta.x > 0) ? 0 : (initial > 0 && moveDelta.x < 0) ? 0 : moveDelta.x;

			yield return null;
			factor = Time.deltaTime * movementDampTime;
		}
	}
	IEnumerator PullHorizontalToVal(float target)
	{
		if (horizontalPull != null) StopCoroutine(horizontalPull);

		float factor = Time.deltaTime * movementDampTime;
		while (true)
		{
			if (moveDelta.x == target) yield break;
			moveDelta.x += target < 0 ? -factor : factor;
			moveDelta.x = (target < 0 && moveDelta.x < target) ? target : (target > 0 && moveDelta.x > target) ? target : moveDelta.x;

			yield return null;
		}
	}
	IEnumerator PullVerticalToZero()
	{
		if (verticalPush != null) StopCoroutine(verticalPush);

		float factor = Time.deltaTime * movementDampTime;
		float initial = moveDelta.z;
		while (true)
		{
			if (moveDelta.z == 0) yield break;
			moveDelta.z += initial < 0 ? factor : -factor;
			moveDelta.z = (initial < 0 && moveDelta.z > 0) ? 0 : (initial > 0 && moveDelta.z < 0) ? 0 : moveDelta.z;

			yield return null;
			factor = Time.deltaTime * movementDampTime;
		}
	}
	IEnumerator PullVerticalToVal(float target)
	{
		if (verticalPull != null) StopCoroutine(verticalPull);

		float factor = Time.deltaTime * movementDampTime;
		while (true)
		{
			if (moveDelta.z == target) yield break;
			moveDelta.z += target < 0 ? -factor : factor;
			moveDelta.z = (target < 0 && moveDelta.z < target) ? target : (target > 0 && moveDelta.z > target) ? target : moveDelta.z;

			yield return null;
		}
	}
	#endregion

	#region Private methods
	void UpdateCameraPosition() => targetCamera.transform.position = targetTransform.position;
	void UpdateCameraRotation()
	{
		float pitch = -lookDelta.y + targetCamera.transform.rotation.eulerAngles.x;
		float yaw = lookDelta.x + targetCamera.transform.rotation.eulerAngles.y;
		pitch -= (pitch > 180f) ? 360f : 0f; //Returned angle is between 0-360... move it between -180 to 180
		pitch = Mathf.Clamp(pitch, -85f, 85f);

		targetCamera.transform.rotation = Quaternion.Euler(pitch, yaw, 0f);
	}
	//void UpdateDrag()
	//{
	//	if (Physics.SphereCast(transform.position, 0.001f, Vector3.down, out RaycastHit hit, 1f, LayerMask.NameToLayer("Ground")))
	//		rb.drag = rbGroundedDrag;
	//	else rb.drag = aerialDrag;
	//}
	void UpdateCharacterRotation()
	{
		Vector3 rot = transform.rotation.eulerAngles;
		rot.y = targetCamera.transform.rotation.eulerAngles.y;
		transform.rotation = Quaternion.Euler(rot);
	}
	void UpdateAnimator()
	{
		float forward = moveDelta.z, lateral = moveDelta.x;

		animManager.SetFloat(forwardHash, forward);
		animManager.SetFloat(lateralHash, lateral);
		animManager.SetBool(sprintHash, sprint);
	}
	#endregion

	#region Public methods
	#endregion
}

/// <summary>
/// Input manager helper class which handles input for access in a simple data form. Automatically sets up callbacks
/// </summary>
public struct CharacterInputManager : InputControls.IDevDefaultActions
{
	private readonly InputControls controls;

	public Vector3 MoveDelta { get; private set; }
	public Vector3 LookDelta { get; private set; }
	public bool Sprint { get; private set; }
	public bool Fire { get; private set; }
	public bool Jump { get; private set; }

	public CharacterInputManager(ref InputControls controls)
	{
		this.controls = controls;
		MoveDelta = Vector3.zero;
		LookDelta = Vector2.zero;
		Sprint = false;
		Fire = false;
		Jump = false;
		controls.DevDefault.SetCallbacks(this);
	}

	public void OnFire(InputAction.CallbackContext context)
	{
		throw new System.NotImplementedException();
	}
	public void OnHorizontal(InputAction.CallbackContext context)
	{
		throw new System.NotImplementedException();
	}
	public void OnJump(InputAction.CallbackContext context)
	{
		throw new System.NotImplementedException();
	}
	public void OnLook(InputAction.CallbackContext context)
	{
		throw new System.NotImplementedException();
	}
	public void OnSprint(InputAction.CallbackContext context)
	{
		throw new System.NotImplementedException();
	}
	public void OnVertical(InputAction.CallbackContext context)
	{
		throw new System.NotImplementedException();
	}
}
public struct CharacterAnimationManager
{
	private readonly Animator managedAnimator;

	public CharacterAnimationManager(ref Animator manage)
	{
		managedAnimator = manage;
	}

	public void SetFloat(int id, float value) => managedAnimator.SetFloat(id, value);
	public void SetInteger(int id, int value) => managedAnimator.SetInteger(id, value);
	public void SetBool(int id, bool value) => managedAnimator.SetBool(id, value);
	public void SetTrigger(int id) => managedAnimator.SetTrigger(id);
}