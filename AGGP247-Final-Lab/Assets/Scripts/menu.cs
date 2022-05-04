using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class menu : MonoBehaviour
{
    public GameObject cam;

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            SceneManager.LoadScene("Ship");           
        }

        if(Input.GetKeyDown(KeyCode.Escape))
        {
            Debug.Log("game quited");

            Application.Quit();
        }
    }
}
