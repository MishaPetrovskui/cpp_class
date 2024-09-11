#include <iostream>
#include <windows.h>
using namespace std;

void SetColor(int textColor, int bgColor)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,
		(bgColor << 4) | textColor);
}

int main()
{
	int vibor_menu = 0;
	while (true)
	{
		SetColor(5, 0);
		cout << "Menu:\n1.Student\n2.Parne/Neparne\n3.Calkulator\n0.Exit" << endl;
		cout << "Deystvie: ";
		cin >> vibor_menu;
		SetColor(0, 0);

		if (vibor_menu == 0) {
			break;
		}
		while (true)
		{
			if (vibor_menu == 1) {
				float a, b, c, d, e, f;
				SetColor(8, 0);
				cout << "\nInput first ocenka: ";
				cin >> a;
				cout << "Input second ocenka: ";
				cin >> b;
				cout << "Input third ocenka: ";
				cin >> c;
				cout << "Input fourth ocenka: ";
				cin >> d;
				cout << "Input fifth ocenka: ";
				cin >> e;
				if (a <= 5 && b <= 5 && c <= 5 && d <= 5 && e <= 5)
				{
					f = (a + b + c + d + e) / 5;
					if (f >= 4) {
						SetColor(10, 0);
						cout << "Ti otrimal dostup, tvoya ochenka: " << f << endl << "\n";
						break;
					}
					else {
						SetColor(10, 0);
						cout << "Ti ne otrimal dostup, tvoya ochenka: " << f << endl << "\n";
						break;
					}
				}
				else
				{
					SetColor(4, 0);
					Sleep(5000);
					cout << "Nepravilno" << endl << "\n";
					break;
				}
			}
			else if (vibor_menu == 2) {
				int chislo;
				SetColor(8, 0);
				cout << "\nVedi chislo: ";
				cin >> chislo;
				if (chislo % 2 == 0)
				{
					SetColor(10, 0);
					cout << "\n" << chislo * 3 << endl << "\n";
					break;
				}
				else if (chislo % 2 != 0)
				{
					SetColor(10, 0);
					cout << "\n" << chislo / 2 << endl << "\n";
					break;
				}
			}
			else if (vibor_menu == 3) {
				float a, b;
				char diya;
				int _ = 0;
				SetColor(8, 0);
				cout << "\nInput first number: ";
				cin >> a;
				cout << "Input second number: ";
				cin >> b;
				cout << "Input arifmetichna diya: ";
				cin >> diya;
				switch (diya)
				{
				case '+': SetColor(10, 0); cout << a + b << endl << "\n"; _++; break;
				case '-': SetColor(10, 0); cout << a + b << endl << "\n"; _++; break;
				case '*': SetColor(10, 0); cout << a + b << endl << "\n"; _++; break;
				case '/': SetColor(10, 0); cout << a + b << endl << "\n"; _++; break;
				default: SetColor(4, 0); Sleep(5000); cout << "Nepravilno" << endl << "\n"; break;
				}
				if (_ == 1) { break; }
			}
			else {
				SetColor(4, 0);
				Sleep(500);
				cout << "\nNepravlnoe chislo\n";
				break;
			}
		}
	}
	return 0;
}
