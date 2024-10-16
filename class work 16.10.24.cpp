#include <iostream>
#include <time.h>
#include <windows.h>
#include <math.h>

using namespace std;

struct Rectange
{
	double x, y;
};

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

double perimeter(Rectange a)
{
	return 2 * (a.x + a.y);
}

double square(Rectange a)
{
	return a.x * a.y;
}

double diagonal(Rectange a)
{
	return pow(a.x, 2) + pow(a.y, 2);
}

void drawRectange(Rectange a) {
    int rows = (int)a.x;
    int columns = (int)a.y;

    if (rows <= 0 || columns <= 0) {
        SetColor(4, 0);
        cout << "ERROR!" << endl;
        SetColor(7, 0);
        return;
    }

    for (int i = 0; i < rows; i++) {
        cout << "# ";
    }
    cout << endl;

    for (int i = 0; i < columns - 2; i++) {
        cout << "# ";
        for (int j = 0; j < rows - 2; j++) {
            cout << "  ";
        }
        if (rows > 1)
            cout << "# ";
        cout << endl;
    }
    if (columns > 1) {
        for (int i = 0; i < rows; i++) {
            cout << "# ";
        }
        cout << endl;
    }
}

void vivod(Rectange a)
{
	cout << "Shirina: " << a.x << endl;
	cout << "Visota: " << a.y << endl;
	cout << "Perimeter: " << perimeter(a) << endl;
	cout << "Square: " << square(a) << endl;
	cout << "Diagonal: " << diagonal(a) << endl;
}

int main()
{
	srand(time(NULL));
	Rectange a;
	cout << "Vedit shirinu: ";
	cin >> a.x;
	cout << "Vedit visotu: ";
	cin >> a.y;
	vivod(a);
	drawRectange(a);


	return 0;
}
