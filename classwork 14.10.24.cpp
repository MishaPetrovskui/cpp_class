#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
int randint(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}

void print_array(int rows, int columns, int** matrix)
{
	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < columns; column++)
		{
			cout << matrix[row][column] << "\t";
		}
		cout << endl;
	}
}

void print_array1(int rows, int* matrix)
{
	for (int row = 0; row < rows; row++)
	{
		cout << matrix[row] << "\t";
	}
}

void SetColor(int textColor, int bgColor)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,
		(bgColor << 4) | textColor);
}

int** create_matrix(int rows, int columns)
{
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
		matrix[i] = new int[columns];
	return matrix;
}

void delete_matrix(int** matrix, int rows)
{
	for (int i = 0; i < rows; i++)
		delete[] matrix[i];
	delete[] matrix;
}

void transponuvannya_matrix(int rows, int columns, int** matrix)
{
	for (int row = 0; row < rows; row++)
	{
		for (int column = row; column < columns; column++)
		{
			swap(matrix[row][column], matrix[column][row]);
		}
	}
}

int minim(int matrix[], int rows, int y)
{
	int min = 100000;
	int b;
	for (int i = y; i < rows; i++)
	{
		if (min > matrix[i])
		{
			min = matrix[i];
			b = i;
		}
	}
	return b;
}

void sort(int matrix[], int rows)
{
	for (int i = 0; i < rows; i++)
		swap(matrix[i], matrix[minim(matrix, rows, i)]);
}

int main()
{
	srand(time(NULL));
	int rows = 10;
	int* matrix = new int [rows];

	for (int row = 0; row < rows; row++)
		matrix[row] = randint(0, 10);
	print_array1(rows, matrix);
	cout << endl;
	sort(matrix, rows);
		
	print_array1(rows, matrix);
	/*
	print_array(rows, columns, matrix);
	cout << endl;
	transponuvannya_matrix(rows, columns, matrix);
	print_array(rows, columns, matrix);
	delete_matrix(matrix, rows);
	*/
	delete[] matrix;
	return 0;
}
