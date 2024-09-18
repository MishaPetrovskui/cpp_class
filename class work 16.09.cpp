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
	int _;
	for (int i = 0; i < len; i++)
	{
		array[i] = randint(1, 12);
	}
	while (true)
	{
		int a;
		cout << "1.Start\n2.Exit" << endl;
		cin >> a;
		if (a == 1) 
		{
			while (true)
			{
				cout << "1.Vuvid ochinok\n2.Peresdacha ispitu\n3.Chi vihodit stependiya" << endl;
				cin >> _;
				if (_ == 1)
				{
					for (int i = 0; i < len; i++)
					{
						cout << i + 1 << ". " << array[i] << "  ";
					}
					cout << "\n";
				}
				else if (_ == 2)
				{
					int number;
					int new1;
					for (int i = 0; i < len; i++)
					{
						cout << i + 1 << array[i] << "  ";
					}
					cout << "Nomer elementa,kotoriy hojeh izmenit: ";
					cin >> number;
					cout << "Novaya ohenka: ";
					cin >> new1;
					array[number - 1] = new1;
					break;
				}
				else if (_ == 3)
				{
					int suma = 0;
					for (int i = 0; i < len; i++)
					{
						suma += array[i];
					}
					if (suma / len >= 10)
					{
						cout << "Vishla stependiya" << endl;
						break;
					}
					else
					{
						cout << "Ne vishla stependiya" << endl;
						break;
					}
				}
			}
		}
		else if (a == 2)
		{
			break;
		}
		else
		{
			cout << "Nepravilno" << endl;
		}
	}
	
	/*
	
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
	*/

	return 1;
}
