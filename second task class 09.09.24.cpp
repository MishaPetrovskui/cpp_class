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
        int a, b, c,chislo;
        int popitki = 0;
        cout << "1.Start game\n2.Break\nDeystvie: ";
        cin >> a;
        if (a == 1)
        {
            while (true)
            {
                cout << "Igra: ugadai chislo\n";
                chislo = randint(0, 500);
                int start_time = time(NULL);
                while (true)
                {
                    cout << "Vedi predpolojitelnoe chislo: " /* << chislo*/ << "";
                    cin >> b;
                    if (b == 0)
                    {
                        int end_time = time(NULL);
                        cout << "Pravilno, zagadonoe chislo:" << chislo << " popitok: " << popitki << " time: " << end_time - start_time << "seconds" << endl;
                        break;
                    }
                    else if (chislo == b)
                    {
                        int end_time = time(NULL);
                        cout << "Pravilno, zagadonoe chislo:" << chislo << " popitok: " << popitki << " time: " << end_time - start_time << "seconds" << endl;
                        break;
                    }
                    else if (chislo > b)
                    {
                        cout << "Chislo bolhe\n";
                        popitki++;
                    }
                    else if (chislo < b)
                    {
                        cout << "Chislo menshe\n";
                        popitki++;
                    }
                }
                cout << "1.Out to menu\n2.New Game\nDeystvie: ";
                cin >> c;
                if (c == 1)
                {
                    break;
                }
                else 
                {
                    popitki = 0;
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
