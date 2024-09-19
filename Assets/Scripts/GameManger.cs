using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;
using UnityEditor.PackageManager;
using UnityEngine;

public class GameManger : MonoBehaviour
{
    public static GameManger Instance;
    private void Awake()
    {
        if(Instance != null && Instance!=false)
        {
            Destroy(gameObject);

        }
        else
        {
            Instance = this;
        }
    }
    private void Start()
    {
        NetworkManager.Singleton.OnClientConnectedCallback += (clientId) =>
        {
            Debug.Log(clientId + "joined");
        };
    }
    public void startHst()
    {
        NetworkManager.Singleton.StartHost();
    }
    public void StartClint()
    {
        NetworkManager.Singleton.StartClient();
    }
}
