using System.Linq;
using Sirenix.OdinInspector;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Will play sounds from an internal collection randomly, or will play sounds that exist when requested specifically. Requires an AudioSource to play sounds.
/// </summary>
[RequireComponent(typeof(AudioSource))]
public class AudioController : SerializedMonoBehaviour
{
	#region Properties
	#endregion

	#region Serialized fields
	[Tooltip("A searchable collection of audio clips that can be played by this AudioManager"), DictionaryDrawerSettings(DisplayMode = DictionaryDisplayOptions.OneLine, KeyLabel = "Audio key", ValueLabel = "Audio clip")]
	[SerializeField] Dictionary<string, AudioClip> playableAudio = new Dictionary<string, AudioClip>();
	#endregion

	#region Private fields
	AudioSource source = null;
	#endregion

	#region Monobehavior callbacks
	private void Awake()
	{
		if (playableAudio.Count == 0)
		{
			Debug.LogWarning($"{gameObject.name}:{nameof(AudioController)} instance does not contain any playable audio, destroying instance");
			DestroyImmediate(this);
		}
		if (!TryGetComponent(out source))
		{
			Debug.LogWarning($"{gameObject.name}:{nameof(AudioController)} instance failed to find an attached audio source, destroying instance");
			DestroyImmediate(this);
		}
	}
	#endregion

	#region Private methods
	#endregion

	#region Public methods
	/// <summary>
	/// Play a specific sound contained within this controller's audio collection using the attached audio source
	/// </summary>
	/// <param name="audioKey"></param>
	/// <returns></returns>
	public bool TryPlaySound(string audioKey)
	{
		playableAudio.TryGetValue(audioKey, out AudioClip toPlay);
		if (toPlay)
		{
			source.PlayOneShot(toPlay);
			return true;
		}
		return false;
	}

	/// <summary>
	/// Play a random sound contained within this controller's audio collection using the attached audio source
	/// </summary>
	public void PlayRandomSound()
	{
		int indexAt = Random.Range(0, playableAudio.Count);
		AudioClip toPlay = playableAudio.ElementAt(indexAt).Value;
		if (toPlay) source.PlayOneShot(toPlay);
	}

	/// <summary>
	/// Get a sound with the provided <paramref name="audioKey"/>
	/// </summary>
	/// <param name="audioKey">Key to get a sound from</param>
	/// <returns>An AudioClip if one exists at the provided <paramref name="audioKey"/>. Returns null if the key does not exist</returns>
	public AudioClip TryGetSound(string audioKey)
	{
		playableAudio.TryGetValue(audioKey, out AudioClip @return);
		return @return;
	}

	/// <summary>
	/// Get a random sound which exist within this controller's audio collection
	/// </summary>
	/// <returns>An audio clip at a random location in the audio collection</returns>
	public AudioClip GetRandomSound()
	{
		int indexAt = Random.Range(0, playableAudio.Count);
		AudioClip @return = playableAudio.ElementAt(indexAt).Value;
		return @return;
	}
	#endregion
}