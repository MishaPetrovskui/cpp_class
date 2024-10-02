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
	int min;
	for (int i = 0; i < size; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
	}
	return min;
}

int maximum(int* array, int size)
{
	int max;
	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	return max;
}

int main()
{
	srand(time(NULL));
	/*
	int size = 0, SIZE_NULLS = 0, SIZE_chtoto_MIN = 0, SIZE_chtoto_MAX = 0;
	cout << "input size: ";
	cin >> size;
	int A = SIZE_chtoto_MAX - SIZE_chtoto_MIN;
	int* array = new int[size];
	int* chtoto = new int[A];
	for (int i = 0; i < size; i++)
	{
		array[i] = randint(0,10);
	}
	
	for (int i = 0; i < size; i++)
	{
		if (array[i] == 0)
		{

			SIZE_NULLS++;
			if (SIZE_NULLS == 1)
			{
				SIZE_chtoto_MIN = i;
			}
			if (SIZE_NULLS > 1)
			{
				SIZE_chtoto_MAX = i;
			}
		}
	}

	print_array_lesson(array, size, SIZE_chtoto_MIN, SIZE_chtoto_MAX);
	cout << SIZE_NULLS << endl;
	cout << SIZE_chtoto_MIN << endl;
	cout << SIZE_chtoto_MAX << endl;
	float suma = 0;
	for (int i = SIZE_chtoto_MIN; i < SIZE_chtoto_MAX; i++)
	{
		suma += array[i];
	}

	float avg = (suma / (SIZE_chtoto_MAX - SIZE_chtoto_MIN - 1));

	cout << avg << endl;

	delete[] array;
	delete[] chtoto;
	*/
	int size = 0,suma = 0;
	cout << "input size: ";
	cin >> size;
	int* array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = randint(0, 10);
	}
	while (true)
	{
		for (int i = 0; i < size; i++)
		{
			cout << i << ". " << array[i] << ";\t";
		}
		for (int i = 0; i < size; i++)
		{
			suma += array[i];
		}
		int avg = suma / size;
		cout << "\b\b." << endl;
		cout << endl;
		cout << "MIN: " << minimum(array, size) << "   MAX: " <<
			maximum(array, size) << "   AVG: " << size;
		cout "- Zavershiti robotu programi;\n- Dodati prodaji za she odin misath i pererahuvati statistiku"
	}
	



	return 0;
}
