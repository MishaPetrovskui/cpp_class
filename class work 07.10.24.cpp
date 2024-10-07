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
		int player_1_1, player_1_2, player_2_1, player_3, bot_1, bot_2, bot_3, sproba = 2, sproba_bot = 2, avg = 0, avg_bot = 0,suma = 0, suma_bot = 0, kolichestvo = 0, kolichestvo_bot = 0;
		if (kakih != 0)
		{
			int fi;
			while (fi <= 3)
			{
			system("cls");
			player_1_1 = randint(1, 6);
			player_1_2 = randint(1, 6);
			bot_1 = randint(2, 12);
			cout << player_1 << endl << bot_1 << endl;
			if (player_1 < bot_1)
			{
				cout << "You lose, bot have: " << bot_1 << " You have: " << player_1 << endl;
			}
			else if (player_1 > bot_1)
			{
				cout << "You win, bot have: " << bot_1 << " You have: " << player_1 << endl;
			}
			else
			{
				cout << "Draw, bot have: " << bot_1 << " You have: " << player_1 << endl;
			}
			cout << "You have: " << sproba << " kidkov; suma: " << suma << " avg: " << avg << endl;
			cout << "Bot have: " << sproba_bot << " kidkov; suma: " << suma_bot << " avg: " << avg_bot << endl;
			int action;
			cout << "What you do?\n1)Anothe one kkubik\n2)End\nAction: ";
			cin >> action;
			}
			if (action == 1)
			{
				system("cls");
				int bot_hotenie;
				bot_hotenie = randint(0, 1);
				if (bot_hotenie == 0)
				{
					bot_2 = bot_1;
				}
				else if (bot_hotenie == 1)
				{
					sproba_bot--;
					bot_2 = randint(2, 12);
				}
				sproba--;
				player_2 = randint(2, 12);
				if (player_2 < bot_2)
				{
					cout << "You lose, bot have: " << bot_2 << " You have: " << player_2 << endl;
					kolichestvo++;
					suma += player_2;
					avg = suma / kolichestvo;
					kolichestvo_bot++;
					suma_bot += bot_2;
					avg_bot = suma_bot / kolichestvo_bot;
				}
				else if (player_2 > bot_2)
				{
					cout << "You win, bot have: " << bot_2 << " You have: " << player_2 << endl;
					kolichestvo++;
					suma += player_2;
					avg = suma / kolichestvo;
					kolichestvo_bot++;
					suma_bot += bot_2;
					avg_bot = suma_bot / kolichestvo_bot;
				}
				else
				{
					cout << "Draw, bot have: " << bot_2 << " You have: " << player_2 << endl;
					kolichestvo++;
					suma += player_2;
					avg = suma / kolichestvo;
					kolichestvo_bot++;
					suma_bot += bot_2;
					avg_bot = suma_bot / kolichestvo_bot;
				}
				cout << "You have: " << sproba << " kidkov; suma: " << suma << " avg: " << avg << endl;
				cout << "Bot have: " << sproba_bot << " kidkov; suma: " << suma_bot << " avg: " << avg_bot << endl;
				int action;
				cout << "What you do?\n1)Anothe one kkubik\n2)End\nAction: ";
				cin >> action;
				if (action == 1)
				{
					system("cls");
					int bot_hotenie;
					bot_hotenie = randint(0, 1);
					if (bot_hotenie == 0)
					{
						bot_3 = bot_2;
					}
					else if (bot_hotenie == 1)
					{
						sproba_bot--;
						bot_3 = randint(2, 12);
					}
					sproba--;
					player_3 = randint(2, 12);
					if (player_3 < bot_3)
					{
						cout << "You lose, bot have: " << bot_2 << " You have: " << player_2 << endl;
						kolichestvo++;
						suma += player_3;
						avg = suma / kolichestvo;
						kolichestvo_bot++;
						suma_bot += bot_3;
						avg_bot = suma_bot / kolichestvo_bot;
					}
					else if (player_3 > bot_3)
					{
						cout << "You win, bot have: " << bot_3 << " You have: " << player_3 << endl;
						kolichestvo++;
						suma += player_3;
						avg = suma / kolichestvo;
						kolichestvo_bot++;
						suma_bot += bot_3;
						avg_bot = suma_bot / kolichestvo_bot;
					}
					else
					{
						cout << "Draw, bot have: " << bot_3 << " You have: " << player_3 << endl;
						kolichestvo++;
						suma += player_3;
						avg = suma / kolichestvo;
						kolichestvo_bot++;
						suma_bot += bot_3;
						avg_bot = suma_bot / kolichestvo_bot;
					}
					cout << "You have: " << sproba << " kidkov; suma: " << suma << " avg: " << avg << endl;
					cout << "Bot have: " << sproba_bot << " kidkov; suma: " << suma_bot << " avg: " << avg_bot << endl;
				}
				else if (action == 2)
				{
					break;
				}
			}
			else if (action == 2)
			{
				break;
			}
		}
	}

	return 0;
}
