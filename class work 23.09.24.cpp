#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

void sum(const int rows, const int columns)
{
    for (int i = -1; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "&";
        }
        cout << endl;
    }
    Sleep(2000);
}

int faktorial(int a)
{
    int b = 1;
    for (int i = 1; i <= a; i++)
    {
        b = b * i;
    }
    return b;
}

int parne(int a)
{
    for (int i = 2; i < a - 1; i++)
    {
        if (a % i == 0)
        {
            return 1;
        }
    }
    return 2;
}

int main()
{
    while (true)
    {
        int _;
        system("cls");
        cout << "Menu:\n1.Pryamokutnik\n2.Faktorial\n3.Proste\nVibor: ";
        cin >> _;
        if (_ == 1)
        {
            int a = 0, b = 0;
            cout << "Ukahi dlinu: ";
            cin >> a;
            cout << "Ukahi dlinu: ";
            cin >> b;
            sum(a, b);
        }
        else if (_ == 2)
        {
            int c;
            cout << "Vedi chislo: ";
            cin >> c;
            cout << c << "! = " << faktorial(c);
            Sleep(2000);
        }
        else if (_ == 3)
        {
            int a;
            cout << "Vedoi chislo: ";
            cin >> a;
            int b = parne(a);
            if (b == 1)
            {
                cout << "Neproste";
            }
            else if (b == 2)
            {
                cout << "Proste";
            }
            Sleep(2000);
        }
    }
    

    return 0;
}
