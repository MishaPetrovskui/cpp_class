#include <iostream>
using namespace std;

int main()
{
	double a, b, c, e, f,g;
	cout << "Viber users: ";
	cin >> a;
	cout << "Telegram users: ";
	cin >> b;
	cout << "Telegram and Viber user: ";
	cin >> c;
	double  d = a + b + c * 2;
	e = ((a + c) / d) * 100.;
	f = ((b + c) / d) * 100.;
	g = ((2 * c) / d) * 100.;
	cout << "All users" << d << "\nViber users: " << int(e * 100) / 100. << "%" << "\nTelegram users: " << int(f * 100) / 100. << "%" << "\nTelegram and Viber user: " << g << "%" << endl;

	return 0;
}
