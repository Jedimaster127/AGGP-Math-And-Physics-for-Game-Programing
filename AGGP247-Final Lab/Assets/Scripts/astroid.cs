using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class astroid : MonoBehaviour
{
    public GameObject holder;

    Lab1.Grid2D grid = new Lab1.Grid2D();

    Vector3 velocity;

    public Vector3 start;

    public int ID;

    float radius;
    public float acc = 60;

    public float radiusMin = 10;
    public float radiusMax = 40;
    public float radians;
    public float angleRotation = 0f;

    public bool destroyed = false;

    public static astroid instance;

    // Start is called before the first frame update
    void Start()
    {
        ID = Random.Range(1111, 9999);

        instance = this;

        grid.origin = new Vector3(Screen.width / 2, Screen.height / 2);
        grid.screenSize = new Vector3(Screen.width, Screen.height);

        start.x = Random.Range(10, Screen.width - 10);
        start.y = Random.Range(10, Screen.height - 10);

        while (((ShipFlying.instance.t1.x - start.x) * (ShipFlying.instance.t1.x - start.x)) + ((ShipFlying.instance.t1.y - start.y) * (ShipFlying.instance.t1.y - start.y)) <= 2500)
        {
            start.x = Random.Range(10, Screen.width - 10);
            start.y = Random.Range(10, Screen.height - 10);
        }

        radius = Random.Range(radiusMin, radiusMax);

        angleRotation = Random.Range(-180, 180);

        holder.transform.rotation = Quaternion.Euler(new Vector3(0, 0, angleRotation));
    }

    // Update is called once per frame
    void Update()
    {      
        holder.transform.position = start;

        if (start.x >= grid.screenSize.x + 15)
        {
            start.x = -14;
        }

        if (start.x <= -15)
        {
            start.x = grid.screenSize.x + 14;
        }

        if (start.y >= grid.screenSize.y + 15)
        {
            start.y = -14;
        }

        if (start.y <= -15)
        {
            start.y = grid.screenSize.y + 14;
        }

        if (destroyed == false)
        {
            AstroidManager.AstroidDrawing(start, radius, 15, Color.red, grid);

            Movement(acc);
        }
        else
        {
            start.x = Random.Range(10, Screen.width - 10);
            start.y = Random.Range(10, Screen.height - 10);

            while (((ShipFlying.instance.t1.x - start.x) * (ShipFlying.instance.t1.x - start.x)) + ((ShipFlying.instance.t1.y - start.y) * (ShipFlying.instance.t1.y - start.y)) <= 2500)
            {
                start.x = Random.Range(10, Screen.width - 10);
                start.y = Random.Range(10, Screen.height - 10);
            }

            radius = Random.Range(radiusMin, radiusMax);

            angleRotation = Random.Range(-180, 180);

            holder.transform.rotation = Quaternion.Euler(new Vector3(0, 0, angleRotation));

            Score.instace.score++;

            destroyed = false;
        }

        if (((ShipFlying.instance.t1.x - start.x) * (ShipFlying.instance.t1.x - start.x)) + ((ShipFlying.instance.t1.y - start.y) * (ShipFlying.instance.t1.y - start.y)) <= (((start.x + radius) - start.x )* ((start.x + radius) - start.x)) + (((start.y + radius) - start.y) * ((start.y + radius)- start.y)) || ((ShipFlying.instance.t2.x - start.x) * (ShipFlying.instance.t2.x - start.x)) + ((ShipFlying.instance.t2.y - start.y) * (ShipFlying.instance.t2.y - start.y)) <= (((start.x + radius) - start.x) * ((start.x + radius) - start.x)) + (((start.y + radius) - start.y) * ((start.y + radius) - start.y)) || ((ShipFlying.instance.t3.x - start.x) * (ShipFlying.instance.t3.x - start.x)) + ((ShipFlying.instance.t3.y - start.y) * (ShipFlying.instance.t3.y - start.y)) <= (((start.x + radius) - start.x) * ((start.x + radius) - start.x)) + (((start.y + radius) - start.y) * ((start.y + radius) - start.y)))
        {
            ShipFlying.instance.hit = true;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        
    }

    void Movement(float accelerateion)
    {
        radians = Mathf.Deg2Rad * angleRotation;

        velocity.x = Mathf.Cos(radians) * accelerateion * Time.deltaTime;

        velocity.y = Mathf.Sin(radians) * accelerateion * Time.deltaTime;

        start += velocity;
    }
}
