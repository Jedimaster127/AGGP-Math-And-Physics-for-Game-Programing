using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShipFlying : MonoBehaviour
{
    private Vector2 screenBounds;

    public GameObject player;
    public Rigidbody2D playerRigid;
    public float accelerate = 10;
    public float mass = 3;
    // Start is called before the first frame update
    void Start()
    {
        screenBounds = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, Camera.main.transform.position.z));
    }

    // Update is called once per frame
    void Update()
    {
        if(player.transform.position.x == screenBounds.x )
        {
            player.transform.position = new Vector3((screenBounds.x*-1) + 1, player.transform.position.y);
        }

        if (player.transform.position.x == screenBounds.x * -1)
        {
            player.transform.position = new Vector3(screenBounds.x - 1, player.transform.position.y);
        }

        if(player.transform.position.y == screenBounds.y)
        {
            player.transform.position = new Vector3(player.transform.position.x, (screenBounds.y * -1) + 1);
        }

        if (player.transform.position.y == screenBounds.y * -1)
        {
            player.transform.position = new Vector3(player.transform.position.x, screenBounds.y - 1);
        }

        if(Input.GetKey(KeyCode.W))
        {
            playerRigid.AddForce(transform.right * (playerRigid.mass * accelerate));
        }
        
        if (Input.GetKey(KeyCode.A))
        {
            player.transform.Rotate(new Vector3(0, 0, .5f));
        }

        if (Input.GetKey(KeyCode.D))
        {
            player.transform.Rotate(new Vector3(0, 0, -.5f));

        }

        if(transform.rotation.z == 360 || transform.rotation.z == -360)
        {
            player.transform.rotation = Quaternion.Euler(0,0,0);
        }
    }



}
