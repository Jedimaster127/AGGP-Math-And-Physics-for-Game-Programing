using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AstroidManager : MonoBehaviour
{
    public Vector3 start;

    public GameObject asteroid;

    public List<GameObject> asteroids = new List<GameObject>();

    public List<GameObject> bullets = new List<GameObject>();

    float timer = 0;

    public float astroidNum = 3;

    public static AstroidManager instance;

    // Start is called before the first frame update
    void Start()
    {
        instance = this;

        asteroids.Add(Instantiate(asteroid));
        asteroids.Add(Instantiate(asteroid));
        asteroids.Add(Instantiate(asteroid));
    }

    // Update is called once per frame
    void Update()
    {
        timer += Time.deltaTime;

        if (timer >= 10)
        {
            asteroids.Add(Instantiate(asteroid));
            timer = 0;
            astroidNum++;
        }

        foreach(GameObject bullet in bullets)
        {
            if(bullet == null)
            {
                bullets.Remove(bullet);
            }
            else
            {
                foreach (GameObject troid in asteroids)
                {
                    if (((bullet.GetComponent<shot>().bulletspot.x - troid.GetComponent<astroid>().start.x) * (bullet.GetComponent<shot>().bulletspot.x - troid.GetComponent<astroid>().start.x)) + ((bullet.GetComponent<shot>().bulletspot.y - troid.GetComponent<astroid>().start.y) * (bullet.GetComponent<shot>().bulletspot.y - troid.GetComponent<astroid>().start.y)) <= 2500)
                    {
                        troid.GetComponent<astroid>().destroyed = true;

                        bullet.GetComponent<shot>().destroyed = true;
                    }
                }
            }
        }
        
    }

    public static void AstroidDrawing(Vector3 Position, float Radius, int Sides, Color color, Lab1.Grid2D grid)
    {
        DrawingTools.DrawCircle(Position, Radius, Sides, color, grid);
    }
}
