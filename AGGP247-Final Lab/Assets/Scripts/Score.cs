using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Score : MonoBehaviour
{
    public Text lives;

    public Text scoreText;

    public int score = 0;

    public static Score instace;

    // Start is called before the first frame update
    void Start()
    {
        instace = this;
    }

    // Update is called once per frame
    void Update()
    {
        scoreText.text = "Score: " + score.ToString();

        if(ShipFlying.instance != null)
        {

            lives.text = "Lives: " + ShipFlying.instance.lives.ToString();
        }
        else
        {

            lives.text = "Lives: 0";
        }
    }
}
