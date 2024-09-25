#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

int randint(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}
/*
void print_array(int array[], int& size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << ", ";
	}
	cout << "\b\b." << endl;
}

int sum(int array[], int& size)
{
	int suma = 0;
	for (int i = 0; i < size; i++)
	{
		suma += array[i];
	}
	return suma;
	
}

int minimum(int array[], int& size)
{
	int min = array[0];
	for (int i = 0; i < size; i++)
	{
		if (min > array[i])
		{
			min = array[i];
		}
	}
	return min;
}

int maximum(int array[], int& size)
{
	int max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
	}
	return max;
}

int parni(int array[], int& size)
{
	int parni = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] % 2 == 0)
		{
			parni++;
		}
	}
	return parni;
}
*/
int maximum(int array[], int& size)
{
	int max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
	}
	return max;
}
int main()
{
	srand(time(0));
	const int size = 5;
	int array[size];
	/*
	for (int i = 0; i < size; i++)
	{
		array[i] = randint(-50, 50);
	}
	int a = size;
	while (true)
	{
		system("cls");
		int _;
		cout << "MENU:\n1.Suma\n2.Min\n3.Max\n4.Parni\n5.Vivod\n0.Vihod\nDeystvie: ";
		cin >> _;
		if (_ == 1)
		{
			cout << sum(array, a) << endl;
			Sleep(5000);
		}
		else if (_ == 2)
		{
			cout << minimum(array, a) << endl;
			Sleep(5000);
		}
		else if (_ == 3)
		{
			cout << maximum(array, a) << endl;
			Sleep(5000);
		}
		else if (_ == 4)
		{
			cout << parni(array, a) << endl;
			Sleep(5000);
		}
		else if (_ == 5)
		{
			print_array(array, a);
			Sleep(5000);
		}
		else if (_ == 0)
		{
			break;
		}
		else
		{
			cout << "Nevirno";
			Sleep(5000);
		}
	}
	*/
	int a = size;
	for (int i = 0; i < size; i++)
	{
		array[i] = randint(-50, 50);
	}
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << ", ";
	}
	cout << "\b\b." << endl;

	for (int i = 0; i < size; i++)
	{
		if (array[i] < 0)
		{
			array[i] = -10;
		}
	}
	
	for (int i = 0; i < size; i++)
	{
		if (array[i] != -10)
		{
			cout << array[i] << ", ";
		}
	}
	cout << "\b\b." << endl;

	return 0;
}
