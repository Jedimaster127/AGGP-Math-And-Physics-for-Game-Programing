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
    }

    public Color axisColor = Color.white;
    public Color lineColor = Color.gray;
    public Color divisionColor = Color.yellow;

    public bool isDrawingOrigin = false;
    public bool isDrawingAxis = true;
    public bool isDrawingDivisions = true;

    Grid2D grid = new Grid2D();

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

        if (isDrawingDivisions == true)
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

        if(isDrawingAxis == true)
        {
            Glint.AddCommand(new Line(new Vector3(grid.origin.x, grid.origin.y + (grid.gridSize * .2f)), new Vector3(grid.origin.x + (grid.gridSize * .2f), grid.origin.y), axisColor));

            Glint.AddCommand(new Line(new Vector3(grid.origin.x + (grid.gridSize * .2f), grid.origin.y), new Vector3(grid.origin.x, grid.origin.y - (grid.gridSize * .2f)), axisColor));

            Glint.AddCommand(new Line(new Vector3(grid.origin.x, grid.origin.y - (grid.gridSize * .2f)), new Vector3(grid.origin.x - (grid.gridSize * .2f), grid.origin.y), axisColor));

            Glint.AddCommand(new Line(new Vector3(grid.origin.x - (grid.gridSize * .2f), grid.origin.y), new Vector3(grid.origin.x, grid.origin.y + (grid.gridSize * .2f)), axisColor));
        }

        if(isDrawingOrigin == true)
        {

        }
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
