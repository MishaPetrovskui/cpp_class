#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

int randint(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}

void SetColor(int textColor, int bgColor)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,
		(bgColor << 4) | textColor);
}

void print_array(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << ", ";
	}
	cout << "\b\b." << endl;
}
void print_array(int* array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << ", ";
	}
	cout << "\b\b." << endl;
}

float suma(int* array, int size)
{
	float sumir = 0;
	for (int i = 0; i < size; i++)
	{
		sumir += array[i];
	}
	return sumir;
}

float seredne_arifmetichne(int* array, int size)
{
	float i = suma(array, size) / size;
	return i;
}

int main()
{
	srand(time(NULL));
	int size;
	cout << "int size: ";
	cin >> size;
	if (0 < size < 100)
	{
		int* array = new int[size];

		for (int i = 0; i < size; i++)
		{
			array[i] = randint(0, 1);
		}
		SetColor(4, 0);
		print_array(array, size);
		cout << "Suma: " << suma(array, size) << "; Seredne arifmetichne: " << seredne_arifmetichne(array, size);
		delete[] array;
	}
	else
		cout << "Ne v diapozone";

	return 0;
}
