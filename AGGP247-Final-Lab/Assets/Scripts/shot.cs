using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shot : MonoBehaviour
{
    public GameObject holder;

    public static shot instance;

    Lab1.Grid2D grid = new Lab1.Grid2D();

    public Vector3 velocity;

    public Vector3 bulletspot;

    float radians;

    public float acc = 300;

    public float rotation;

    //public List<astroid> astroids = new List<astroid>();

    public bool destroyed = false;

    // Start is called before the first frame update
    void Start()
    {
        instance = this;

        bulletspot = ShipFlying.instance.t1;

        rotation = ShipFlying.instance.angleRotation;

        grid.origin = new Vector3(Screen.width / 2, Screen.height / 2);
        grid.screenSize = new Vector3(Screen.width, Screen.height);
    }

    // Update is called once per frame
    void Update()
    {
        holder.transform.position = bulletspot;

        if (bulletspot.x >= grid.screenSize.x + 1)
        {
            bulletspot.x = 0;
        }

        if (bulletspot.x <= -1)
        {
            bulletspot.x = grid.screenSize.x;
        }

        if (bulletspot.y >= grid.screenSize.y + 1)
        {
            bulletspot.y = 0;
        }

        if (bulletspot.y <= -1)
        {
            bulletspot.y = grid.screenSize.y;
        }

        AstroidManager.AstroidDrawing(bulletspot, 3, 15, Color.white, grid);

        Movement(acc, rotation);

        Destroy(holder, 3);

        if (destroyed)
        {
            Destroy(holder);
        }

        /*foreach(astroid troid in astroids)
        {
            if (((bulletspot.x - troid.start.x) * (bulletspot.x - troid.start.x)) + ((bulletspot.y - troid.start.y) * (bulletspot.y - troid.start.y)) <= 2500)
            {
                troid.destroyed = true;

                Destroy(this);
            }
        }*/

    }

    void Movement(float accelerateion, float rotation)
    {

        radians = Mathf.Deg2Rad * rotation;

        velocity.x = Mathf.Cos(radians) * accelerateion * Time.deltaTime;

        velocity.y = Mathf.Sin(radians) * accelerateion * Time.deltaTime;

        bulletspot += velocity;
    }

    /*IEnumerator LifeTime()
    {
        yield return new WaitForSeconds(3);

        AstroidManager.instance.bullets.Remove(holder);

        Destroy(holder);
    }*/
}
