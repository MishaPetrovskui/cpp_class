using GAME;
using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;
using static System.Formats.Asn1.AsnWriter;

namespace ConsoleApp1.exam
{
    class Tetromino
    {
        /*List<bool[,]> Shape = new List<bool[,]>
        {
            {
                new bool[3, 3]
                {
                    {true, true, false},
                    {true, true, false},
                    {false, false, false}
                }
            }
        };*/
        bool[,] shape = new bool[2, 2] { { true,true }, { true, true } };
        Point pos;

        public Point Position(Point Pos)
        {
            pos = Pos;
            return pos;
        }
        public Point Position(int x, int y)
        {
            return Position(new Point(x,y));
        }
        public bool[,] Rotate()
        {
            shape = new bool[2, 2] { { true, true }, { true, true } };
            return shape;
        }
        public List<Point> GetCoordinates()
        {
            List<Point> coordinates = new List<Point>();
            for (int column = 0; column < shape.GetLength(0); column++)
            {
                for (int row = 0; row < shape.GetLength(1); row++)
                {
                    coordinates.Add(new Point(pos.X + row, pos.Y + column));
                }
            }
            return coordinates;
        }
        public bool Contains(Point Pos)
        {
            List<Point> coordinates = GetCoordinates();
            for (int i = 0;i < 4;i++)
            {
                if (coordinates[i] == Pos) return true;
            }
            return false;
        }
    }
    class Area
    {
        public int width;
        public int height;

        bool[,] field;

        public Area(int width, int height)
        {
            this.width = width;
            this.height = height;
        }
        public void MergeTetromino(Tetromino tetromino)
        {
            List<Point> ListOfCoordinates = new List<Point>();
            for ( int i = 0; i < ListOfCoordinates.Count; i++)
            {
                field[ListOfCoordinates[i].Y, ListOfCoordinates[i].X] = true;
            }
        }
        public void ClearRows(ref int score)
        {
            bool mit_mit_miiit = true;
            for (int column = 0; column < this.height; column++)
            {
                for (int row = 0; row < this.width; row++)
                {
                    if (field[row, column] == false) { mit_mit_miiit = false }
                }
                if (mit_mit_miiit)
                {
                    score++;
                    for (int i = column; i>=0; i--)
                    {
                        for (int j = 0; j < width; j++)
                        {
                            field[i, j] = field[i - 1, j];
                            field[i - 1, j] = false;
                        }
                    }
                    mit_mit_miiit = false;
                }
            }
        }
    }
}






using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ConsoleApp1.exam;

namespace ConsoleApp1.exam
{
    class Program
    {
        public static void Main(string[] args)
        {

        }
    }
}
