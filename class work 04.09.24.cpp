#include <iostream>
#include <time.h>
using namespace std;

int randint(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

int main()
{
    srand(time(0));
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
    /*
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
    */
    /*
    for (int i = 0; i < 30; i++)
        cout << randint(1, 20) << "\n" << endl;

    for (int i = 0; i < 30; i++)
        cout << (rand() % 10) + 1 << endl;
    */
    while (true)
    {
        int a, min, max, b, c,chislo;
        cout << "1.Start game\n2.Break\nDeystvie: ";
        cin >> a;
        if (a == 1)
        {
            while (true)
            {
                cout << "Igra: ugadai chislo\n";
                cout << "Vedi minimalniy diapozon: ";
                cin >> min;
                cout << "Vedi maksimalniy diapozon: ";
                cin >> max;
                chislo = randint(min, max);
                while (true)
                {
                    cout << "Vedi predpolojitelnoe chislo: " << chislo << endl;
                    cin >> b;
                    if (chislo == b)
                    {
                        cout << "Pravilno, zagadonoe chislo:" << chislo << endl;
                        break;
                    }
                    else if (chislo > b)
                    {
                        cout << "Chislo bolhe\n";
                    }
                    else if (chislo < b)
                    {
                        cout << "Chislo menshe\n";
                    }
                }
                cout << "1.Out to menu\n2.New Game\nDeystvie: ";
                cin >> c;
                if (c == 1)
                {
                    break;
                }
            }
        }
        else
        {
            cout << "Igra zakonchena";
            break;
        }
    }

    return 0;
}
