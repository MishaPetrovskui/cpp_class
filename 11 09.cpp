#include <iostream>
using namespace std;

int main() 
{
	int vibor_menu = 0;
	do
	{
		cout << "Menu:\n1.Student\n2.Parne/Neparne\n3.Calkulator" << endl;
		cout << "Deystvie";
		cin >> vibor_menu;
		switch (vibor_menu)
		{
		case '1': 
		{

		} break;
		case '2':
		{

		} break;
		case '3':
		{

		} break;
		default: cout << "Nepravilni vod"; break;
		}
	} while (vibor_menu == 0);

	return 0;
}
