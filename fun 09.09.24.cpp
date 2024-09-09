#include <iostream>
#include <windows.h>
using namespace std;

void SetColor(int textColor, int bgColor)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,
        (bgColor << 4) | textColor);
}

int main()
{
    SetColor(10, 0);
    long long a = 0;
    while (true) { a++; cout << a << " "; }
    return 0;
}
https://www.geeksforgeeks.org/how-to-change-console-color-in-cpp/
