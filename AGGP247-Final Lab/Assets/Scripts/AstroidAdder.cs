using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AstroidAdder : MonoBehaviour
{
    public GameObject cam;

    float timer = 0;

    public float astroidNum = 3;

    public static AstroidAdder instance;

    // Start is called before the first frame update
    void Start()
    {
        instance = this;
    }

    // Update is called once per frame
    void Update()
    {
        timer += Time.deltaTime;

        if(timer >= 300)
        {
            cam.AddComponent<astroid>();
            timer = 0;
            astroidNum++;
        }
    }
}
