using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.UI;

public class DebugInfo : MonoBehaviour
{
    // Start is called before the first frame update
    public XRInteractionManager InteractionManager;

    private List<IXRInteractor> Interactors;
    void Start()
    {
        SceneManager.Select += refreshText;
        SceneManager.DeSelect += refreshText;

        Interactors = new List<IXRInteractor>();
        refreshText();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void refreshText()
    {
        InteractionManager.GetRegisteredInteractors(Interactors);
        Text text = transform.GetComponent<Text>();
        text.text = "Registered Interactors\n";
        foreach (XRBaseInteractor temp in Interactors)
        {
            text.text += temp.ToString();
            text.text += "\n";
        }

    }

}
