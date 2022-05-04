using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionExample : MonoBehaviour
{
    Lab1.Grid2D grid = new Lab1.Grid2D();

    public Color lineColor = Color.gray;
    public Color divisionColor = Color.yellow;

    public bool isDrawingDivisions = true;

    public bool fillCircle = false;
    public bool fillRectangle = false;
    public bool fillTriangle = false;

    public Vector3 thePoint;

    DrawingObject rectangle = new DrawingObject();
    DrawingObject triangle = new DrawingObject();
    DrawingObject filledTriangle = new DrawingObject();
    DrawingObject filledRectangle = new DrawingObject();

    // Start is called before the first frame update
    void Start()
    {
        grid.origin = new Vector3(Screen.width / 2, Screen.height / 2);
        grid.screenSize = new Vector3(Screen.width, Screen.height);
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 r1 = new Vector3(878, 184);
        Vector3 r2 = new Vector3(818 - 60, 184);
        Vector3 r3 = new Vector3(818 - 60, 124);
        Vector3 r4 = new Vector3(878, 124);

        Vector3 t1 = new Vector3(grid.origin.x, grid.origin.y + 100);
        Vector3 t2 = new Vector3(grid.origin.x + 100, grid.origin.y);
        Vector3 t3 = new Vector3(grid.origin.x - 100, grid.origin.y);

        thePoint = Input.mousePosition;

        Debug.Log(Vector3.Dot(thePoint.normalized, new Vector3(225, 601).normalized));

        if(thePoint.x <= 878 && thePoint.x >= 818-60 && thePoint.y <= 184 && thePoint.y >= 124)
        {
            fillRectangle = true;
        }
        else
        {
            fillRectangle = false;
        }

        if(PointInTriangle(thePoint, t3, t1, t2))
        {
            fillTriangle = true;
        }
        else
        {
            fillTriangle = false;
        }

        if(((thePoint.x - 225)* (thePoint.x - 225)) +((thePoint.y - 601)* (thePoint.y - 601)) <= 2500)
        {
            fillCircle = true;
        }
        else
        {
            fillCircle = false;
        }

        if (Input.GetKeyDown(KeyCode.Alpha1) || Input.GetKeyDown(KeyCode.Keypad1))
        {
            if (isDrawingDivisions == true)
            {
                isDrawingDivisions = false;
            }
            else
            {
                isDrawingDivisions = true;
            }
        }

        for (float i = grid.origin.x; i >= 0; i -= grid.origin.x / grid.gridSize)
        {
            if (i == grid.origin.x)
            {
                Glint.AddCommand(new Line(new Vector3(grid.origin.x, grid.screenSize.y), new Vector3(grid.origin.x, 0), Color.cyan));
            }
            else
            {
                Glint.AddCommand(new Line(new Vector3(i, grid.screenSize.y), new Vector3(i, 0), lineColor));
            }
        }

        for (float i = grid.origin.x; i <= grid.screenSize.x; i += grid.origin.x / grid.gridSize)
        {
            if (i == grid.origin.x)
            {
                Glint.AddCommand(new Line(new Vector3(grid.origin.x, grid.screenSize.y), new Vector3(grid.origin.x, 0), Color.cyan));
            }
            else
            {
                Glint.AddCommand(new Line(new Vector3(i, grid.screenSize.y), new Vector3(i, 0), lineColor));
            }
        }

        for (float i = grid.origin.y; i >= 0; i -= grid.origin.y / grid.gridSize)
        {
            if (i == grid.origin.y)
            {
                Glint.AddCommand(new Line(new Vector3(grid.screenSize.x, grid.origin.y), new Vector3(0, grid.origin.y), Color.cyan));
            }
            else
            {
                Glint.AddCommand(new Line(new Vector3(grid.screenSize.x, i), new Vector3(0, i), lineColor));
            }
        }

        for (float i = grid.origin.y; i <= grid.screenSize.y; i += grid.origin.y / grid.gridSize)
        {
            if (i == grid.origin.y)
            {
                Glint.AddCommand(new Line(new Vector3(grid.screenSize.x, grid.origin.y), new Vector3(0, grid.origin.y), Color.cyan));
            }
            else
            {
                Glint.AddCommand(new Line(new Vector3(grid.screenSize.x, i), new Vector3(0, i), lineColor));
            }
        }

        if (isDrawingDivisions)
        {
            for (float i = grid.origin.x; i >= 0; i -= grid.origin.x / grid.divisionCount)
            {
                if (i != grid.origin.x)
                {
                    Glint.AddCommand(new Line(new Vector3(i, grid.screenSize.y), new Vector3(i, 0), divisionColor));
                }
            }

            for (float i = grid.origin.x; i <= grid.screenSize.x; i += grid.origin.x / grid.divisionCount)
            {
                if (i != grid.origin.x)
                {
                    Glint.AddCommand(new Line(new Vector3(i, grid.screenSize.y), new Vector3(i, 0), divisionColor));
                }
            }

            for (float i = grid.origin.y; i >= 0; i -= grid.origin.y / grid.divisionCount)
            {
                if (i != grid.origin.y)
                {
                    Glint.AddCommand(new Line(new Vector3(grid.screenSize.x, i), new Vector3(0, i), divisionColor));
                }

            }

            for (float i = grid.origin.y; i <= grid.screenSize.y; i += grid.origin.y / grid.divisionCount)
            {
                if (i != grid.origin.y)
                {
                    Glint.AddCommand(new Line(new Vector3(grid.screenSize.x, i), new Vector3(0, i), divisionColor));
                }
            }

        }

        if (fillCircle)
        {
            for(int i = 0; i <= 50; i++)
            {
                DrawingTools.DrawCircle(new Vector3(225, 601), i, 32, Color.red, grid);
            }
        }

        DrawingTools.DrawCircle(new Vector3(225, 601), 50, 32, Color.red, grid);

        if (fillRectangle)
        {
            for(float i = 818 - 60; i <= 878; i++)
            {
                filledRectangle.Lines.Add(new Line(new Vector3(i, 184), new Vector3(i,124), Color.green));
            }

            filledRectangle.Draw(grid);
            filledRectangle.Lines.Clear();
        }

        rectangle.Lines.Add(new Line(r1, r2, Color.green));
        rectangle.Lines.Add(new Line(r2, r3, Color.green));
        rectangle.Lines.Add(new Line(r3, r4, Color.green));
        rectangle.Lines.Add(new Line(r4, r1, Color.green));

        rectangle.Draw(grid);

        if (fillTriangle)
        {
            for(float i = grid.origin.x - 100; i <= grid.origin.x + 100; i++)
            {
                filledTriangle.Lines.Add(new Line(new Vector3(grid.origin.x, grid.origin.y + 100), new Vector3(i,grid.origin.y), Color.blue));
            }

            filledTriangle.Draw(grid);
            filledTriangle.Lines.Clear();

        }

        triangle.Lines.Add(new Line(t1, t2, Color.blue));
        triangle.Lines.Add(new Line(t2, t3, Color.blue));
        triangle.Lines.Add(new Line(t3, t1, Color.blue));

        triangle.Draw(grid);

        triangle.Lines.Clear();
        rectangle.Lines.Clear();
    }

    bool PointInTriangle(Vector3 p, Vector3 a, Vector3 b, Vector3 c)
    {
        Vector3 v0 = c - a;
        Vector3 v1 = b - a;
        Vector3 v2 = p - a;

        float dot00 = Vector3.Dot(v0, v0);
        float dot01 = Vector3.Dot(v0, v1);
        float dot02 = Vector3.Dot(v0, v2);
        float dot11 = Vector3.Dot(v1, v1);
        float dot12 = Vector3.Dot(v1, v2);

        float invDenom = 1 / (dot00 * dot11 - dot01 * dot01);
        float u = (dot11 * dot02 - dot01 * dot12) * invDenom;
        float v = (dot00 * dot12 - dot01 * dot02) * invDenom;

        if (u >=0 && v>=0 && u+v < 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}
