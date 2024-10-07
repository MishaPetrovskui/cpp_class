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
int main()
{
	srand(time(NULL));
	while (true)
	{
		system("cls");
		int kakih;
		cout << "Velkome in the game 'KUBIK'\nPress any key to continue(press 0 to break): ";
		cin >> kakih;
		int fi = 0;
		cout << "Enter size of rounds: ";
		cin >> fi;
		int player_1, player_2, bot_1, bot_2, avg = 0, avg_bot = 0, suma = 0, suma_bot = 0, kolichestvo = 0, kolichestvo_bot = 0;
		if (kakih != 0)
		{
			while (fi != 0)
			{
				fi--;
				system("cls");
				player_1 = randint(1, 6);
				player_2 = randint(1, 6);
				cub(player_1);
				cub2(player_2, 5);
				int player = player_1 + player_2;
				bot_1 = randint(1, 6);
				bot_2 = randint(1, 6);
				
				int bot = bot_1 + bot_2;
				if (player < bot)
				{
					cub(bot_1);
					cub2(bot_2, 5);
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
					suma += player;
					kolichestvo++;
					avg = suma / kolichestvo;
					suma_bot += bot;
					kolichestvo_bot++;
					avg_bot = suma_bot / kolichestvo_bot;
				}
				else
				{
					cout << "Draw, bot have: " << bot_1 << ", " << bot_2 << " You have: " << player_1 << ", " << player_2 << endl;
					suma += player;
					kolichestvo++;
					avg = suma / kolichestvo;
					suma_bot += bot;
					kolichestvo_bot++;
					avg_bot = suma_bot / kolichestvo_bot;
				}
				cout << "You have: " << fi << " kidkov; suma: " << suma << " avg: " << avg << endl;
				cout << "Bot have: suma: " << suma_bot << " avg: " << avg_bot << endl;
				if (fi != 0)
				{
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
				else
				{
					int l;
					cout << "Press any key to continue" << endl;
					cin >> l;
				}
			}
		}
	}

	return 0;
}
