using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DrawingTools : MonoBehaviour
{


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public static float ToDegrees(float radian)
    {
        return (radian * (180/Mathf.PI));
    }

    public static float ToRadians(float degree)
    {
        return(degree * (Mathf.PI/180));
    }

    public static float V3ToAngle(Vector3 startPoint, Vector3 endPoint)
    {
        float start = Mathf.Atan2(startPoint.y, startPoint.x);

        float end = Mathf.Atan2(endPoint.y, endPoint.x);

        float angle = Mathf.Atan2(start, end);

        return (ToDegrees(angle));
    }

    public static float LineToAngle(Line line)
    {
        return (V3ToAngle(line.start, line.end));
    }

    public static Vector3 RotatePoint(Vector3 Center, float angle, Vector3 pointIN)
    {
        Vector3 pointOUT;

        float newX = (pointIN.x - Center.x) * Mathf.Cos(angle) - (pointIN.y - Center.y) * Mathf.Sin(angle);

        float newY = (pointIN.x - Center.x) * Mathf.Sin(angle) + (pointIN.y - Center.y) * Mathf.Cos(angle);

        pointOUT = new Vector3(Center.x + newX, Center.y + newY);

        return (pointOUT);
    }

    public static Vector3 CircleRadiusPoint(Vector3 Origin, float angle, float radius)
    {
        float radian = ToRadians(angle);

        return (new Vector3((radius * Mathf.Cos(radian))+Origin.x, (radius*Mathf.Sin(radian)) + Origin.y));
    }

    public static void DrawCircle(Vector3 Position, float Radius, int Sides, Color color, Lab1.Grid2D grid)
    {
        DrawingObject circle = new DrawingObject();
        Vector3 lastPoint = Vector3.zero;

        Vector3 firstPoint = Vector3.zero;

        if (Sides >= 3)
        {
            for (float i = 0; i <= 360; i += 360f / Sides)
            {
                Vector3 curentPoint = CircleRadiusPoint(Position, i, Radius);

                if (lastPoint != Vector3.zero)
                {
                    circle.Lines.Add(new Line(lastPoint, curentPoint, color));
                }
                else if (lastPoint == Vector3.zero && i != 360)
                {
                    firstPoint = curentPoint;
                }

                if(i == 360)
                {
                    circle.Lines.Add(new Line(curentPoint, firstPoint, color));
                }
                lastPoint = curentPoint;
            }
        }
        else
        {
            for (int i = 0; i <= 360; i += 360 / 3)
            {
                Vector3 curentPoint = CircleRadiusPoint(Position, i, Radius);

                if (lastPoint != Vector3.zero)
                {
                    circle.Lines.Add(new Line(lastPoint, curentPoint, color));
                }
                lastPoint = curentPoint;
            }
        }

            circle.Draw(grid);
        circle.Lines.Clear();
    }

    public static Vector3 EllipseRadiusPoint(Vector3 Origin, float angle, Vector3 Axis)
    {
        float radian = ToRadians(angle);

        return (new Vector3((Axis.x*Mathf.Cos(radian)) + Origin.x, (Axis.y*Mathf.Sin(radian))+Origin.y));
    }

    public static void DrawEllipse(Vector3 Position, Vector2 Axis, int Sides, Color color, Lab1.Grid2D grid)
    {
        DrawingObject ellipse = new DrawingObject();
        Vector3 lastPoint = Vector3.zero;
        Vector3 firstPoint = Vector3.zero;

        if (Sides >=3)
        {
            for (float i = 0; i <= 360; i += 360f / Sides)
            {

                Vector3 curentPoint = EllipseRadiusPoint(Position, i, Axis);
                if(lastPoint != Vector3.zero)
                {
                    ellipse.Lines.Add(new Line(lastPoint, curentPoint, color));
                }
                else if (lastPoint == Vector3.zero && i != 360)
                {
                    firstPoint = curentPoint;
                }

                if (i == 360 - (360 / Sides))
                {
                    ellipse.Lines.Add(new Line(firstPoint, curentPoint, color));
                }
                    lastPoint = curentPoint;
            }
        }
        else
        {
            for (int i = 0; i <= 360; i += 360 / 3)
            {
                Vector3 curentPoint = EllipseRadiusPoint(Position, i, Axis);
                if (lastPoint != Vector3.zero)
                {
                    ellipse.Lines.Add(new Line(lastPoint, curentPoint, color));
                }
                lastPoint = curentPoint;
            }
        }

        ellipse.Draw(grid);
        ellipse.Lines.Clear();
    }
}
