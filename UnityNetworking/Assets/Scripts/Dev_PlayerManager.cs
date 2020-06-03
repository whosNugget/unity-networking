using Photon.Pun;
using Photon.Pun.Demo.PunBasics;
using UnityEngine;

public class Dev_PlayerManager : MonoBehaviourPunCallbacks, IPunObservable
{
    public static GameObject localPlayerinstance;

    #region Private Fields

    public float health = 1f;

    [Tooltip("The Beams GameObject to control")]
    [SerializeField]
    private GameObject beams = null;

    bool requestFire;
    InputControls controls = null;
    #endregion

    #region MonoBehaviour CallBacks

    /// <summary>
    /// MonoBehaviour method called on GameObject by Unity during early initialization phase.
    /// </summary>
    void Awake()
    {
        if (photonView.IsMine)
            localPlayerinstance = this.gameObject;

        DontDestroyOnLoad(this.gameObject);

        if (beams is null)
            Debug.LogError("<Color=Red><a>Missing</a></Color> Beams Reference.", this);
        else
            beams.SetActive(false);

        controls = new InputControls();
        controls.Enable();
        controls.DevDefault.Fire.performed += ctx => { requestFire = true; };
        controls.DevDefault.Fire.canceled += _ => { requestFire = false; };
    }
    private void Start()
    {
        CameraWork _work = GetComponent<CameraWork>();

        if (_work is null)
        {
            Debug.LogError("<Color=Red><a>Missing</a></Color> CameraWork Component on playerPrefab.", this);
            return;
        }

        if (photonView.IsMine) _work.OnStartFollowing();
        UnityEngine.SceneManagement.SceneManager.sceneLoaded += OnSceneLoaded;
    }
    public override void OnDisable()
    {
        // Always call the base to remove callbacks
        base.OnDisable();
        UnityEngine.SceneManagement.SceneManager.sceneLoaded -= OnSceneLoaded;
    }
    /// <summary>
    /// MonoBehaviour method called on GameObject by Unity on every frame.
    /// </summary>
    void Update()
    {
        if (photonView.IsMine)
        {
            UpdateBeams(requestFire);
        }
    }
    #endregion

    #region Private methods
#if UNITY_5_4_OR_NEWER
    void OnSceneLoaded(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode loadingMode)
    {
        CalledOnLevelWasLoaded(scene.buildIndex);
    }
#endif

    void UpdateBeams(bool newVal)
    {
        if (beams != null)
            beams.SetActive(newVal);
    }

    void CalledOnLevelWasLoaded(int level)
    {
        // check if we are outside the Arena and if it's the case, spawn around the center of the arena in a safe zone
        if (!Physics.Raycast(transform.position, -Vector3.up, 5f))
        {
            transform.position = new Vector3(0f, 5f, 0f);
        }
    }
    #endregion

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            stream.SendNext(requestFire);
            stream.SendNext(health);
        }
        else
        {
            UpdateBeams((bool)stream.ReceiveNext());
            health = (float)stream.ReceiveNext();
        }
    }
}

