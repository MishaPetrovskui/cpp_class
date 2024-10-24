#include <iostream>
#include <time.h>
#include <windows.h>
#include <math.h>
#include <conio.h>
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

struct Time
{
	int hours, minuts, secunds;

	bool isCorrect()
	{
		if (hours < 0 || hours > 24)
			return false;
		if (minuts < 0 || minuts > 59)
			return false;
		if (secunds < 0 || secunds > 59)
			return false;
		return true;
	}
	int sumaInSecunds()
	{
		return (hours * 3600) + (minuts * 60) + secunds;
	}
	Time VIVOD(Time b)
	{
		int secundi = b.sumaInSecunds() - sumaInSecunds();
		Time time;
		time.hours = secundi / 3600;
		time.minuts = (secundi % 3600) / 60;
		time.secunds = ((secundi % 3600) % 60);
		return time;
	}

};

int main()
{
	srand(time(NULL));
	while (true)
	{
		int _;
		cout << "Press any number to continue or zero for stop: ";
		cin >> _;
		if (_ == 0)
		{
			break;
		}
		else
		{
			while (true)
			{
				int fibor;
				cout << "Menu:\n1)Secunds\n2)Minuts\n3)Hours\n0)Break\nAction: " << endl;
				if (fibor == 0)
				{
					break;
				}
				if (fibor == 1)
				{
					while (true)
					{
						int secunds;
						cout << "Input secunds: ";
						cin >> secunds;
						if (secunds < 0 || secunds > 59)
						{
							cout << "You input number >59 or <0, try again";
							break;
						}
						else
						{

						}
					}
				}
			}
		}
	}

	/*
	Time a, b;
	cout << "Input time 1: ";
	cin >> a.hours >> a.minuts >> a.secunds;
	cout << "Input time 2: ";
	cin >> b.hours >> b.minuts >> b.secunds;
	Time _ = a.VIVOD(b);
	cout << _.hours << ":" << _.minuts << ":" << _.secunds;
	*/
	return 0;
}
