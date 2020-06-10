using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

namespace Nugget
{
	public class Launcher : MonoBehaviourPunCallbacks
	{
		#region Serialized fields
		[Tooltip("Maximum number of players allowed per room. When a room is full, no further entry will be allowed, thus a new room will be created")]
		[SerializeField, Range(2, 255)] private byte maxPlayersPerRoom = 20;

		[Tooltip("Object used to represent the main menu. Should be an object that contains some form of interactable UI")]
		[SerializeField] GameObject mainMenuPanel = null;
		[Tooltip("Object used to represent the control panel. Should be an object that contains some form of interactable UI")]
		[SerializeField] GameObject controlPanel = null;
		#endregion

		#region Private fields

		string gameVersion = "1";
		bool isConnecting;

		#endregion

		#region Monobehavior callbacks
		private void Awake()
		{
			PhotonNetwork.AutomaticallySyncScene = true;
			mainMenuPanel.SetActive(true);
			controlPanel.SetActive(false);
		}
		#endregion

		#region Monobehavior PUN callbacks
		public override void OnConnectedToMaster()
		{
			if (isConnecting)
			{
				PhotonNetwork.JoinRandomRoom();
				isConnecting = false;
			}
		}

		public override void OnDisconnected(DisconnectCause cause)
		{
			isConnecting = false;
			mainMenuPanel.SetActive(true);
			controlPanel.SetActive(false);
		}

		public override void OnJoinRandomFailed(short returnCode, string message)
		{
			Debug.Log($"{nameof(Launcher)}:{nameof(OnJoinRandomFailed)} was called by PUN. No random rooms available, so one will be created.\nCalling {nameof(PhotonNetwork)}.{nameof(PhotonNetwork.CreateRoom)}");
			PhotonNetwork.CreateRoom(null, new RoomOptions { MaxPlayers = maxPlayersPerRoom });
		}

		public override void OnJoinedRoom()
		{
			Debug.Log($"{nameof(Launcher)}:{nameof(OnJoinedRoom)} was called by PUN. Client is now connected to a room");
			controlPanel.SetActive(false);

			PhotonNetwork.LoadLevel(1);
		}
		#endregion

		#region Public methods
		/// <summary>
		/// Start the connection process. If already connected, attempts to join a random room. Otherwise will connect this application
		/// instance to the Photon Cloud Network
		/// </summary>
		public void Connect()
		{
			mainMenuPanel.SetActive(false);
			controlPanel.SetActive(true);

			if (PhotonNetwork.IsConnected)
			{
				PhotonNetwork.JoinRandomRoom();
			}
			else
			{
				isConnecting = PhotonNetwork.ConnectUsingSettings();
				PhotonNetwork.GameVersion = gameVersion;
			}
		}
		#endregion
	}
}