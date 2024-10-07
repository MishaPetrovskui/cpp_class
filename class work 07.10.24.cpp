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

void print_array_lesson(int* array, int size, int min, int max)
{
	for (int i = 0; i < size; i++)
	{
		if (i == min || i == max)
		{
			SetColor(2, 0);
			cout << array[i];
			SetColor(7, 0);
			cout << ", ";
		}
		else if (i > min && i < max)
		{
			SetColor(2, 0);
			cout << array[i];
			SetColor(7, 0);
			cout << ", ";
		}
		else
		{
			cout << array[i] << ", ";
		}
	}
	cout << "\b\b." << endl;
}

int minimum(int* array, int size)
{
	int minx = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] < minx)
		{
			minx = array[i];
		}
	}
	return minx;
}

int maximum(int* array, int size)
{
	int maxx = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] > maxx)
		{
			maxx = array[i];
		}
	}
	return maxx;
}
/*
void cub_player(char rank) {
	int _;
	if (rank > 6)
	cout << " _________ " << endl;
	cout << "|         |" << endl;
	cout << "|         |" << endl;
	cout << "|         |" << endl;
	cout << "|         |" << endl;
	cout << "|         |" << endl;
	cout << "|_________|" << endl;

}

void cub_bot(char rank) {
	cout << " _________ " << endl;
	cout << "|         |" << endl;
	cout << "|         |" << endl;
	cout << "|         |" << endl;
	cout << "|         |" << endl;
	cout << "|         |" << endl;
	cout << "|_________|" << endl;

}
*/
int main()
{
	srand(time(NULL));
	while (true)
	{
		int kakih;
		cout << "Velkome in the game 'KUBIK'\nPress any key to continue(press 0 to break): ";
		cin >> kakih;
		int player_1, player_2, bot_1, bot_2, avg = 0, avg_bot = 0, suma = 0, suma_bot = 0, kolichestvo = 0, kolichestvo_bot = 0;
		if (kakih != 0)
		{
			int fi=3;
			while (fi != 0)
			{
				fi--;
				system("cls");
				player_1 = randint(1, 6);
				player_2 = randint(1, 6);
				int player = player_1 + player_2;
				bot_1 = randint(1, 6);
				bot_2 = randint(1, 6);
				int bot = bot_1 + bot_2;
				if (player < bot)
				{
					cout << "You lose, bot have: " << bot_1 << ", " << bot_2 << " You have: " << player_1 << ", " << player_2 << endl;
					suma += player;
					kolichestvo++;
					avg = suma / kolichestvo;
					suma_bot += bot;
					kolichestvo_bot++;
					avg_bot = suma_bot / kolichestvo_bot;
				}
				else if (player > bot)
				{
					cout << "You win, bot have: " << bot_1 << ", " << bot_2 << " You have: " << player_1 << ", " << player_2 << endl;
				}
				else
				{
					cout << "Draw, bot have: " << bot_1 << ", " << bot_2 << " You have: " << player_1 << ", " << player_2 << endl;
				}
				cout << "You have: " << fi << " kidkov; suma: " << suma << " avg: " << avg << endl;
				cout << "Bot have: suma: " << suma_bot << " avg: " << avg_bot << endl;
				int action;
				cout << "What you do?\n1)Anothe one kkubik\n2)End\nAction: ";
				cin >> action;
				if (action == 2)
					fi = 0;
				else if (action == 1)
					continue;
				else
					cout << "Nepravilno" << endl;
			}
		}
	}

	return 0;
}
