using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShipFlying : MonoBehaviour
{
    public GameObject gameOver;

    public GameObject bullet;

    public static ShipFlying instance;

    Lab1.Grid2D grid = new Lab1.Grid2D();

    DrawingObject ship = new DrawingObject();

    public float rotationSpee = 0.5f;
    public float accelerate = 0f;
    public float mass = 4;
    public float force;
    public Vector3 velocity;

    public float angleRotation = 0f;
    public float lives = 3;
    public float radians;

    public Vector3 t1;
    public Vector3 t2;
    public Vector3 t3;
    public Vector3 tmid;

    public bool hit = false;

    // Start is called before the first frame update
    void Start()
    {
        instance = this;

        grid.origin = new Vector3(Screen.width / 2, Screen.height / 2);
        grid.screenSize = new Vector3(Screen.width, Screen.height);

        tmid = new Vector3(grid.origin.x, grid.origin.y);
        t1 = new Vector3(tmid.x + 15f, tmid.y);
        t2 = new Vector3(tmid.x - 7.5f, tmid.y - 7.5f);
        t3 = new Vector3(tmid.x - 7.5f, tmid.y + 7.5f);
    }

    // Update is called once per frame
    void Update()
    {

        if(tmid.x >= grid.screenSize.x + 1)
        {
            tmid.x = 0;

            t1 = new Vector3(tmid.x + 15f, tmid.y);
            t2 = new Vector3(tmid.x - 7.5f, tmid.y - 7.5f);
            t3 = new Vector3(tmid.x - 7.5f, tmid.y + 7.5f);

            t1 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t1);
            t2 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t2);
            t3 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t3);
        }

        if (tmid.x <= -1 )
        {
            tmid.x = grid.screenSize.x;

            t1 = new Vector3(tmid.x + 15f, tmid.y);
            t2 = new Vector3(tmid.x - 7.5f, tmid.y - 7.5f);
            t3 = new Vector3(tmid.x - 7.5f, tmid.y + 7.5f);

            t1 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t1);
            t2 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t2);
            t3 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t3);
        }

        if (tmid.y >= grid.screenSize.y + 1)
        {
            tmid.y = 0;

            t1 = new Vector3(tmid.x + 15f, tmid.y);
            t2 = new Vector3(tmid.x - 7.5f, tmid.y - 7.5f);
            t3 = new Vector3(tmid.x - 7.5f, tmid.y + 7.5f);

            t1 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t1);
            t2 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t2);
            t3 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t3);
        }

        if (tmid.y <= -1)
        {
            tmid.y = grid.screenSize.y;

            t1 = new Vector3(tmid.x + 15f, tmid.y);
            t2 = new Vector3(tmid.x - 7.5f, tmid.y - 7.5f);
            t3 = new Vector3(tmid.x - 7.5f, tmid.y + 7.5f);

            t1 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t1);
            t2 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t2);
            t3 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angleRotation, t3);
        }

        if (Input.GetKey(KeyCode.W))
        {
            Movement(accelerate);
        }

        if (Input.GetKey(KeyCode.S))
        {
            Movement(-accelerate);
        }

        if (Input.GetKey(KeyCode.A))
        {
            float angle = rotationSpee;

            //angle = rotationSpee * (Mathf.PI / 180);

            //angle = Mathf.Deg2Rad * angle;

            angleRotation += rotationSpee;

            t1 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angle, t1);
            t2 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angle, t2);
            t3 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angle, t3);

            //angleRotation += rotationSpee;
        }

        if (Input.GetKey(KeyCode.D))
        {
            float angle = -rotationSpee;

            //angle = (rotationSpee * -1) * (Mathf.PI / 180);

            //angle = Mathf.Deg2Rad * angle;

            angleRotation -= rotationSpee;

            t1 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angle, t1);
            t2 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angle, t2);
            t3 = DrawingTools.RotatePoint(tmid, Mathf.Deg2Rad * angle, t3);

            //angleRotation -= rotationSpee;
        }

        if (Input.GetKey(KeyCode.W) == false && Input.GetKey(KeyCode.S) == false)
        {
            Driftin();
        }

        if(hit)
        {
            Debug.Log("Ship was hit");

            lives--;

            if(lives == 0)
            {
                gameOver.SetActive(true);

                Destroy(this);
            }
            else
            {
                tmid = new Vector3(grid.origin.x, grid.origin.y);
                t1 = new Vector3(tmid.x + 15f, tmid.y);
                t2 = new Vector3(tmid.x - 7.5f, tmid.y - 7.5f);
                t3 = new Vector3(tmid.x - 7.5f, tmid.y + 7.5f);

                angleRotation = 0;
            }
            hit = false;
        }

        ship.Lines.Add(new Line(t1, t2, Color.white));
        ship.Lines.Add(new Line(t2, t3, Color.white));
        ship.Lines.Add(new Line(t3, t1, Color.white));

        ship.Draw(grid);

        if (Input.GetKeyDown(KeyCode.Space))
        {
            AstroidManager.instance.bullets.Add(Instantiate(bullet, t1, Quaternion.identity));
        }

        ship.Lines.Clear();
    }

    void Movement(float accelerateion)
    {

        radians = Mathf.Deg2Rad * angleRotation;

        velocity.x += Mathf.Cos(radians) * accelerateion * Time.deltaTime;

        if (velocity.x >= 3)
        {
            velocity.x = 3f;
        }
        else if(velocity.x <= -3)
        {
            velocity.x = -3f;
        }


        velocity.y += Mathf.Sin(radians) * accelerateion * Time.deltaTime;

        if (velocity.y >= 3)
        {
            velocity.y = 3f;
        }
        else if (velocity.y <= -3)
        {
            velocity.y = -3f;
        }


        tmid += velocity;
        t1 += velocity;
        t2 += velocity;
        t3 += velocity;
    }

    void Driftin()
    {
        tmid += velocity;
        t1 += velocity;
        t2 += velocity;
        t3 += velocity;
    }


}
