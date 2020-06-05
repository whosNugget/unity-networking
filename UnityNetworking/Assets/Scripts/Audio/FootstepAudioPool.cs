using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// A container class for organizing random footstep noises for any GameObject. Used to manage what footstep noises a player should play when moving fast enough to generate noise
/// </summary>
public class FootstepAudioPool : MonoBehaviour
{
	#region Properties
	/// <summary>
	/// Get a reference to the audio contents of the collection within this instance. Useful for optimizations and to prevent unnecesary GetComponent lookups
	/// </summary>
	public ref List<AudioClip> Footsteps { get => ref footsteps; }
	#endregion

	#region Serialized fields
	[Tooltip("A list of sounds this footstep audio controller contains. These sounds will be played externally")]
	[SerializeField] List<AudioClip> footsteps = new List<AudioClip>();
	#endregion

	#region Private fields
	#endregion

	#region Monobehavior callbacks
	private void Awake()
	{
		if (footsteps.Count == 0)
		{
			Debug.LogWarning($"{gameObject.name}:{(nameof(FootstepAudioPool))} instance does not have any audio clips in its collection, destroying instance");
			DestroyImmediate(this);
		}

		tag = "FootstepPool";
	}
	#endregion

	#region Private methods
	#endregion

	#region Public methods
	#endregion
}