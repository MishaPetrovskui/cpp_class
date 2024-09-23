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

void faktorial(int a)
{
    int b = 1;
    for (int i = 1; i <= a; i++)
    {
        b = b * i;
    }
    cout << a << "! = " << b;
    Sleep(2000);
}

void parne(int a)
{
    for (int i = 2; i < a - 1; i++)
    {
        if (a % i == 0)
        {
            cout << "ne proste";
            Sleep(2000);
            break;
        }
        else
        {
            cout << "proste";
            Sleep(2000);
            break;
        }
    }
    
}

int main()
{
    while (true)
    {
        int _;
        system("cls");
        cout << "Menu:\n1.Pryamokutnik\n2.Faktorial\n3.Parne\nVibor: ";
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
            faktorial(c);
        }
        else if (_ == 3)
        {
            int a;
            cout << "Vedoi chislo: ";
            cin >> a;
            parne(a);
        }
    }
    

    return 0;
}
