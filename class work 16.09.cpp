#include <iostream>
#include <time.h>
using namespace std;

int randint(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}


int main()
{
	srand(time(nullptr));
	const int len = 10;
	int array[len];

	for (int i = 0; i < len; i++)
	{
		array[i] = randint(-20, 20);
	}
	for (int i = 0; i < len; i++)
	{
		cout << array[i] << "  ";
	}
	cout << "\n";
	for (int i = 0; i < len; i++)
	{
		if (array[i] % 2 == 0){
			cout << array[i] << "  ";
		}
	}
	

	return 1;
}
