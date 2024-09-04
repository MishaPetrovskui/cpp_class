#include <iostream>
using namespace std;

int main()
{
    /*
    int a;
    cout << "YOUR AGE: ";
    cin >> a;
    if (a <= 4)
    {
        cout << "You small";
    }
    else if (a <= 17)
    {
        cout << "You in school";
    }
    else if (a <= 50)
    {
        cout << "You dorosli";
    }
    else if (a <= 90)
    {
        cout << "You stariy";
    }
    else if (a <= 130)
    {
        cout << "You dovgojitel";
    }
    else
    {
        cout << "vreh";
    }
    */
    int year;
    cout << "Enter year: ";
    cin >> year;
    if (year % 400 == 0)
    {
        cout << "year visokosni";
    }
    else if (year % 100 == 0)
    {
        cout << "year ne visokosni";
    }
    else if (year % 4 == 0)
    {
        cout << "year visokosni";
    }
    else
    {
        cout << "year ne visokosni";
    }


    return 0;
}
