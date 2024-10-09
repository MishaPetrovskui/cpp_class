#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
int randint(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}
void print_array(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << ", ";
	}
	cout << "\b\b." << endl;
}

void SetColor(int textColor, int bgColor)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,
		(bgColor << 4) | textColor);
}

void get_kubik(int column, int rize)
{
	COORD coord;
	coord.X = column;
	coord.Y = rize;

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsole, coord);
}

void cub(char rank) {
	if (rank == 1)
	{
		cout << " _________ " << endl;
		cout << "|         |" << endl;
		cout << "|         |" << endl;
		cout << "|    #    |" << endl;
		cout << "|         |" << endl;
		cout << "|_________|" << endl;
	}
	else if (rank == 2)
	{
		cout << " _________ " << endl;
		cout << "|         |" << endl;
		cout << "|         |" << endl;
		cout << "| #     # |" << endl;
		cout << "|         |" << endl;
		cout << "|_________|" << endl;
	}
	else if (rank == 3)
	{
		cout << " _________ " << endl;
		cout << "|         |" << endl;
		cout << "| #       |" << endl;
		cout << "|    #    |" << endl;
		cout << "|       # |" << endl;
		cout << "|_________|" << endl;
	}
	else if (rank == 4)
	{
		cout << " _________ " << endl;
		cout << "|         |" << endl;
		cout << "| #     # |" << endl;
		cout << "|         |" << endl;
		cout << "| #     # |" << endl;
		cout << "|_________|" << endl;
	}
	else if (rank == 5)
	{
		cout << " _________ " << endl;
		cout << "|         |" << endl;
		cout << "| #     # |" << endl;
		cout << "|    #    |" << endl;
		cout << "| #     # |" << endl;
		cout << "|_________|" << endl;
	}
	else if (rank == 6)
	{
		cout << " _________ " << endl;
		cout << "|         |" << endl;
		cout << "| #     # |" << endl;
		cout << "| #     # |" << endl;
		cout << "| #     # |" << endl;
		cout << "|_________|" << endl;
	}
}

void cub2(char rank, int i) {
	if (rank == 1)
	{
		get_kubik(14, i + 0);
		cout << " _________ " << endl;
		get_kubik(14, i + 1);
		cout << "|         |" << endl;
		get_kubik(14, i + 2);
		cout << "|         |" << endl;
		get_kubik(14, i + 3);
		cout << "|    #    |" << endl;
		get_kubik(14, i + 4);
		cout << "|         |" << endl;
		get_kubik(14, i + 5);
		cout << "|_________|" << endl;
	}
	else if (rank == 2)
	{
		get_kubik(14, i + 0);
		cout << " _________ " << endl;
		get_kubik(14, i + 1);
		cout << "|         |" << endl;
		get_kubik(14, i + 2);
		cout << "|         |" << endl;
		get_kubik(14, i + 3);
		cout << "| #     # |" << endl;
		get_kubik(14, i + 4);
		cout << "|         |" << endl;
		get_kubik(14, i + 5);
		cout << "|_________|" << endl;
	}
	else if (rank == 3)
	{
		get_kubik(14, i + 0);
		cout << " _________ " << endl;
		get_kubik(14, i + 1);
		cout << "|         |" << endl;
		get_kubik(14, i + 2);
		cout << "| #       |" << endl;
		get_kubik(14, i + 3);
		cout << "|    #    |" << endl;
		get_kubik(14, i + 4);
		cout << "|       # |" << endl;
		get_kubik(14, i + 5);
		cout << "|_________|" << endl;
	}
	else if (rank == 4)
	{
		get_kubik(14, i + 0);
		cout << " _________ " << endl;
		get_kubik(14, i + 1);
		cout << "|         |" << endl;
		get_kubik(14, i + 2);
		cout << "| #     # |" << endl;
		get_kubik(14, i + 3);
		cout << "|         |" << endl;
		get_kubik(14, i + 4);
		cout << "| #     # |" << endl;
		get_kubik(14, i + 5);
		cout << "|_________|" << endl;
	}
	else if (rank == 5)
	{
		get_kubik(14, i + 0);
		cout << " _________ " << endl;
		get_kubik(14, i + 1);
		cout << "|         |" << endl;
		get_kubik(14, i + 2);
		cout << "| #     # |" << endl;
		get_kubik(14, i + 3);
		cout << "|    #    |" << endl;
		get_kubik(14, i + 4);
		cout << "| #     # |" << endl;
		get_kubik(14, i + 5);
		cout << "|_________|" << endl;
	}
	else if (rank == 6)
	{
		get_kubik(14, i + 0);
		cout << " _________ " << endl;
		get_kubik(14, i + 1);
		cout << "|         |" << endl;
		get_kubik(14, i + 2);
		cout << "| #     # |" << endl;
		get_kubik(14, i + 3);
		cout << "| #     # |" << endl;
		get_kubik(14, i + 4);
		cout << "| #     # |" << endl;
		get_kubik(14, i + 5);
		cout << "|_________|" << endl;
	}
}

bool is_can_move(char maze[6][11], int size, int x, int y)
{
	if (x < 0 || x >= size) return false;
	if (maze[x][y] != '.' && maze[x][y] != 'e') return false;
	return true;
}


bool pass_maze(char maze[6][11], int size, int x, int y)
{
	if (maze[x][y] == 'e')
		return true;

	maze[x][y] = '^';
	cout << maze << endl;
	if (is_can_move(maze, size, x, y - 1) && pass_maze(maze, size, x, y - 1))
		return true;
	/*
	maze[x][y] = '>';
	cout << maze << endl;
	if (is_can_move(maze, size, x + 1, y) && pass_maze(maze, size, x + 1, y))
		return true;

	maze[x][y] = '>';
	cout << maze << endl;
	if (is_can_move(maze, size, x,y + 1) && pass_maze(maze, size, x, y + 1))
		return true;

	maze[x][y] = '<';
	cout << maze << endl;
	if (is_can_move(maze, size, x - 1, y) && pass_maze(maze, size, x - 1, y))
		return true;

	
	*/
	maze[x][y] = ',';
	cout << maze << endl;
	return false;
}

int main()
{
	srand(time(NULL));
	const int rows = 6, columns = 11;
	char field[rows][columns] = { {"##########"}, {"...####.##"}, {"##.......#"}, {"##.#######"}, {"##.....e##"}, {"##########"} };
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << field[i][j];
		}
		cout << endl;
	}
	int starting_point_x = 0, starting_point_y = 0;
	cout << "start: ";
	cin >> starting_point_x, starting_point_y;

	bool result = pass_maze(field, 10, starting_point_x, starting_point_y);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << field[i][j];
		}
		cout << endl;
	}
	if (result)
		cout << "yes!" << endl;
	else
		cout << "no." << endl;

	return 0;
}
