using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShipFlying : MonoBehaviour
{
    public GameObject Player;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Player.transform.position.x == Screen.width )
        {
            Player.transform.position = new Vector3(1, Player.transform.position.y);
        }

        if (Player.transform.position.x == 0)
        {
            Player.transform.position = new Vector3(Screen.width -1, Player.transform.position.y);
        }

        if(Player.transform.position.y == Screen.height)
        {
            Player.transform.position = new Vector3(Player.transform.position.x, 1);
        }

        if (Player.transform.position.y == 0)
        {
            Player.transform.position = new Vector3(Player.transform.position.x, Screen.height - 1);
        }

        if (Input.GetKey(KeyCode.W))
        {

        }

        if (Input.GetKey(KeyCode.A))
        {

        }

        if (Input.GetKey(KeyCode.D))
        {

        }

    }



}
