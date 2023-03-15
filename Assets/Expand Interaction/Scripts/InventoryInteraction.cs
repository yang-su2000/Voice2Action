using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InventoryInteraction : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject ExpandUI; 
    void Start()
    {
        ExpandUI.SetActive(false);
        SceneManager.ActivateUI += SetActiveInactive;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void SetActiveInactive(Vector3 VoodooParent)
    {
        ExpandUI.SetActive(true);
        transform.position = VoodooParent;
        Debug.Log(transform.position);
    }
}
