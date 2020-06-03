using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(TMP_InputField))]
public class Dev_PlayerNameInputField : MonoBehaviour
{
    #region Private constants
    private const string playerNamePrefKey = "PlayerName";
    #endregion

    #region Serialized fields
    [Tooltip("Button to prevent use on when the provided nickname is not valid (null, empty or whitespace)")]
    [SerializeField] Button startButton = null;
    #endregion

    #region Private fields
    TMP_InputField input = null;
    TMP_Text placeholder = null;
    #endregion

    #region Monobehavior callbacks
    private void Start()
    {
        string defaultName = string.Empty;
        input = GetComponent<TMP_InputField>();
        placeholder = GetComponentInChildren<TMP_Text>();
        if (input is null) return;

        if (PlayerPrefs.HasKey(playerNamePrefKey))
        {
            defaultName = PlayerPrefs.GetString(playerNamePrefKey);
            input.text = defaultName;
        }

        PhotonNetwork.NickName = defaultName;
    }
    #endregion

    #region Public methods
    public void SetPlayerName(string value)
    {
        if (string.IsNullOrWhiteSpace(value))
        {
            placeholder.text = "Please enter a nickname";
            if (startButton is null) return;
            startButton.interactable = false;
            return;
        }
        else
        {
            if (startButton != null) startButton.interactable = true;
            PhotonNetwork.NickName = value;
            PlayerPrefs.SetString(playerNamePrefKey, value);
        }
    }
    #endregion
}
