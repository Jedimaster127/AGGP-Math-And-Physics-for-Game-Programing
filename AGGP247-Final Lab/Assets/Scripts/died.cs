using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class died : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Died();
    }

    // Update is called once per frame
    void Update()
    {

    }

    IEnumerator Died()
    {
        yield return new WaitForSecondsRealtime(5);

        SceneManager.LoadScene("main menu");
    }
}
