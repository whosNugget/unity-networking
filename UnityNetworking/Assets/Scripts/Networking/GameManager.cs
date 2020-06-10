using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.SceneManagement;
using Sirenix.OdinInspector;

public class GameManager : MonoBehaviourPunCallbacks
{
    #region Serialized fields
	[Tooltip("Player prefab that will be instantiated when players join over the network")]
    [Required, SerializeField] GameObject playerPrefab = null;
    #endregion

    #region Monobehavior callbacks 
    private void Start()
    {
        if (playerPrefab is null)
            Debug.LogError("<Color=Red><a>Missing</a></Color> playerPrefab Reference. Please set it up in GameObject 'Game Manager'", this);
        else if (RootCharacterController.localPlayerInstance is null)
        {
            Debug.LogFormat("Instantiating LocalPlayer from {0}", SceneManagerHelper.ActiveSceneName);
            PhotonNetwork.Instantiate(playerPrefab.name, new Vector3(0f, 5f, 0f), Quaternion.identity, 0);
        }
        else
        {
            Debug.LogFormat("Ignoring scene load for {0}", SceneManagerHelper.ActiveSceneName);
        }
    }
    #endregion

    #region Photon callbacks
    public override void OnLeftRoom()
    {
        SceneManager.LoadScene(0); //Load the main menu scene
    }

	//TODO: We actually don't need these callbacks because we are not loading a new scene every time someone leaves and joins. 
	//Instead of changing the scenes, we can sync a message to a console or some other form of logging medium

    public override void OnPlayerEnteredRoom(Player newPlayer) //Load the new player into the currently opened scene
    {
        Debug.LogFormat("OnPlayerEnteredRoom() PlayerEntering : {0}", newPlayer.NickName);
		
		//TODO: Stop the scene transitioning and just spawn the new player in any one of the spawn points
        if (PhotonNetwork.IsMasterClient)
        {
            Debug.LogFormat("OnPlayerEnteredRoom() IsMasterClient : {0}", PhotonNetwork.IsMasterClient);
            LoadArena();
        }
    }

    public override void OnPlayerLeftRoom(Player otherPlayer) //Remove the player who disconnected from the current scene
    {
        Debug.LogFormat("OnPlayerLeftRoom() PlaterExiting : {0}", otherPlayer.NickName);

		//TODO: Stop the scene transitioning and just spawn the new player in any one of the spawn points
        if (PhotonNetwork.IsMasterClient)
        {
            Debug.LogFormat("OnPlayerLeftRoom() IsMasterClient : {0}", PhotonNetwork.IsMasterClient);
            LoadArena();
        }
    }
    #endregion

    #region Private methods
    void LoadArena()
    {
        if (!PhotonNetwork.IsMasterClient)
            Debug.LogError("PhotonNetwork : Trying to Load a level but we are not the master Client");

        Debug.LogFormat("PhotonNetwork : Loading Level {0}", PhotonNetwork.CurrentRoom.PlayerCount);
        PhotonNetwork.LoadLevel("Room for " + PhotonNetwork.CurrentRoom.PlayerCount);
    }
    #endregion

    #region Public methods
    public void LeaveRoom()
    {
        PhotonNetwork.LeaveRoom();
    }
    #endregion
}
