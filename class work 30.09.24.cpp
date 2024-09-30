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

int main()
{
	srand(time(NULL));
	int size = 0;
	cout << "int size: ";
	cin >> size;
	int* array = new int[size];

	for (int i = 0; i < size; i++)
	{
		array[i] = randint(-50,50);
	}
	print_array(array, size);
	delete [] array;

	return 0;
}
