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
    file.open(FILE_PATH, ios::in);
    while (file)
    {
        string text;
        //file >> text;
        getline(file, text);
        cout << text << endl;
    }

    return 0;
}
