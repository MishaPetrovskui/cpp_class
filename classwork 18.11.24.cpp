#include <iostream>
#include <time.h>
#include <windows.h>
#include <string>
#include <fstream>
#define FILE_PATH "cars.txt"

using namespace std;

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

int main() {
    srand(time(NULL));
    fstream file;
    /*
    fstream file(FILE_PATH, ios::app);

    file << "Hello! " << endl;
    
    file.close();
    */
    /*
    file.open(FILE_PATH, ios::in);
    while (file)
    {
        string text;
        //file >> text;
        getline(file, text);
        cout << text << endl;
    }
    */
    while (true)
    {
        cout << "MENU:\n1)Add text\n2)Out text\n3)New file\n4)Max len\n0)Exit\nAction: ";
        int nAction;
        cin >> nAction;
        system("cls");
        if (nAction == 0)
        {
            break;
        }
        else if (nAction == 1)
        {
            fstream file(FILE_PATH, ios::app);
            cout << "Input text: ";
            string a;
            cin >> a;
            file << a << endl;
            file.close();
        }
        else if (nAction == 2)
        {
            file.open(FILE_PATH, ios::in);
            int _ = 1;
            while (file)
            {
                string text;
                //file >> text;
                getline(file, text);
                cout << _++ <<". " << text << endl;
            }
            file.close();
        }
        else if (nAction == 3)
        {
            file.open(FILE_PATH, ios::out);
            file.close();
        }
        else if (nAction == 4)
        {
            file.open(FILE_PATH, ios::in);
            int file_size = 0;
            string text, corect_text;
            while (file)
            {
                getline(file, text);
                if (text.length() > file_size)
                {
                    file_size = text.length();
                    corect_text = text;
                }
            }
            cout << corect_text << endl << file_size << " size" << endl;
            file.close();
        }
        else
            cout << "ERROR!";
    }

    return 0;
}
