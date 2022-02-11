using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lab1 : MonoBehaviour
{
    public class Grid2D
    {
        public Vector3 screenSize;
        public Vector3 origin;

        public float gridSize = 25f;
        float minGridSize = 2f;
        public float originSize = 20f;

        public int divisionCount = 5;
        int minDivisionCount = 2;

        public void DrawLine(Line line, bool DrawOnGrid = true)
        {
            Glint.AddCommand(line);
        }

        public void DrawObject(DrawingObject lineObj, bool DrawOnGrid = true)
        {

        }

        public float ScaleGrid2Screen(float value)
        {
            return (value * gridSize);
        }

        public float ScaleScreen2Grid(float value)
        {
            return (value / gridSize);
        }


    }

    public Color axisColor = Color.white;
    public Color lineColor = Color.gray;
    public Color divisionColor = Color.yellow;

    public bool isDrawingOrigin = false;
    public bool isDrawingAxis = true;
    public bool isDrawingDivisions = true;

    public bool isDrawingDiamond = true;
    public bool isDrawingHexagon = true;
    public bool isDrawingE = true;
    public bool porabing1 = true;
    public bool porabing2 = true;
    public bool porabing3 = true;
    public bool porabing4 = true;

    Grid2D grid = new Grid2D();

    DrawingObject diamond = new DrawingObject();
    DrawingObject spinDiamond = new DrawingObject();
    DrawingObject hexigon = new DrawingObject();
    DrawingObject E = new DrawingObject();
    DrawingObject parabola1 = new DrawingObject();
    DrawingObject parabola2 = new DrawingObject();
    DrawingObject parabola3 = new DrawingObject();
    DrawingObject parabola4 = new DrawingObject();

    Coroutine waitForFiveSeconds;

    public float numb = 22.5f;
    public int count = 1;

    private void Start()
    {
        grid.origin = new Vector3(Screen.width / 2, Screen.height / 2);
        grid.screenSize = new Vector3(Screen.width, Screen.height);
    }

    void Update()
    {

        if(Input.GetKeyDown(KeyCode.Minus) && grid.gridSize != 5)
        {
            grid.gridSize -= 5;
        }

        if(Input.GetKeyDown(KeyCode.Plus) || Input.GetKeyDown(KeyCode.Equals) && grid.gridSize != 100)
        {
            grid.gridSize += 5;
        }

        if (Input.GetKeyDown(KeyCode.Minus) && Input.GetKeyDown(KeyCode.LeftControl) && grid.divisionCount != 5)
        {
            grid.divisionCount -= 1;
        }

        if (Input.GetKeyDown(KeyCode.Plus) || Input.GetKeyDown(KeyCode.Equals) && Input.GetKeyDown(KeyCode.LeftControl) && grid.divisionCount != 100)
        {
            grid.divisionCount += 1;
        }

        for (float i = grid.origin.x; i >= 0; i -= grid.origin.x / grid.gridSize)
        {
            if(i == grid.origin.x)
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


        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            if(isDrawingOrigin == true)
            {
                isDrawingOrigin = false;
            }
            else
            {
                isDrawingOrigin = true;
            }
        }

        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            if (isDrawingAxis == true)
            {
                isDrawingAxis = false;
            }
            else
            {
                isDrawingAxis = true;
            }
        }

        if (Input.GetKeyDown(KeyCode.Alpha3))
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

        if (Input.GetKey(KeyCode.Mouse2) || Input.GetKeyDown(KeyCode.O))
        {
            grid.origin = Input.mousePosition;
        }

        if(Input.GetKey(KeyCode.Mouse0))
        {
            Debug.Log("x:"+Input.mousePosition.x + " y:" + Input.mousePosition.y);
        }

        if (isDrawingDivisions)
        {
            for (float i = grid.origin.x; i >= 0; i -= grid.origin.x / grid.divisionCount)
            {
                if(i != grid.origin.x)
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
                if(i != grid.origin.y)
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

        if(isDrawingAxis)
        {

            Vector3 p1 = new Vector3(grid.origin.x, grid.origin.y + (grid.gridSize * 7.5f));

            Vector3 p2 = new Vector3(grid.origin.x + (grid.gridSize * 7.5f), grid.origin.y);

            Vector3 p3 = new Vector3(grid.origin.x, grid.origin.y - (grid.gridSize * 7.5f));

            Vector3 p4 = new Vector3(grid.origin.x - (grid.gridSize * 7.5f), grid.origin.y);

            Vector3 newP1 = DrawingTools.RotatePoint(grid.origin, numb * (Mathf.PI / 180), p1);

            Vector3 newP2 = DrawingTools.RotatePoint(grid.origin, numb * (Mathf.PI / 180), p2);

            Vector3 newP3 = DrawingTools.RotatePoint(grid.origin, numb * (Mathf.PI / 180), p3);

            Vector3 newP4 = DrawingTools.RotatePoint(grid.origin, numb * (Mathf.PI / 180), p4); 

            spinDiamond.Lines.Add(new Line(newP1, newP2, axisColor));

            spinDiamond.Lines.Add(new Line(newP2, newP3, axisColor));

            spinDiamond.Lines.Add(new Line(newP3, newP4, axisColor));

            spinDiamond.Lines.Add(new Line(newP4, newP1, axisColor));

            spinDiamond.Draw(grid);

            if (waitForFiveSeconds == null)            
                waitForFiveSeconds = StartCoroutine(WUP());
        }

        if(isDrawingHexagon)
        {
            Vector3 p1 = new Vector3(grid.origin.x + (grid.gridSize * 1.3f), grid.origin.y + (grid.gridSize * 1.8f));

            Vector3 p2 = new Vector3(grid.origin.x - (grid.gridSize * 1.3f), grid.origin.y + (grid.gridSize * 1.8f));

            Vector3 p3 = new Vector3(grid.origin.x - (grid.gridSize * 2.1f), grid.origin.y);

            Vector3 p4 = new Vector3(grid.origin.x - (grid.gridSize * 1.3f), grid.origin.y - (grid.gridSize * 1.8f));

            Vector3 p5 = new Vector3(grid.origin.x + (grid.gridSize * 1.3f), grid.origin.y - (grid.gridSize * 1.8f));

            Vector3 p6 = new Vector3(grid.origin.x + (grid.gridSize * 2.1f), grid.origin.y);

            hexigon.Lines.Add(new Line(p1, p2, new Color(255, 165, 0)));
            hexigon.Lines.Add(new Line(p2, p3, new Color(255, 165, 0)));
            hexigon.Lines.Add(new Line(p3, p4, new Color(255, 165, 0)));
            hexigon.Lines.Add(new Line(p4, p5, new Color(255, 165, 0)));
            hexigon.Lines.Add(new Line(p5, p6, new Color(255, 165, 0)));
            hexigon.Lines.Add(new Line(p6, p1, new Color(255, 165, 0)));

            hexigon.Draw(grid);

            hexigon.Lines.Clear();
        }

        if(isDrawingDiamond)
        {
            Vector3 p1 = new Vector3(grid.origin.x, grid.origin.y + (grid.gridSize * .2f));

            Vector3 p2 = new Vector3(grid.origin.x + (grid.gridSize * .2f), grid.origin.y);

            Vector3 p3 = new Vector3(grid.origin.x, grid.origin.y - (grid.gridSize * .2f));

            Vector3 p4 = new Vector3(grid.origin.x - (grid.gridSize * .2f), grid.origin.y);

            diamond.Lines.Add(new Line(p1, p2, axisColor));

            diamond.Lines.Add(new Line(p2, p3, axisColor));

            diamond.Lines.Add(new Line(p3, p4, axisColor));

            diamond.Lines.Add(new Line(p4, p1, axisColor));

            diamond.Draw(grid);

            diamond.Lines.Clear();
        }

        if(isDrawingE)
        {
            E.Lines.Add(new Line(grid.origin / 10, new Vector3((grid.origin.x / 10) + 10, grid.origin.y / 10), new Color(255, 53, 184)));
            E.Lines.Add(new Line(grid.origin / 10, new Vector3(grid.origin.x / 10, (grid.origin.y / 10) + 10), new Color(255, 53, 184)));
            E.Lines.Add(new Line(new Vector3((grid.origin.x / 10) + 10, (grid.origin.y / 10) + 10), new Vector3(grid.origin.x / 10, (grid.origin.y / 10) + 10), new Color(255, 53, 184)));
            E.Lines.Add(new Line(new Vector3(grid.origin.x / 10, (grid.origin.y / 10) + 10), new Vector3(grid.origin.x / 10, (grid.origin.y / 10) + 20), new Color(255, 53, 184)));
            E.Lines.Add(new Line(new Vector3(grid.origin.x / 10, (grid.origin.y / 10) + 20), new Vector3((grid.origin.x / 10) + 10, (grid.origin.y / 10) + 20), new Color(255, 53, 184)));

            E.Draw(grid);

            E.Lines.Clear();
        }

        if(porabing1)
        {
            Vector3 lastPoint = Vector3.zero;
            for(float i = (grid.screenSize.x * -1); i <= grid.screenSize.x; i++)
            {                
                Vector3 curentPoint = new Vector3(grid.origin.x + i, grid.origin.y + ((i*i)/grid.gridSize));
                if(lastPoint != Vector3.zero)
                {
                    parabola1.Lines.Add(new Line(lastPoint, curentPoint, Color.red));
                }
                lastPoint = curentPoint;
            }
            parabola1.Draw(grid);

            parabola1.Lines.Clear();
        }

        if(porabing2)
        {
            Vector3 lastPoint = Vector3.zero;
            for (float i = (grid.screenSize.x * -1); i <= grid.screenSize.x; i++)
            {

                Vector3 curentPoint = new Vector3((grid.origin.x - grid.origin.x/grid.gridSize) + i, grid.origin.y + (((i * i) + (2*i) + 1)/grid.gridSize));
                if (lastPoint != Vector3.zero)
                {
                    parabola1.Lines.Add(new Line(lastPoint, curentPoint, Color.green));
                }
                lastPoint = curentPoint;
            }
            parabola2.Draw(grid);

            parabola2.Lines.Clear();
        }

        if(porabing3)
        {
            Vector3 lastPoint = Vector3.zero;
            for (float i = (grid.screenSize.x * -1); i <= grid.screenSize.x; i++)
            {

                Vector3 curentPoint = new Vector3((grid.origin.x + ((grid.origin.x / grid.gridSize)*2.5f)) + i, (grid.origin.y +((grid.origin.x / grid.gridSize)*24.5f)) + ((-2*(i * i) +(10*i)+12)/grid.gridSize));
                if (lastPoint != Vector3.zero)
                {
                    parabola3.Lines.Add(new Line(lastPoint, curentPoint, new Color(230, 230, 250)));
                }

                lastPoint = curentPoint;
            }
            parabola3.Draw(grid);

            parabola3.Lines.Clear();
        }

        if(porabing4)
        {
            Vector3 lastPoint = Vector3.zero;
            for (float i = (grid.screenSize.y * -1); i <= grid.screenSize.y; i++)
            {

                Vector3 curentPoint = new Vector3(grid.origin.x + ((-i*-i*-i)/grid.gridSize), grid.origin.y + i);
                if (lastPoint != Vector3.zero)
                {
                    parabola4.Lines.Add(new Line(lastPoint, curentPoint, Color.blue));
                }

                lastPoint = curentPoint;
            }
            parabola4.Draw(grid);

            parabola4.Lines.Clear();
        }

        if(isDrawingOrigin)
        {
            
        }
    }


    IEnumerator WUP()
    {
        spinDiamond.Lines.Clear();
        count++;
        yield return new WaitForSeconds(5);
        numb = test(count);
        waitForFiveSeconds = null;
    }

    public float test(float num)
    {
        float import = 22.5f;

        if (num > 8)
        {
            count = 1;
        }

        import *= num;

        return (import);
    }

    /*Takes the potential grid space and outputs it into screen space
    public Vector3 GridToScreen(Vector3 gridSpace)
    {
        return Vector3.zero;
    }

    //Takes in screen space and outputs it as grid space
    public Vector3 ScreenToGrid(Vector3 screenSpace)
    {
        return Vector3.zero;
    }

    //Draws the given line
    public void DrawLine(Line line)
    {
        Glint.AddCommand(line);
    }

    //Draws the Origin Point (or Symbol)
    public void DrawOrigin()
    {

    }*/
}
