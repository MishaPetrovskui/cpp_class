#include <iostream>
using namespace std;

int main()
{
	/*
	int a, b;

	cout << "Type a: ";
	cin >> a;
	cout << "Type b: ";
	cin >> b;
	cout << "a + b = " << a + b << endl;
	return 0;
	*/
	/*
	int a, b;

	cout << "Type a: ";
	cin >> a;
	b = a / 7.;
	cout << "weeks - " << b << "\tdays - " << a - (b * 7) << endl;
	return 0;
	*/
	/*
	int a,b,c,d;
	cout << "Type a: ";
	cin >> a;
	b = a / 3600;
	c = (a - (3600 * b)) / 60;
	d = a - ((3600 * b) + c * 60);
	cout << "god = " << b << "\nmin = " << c << "\nsec = " << d << endl;

	return 0;
	*/
	int a, b, c,e,f,g,h;
	cout << "Viber users: ";
	cin >> a;
	cout << "Telegram users: ";
	cin >> b;
	cout << "Telegram and Viber user: ";
	cin >> c;
	int d = a + b + c * 2;
	e = ((a + c) * 100.) / d;
	f = ((b + c) * 100.) / d;
	cout << "All users" << d << "\nViber users: " << e << "%" << "\nTelegram users: " << f << "%" << "\nTelegram and Viber user: " << c << endl;

	return 0;
}
