#include <iostream>
#include <time.h>
#include <windows.h>
#include <string>
#include <fstream>
#define FILE_PATH "nums.txt"

using namespace std;

bool isnumber(string text)
{
    for (int i = 0; i < text.length(); i++)
        if (!isdigit(text[i]))
            return false;
    return true;
}

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

struct SAVE
{
    char name[12];
    int score;
};

void bubbleSortU(SAVE correct[], int len) {
    bool swapped = true;

    for (int i = 0; i < len - 1; i++) {
        swapped = false;
        for (int j = 0; j < len - i - 1; j++) {
            if (correct[j].score > correct[j + 1].score) {
                swap(correct[j], correct[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

int main() {
    srand(time(NULL));
    int lives = 3, score = 0, len = 0;
    while (true)
    {
        cout << "WELCOME TO MATH TRENER\nMENU:\n1)Start a game\n0)Exit\nAction: ";
        int action;
        cin >> action;
        system("cls");
        if (action == 0)
            break;
        else if (action == 1)
        {
            while (lives > 0)
            {
                int first_number = randint(0, 100), second_number = randint(0, 100);
                cout << "\nScore: " << score << "\nLives : " << lives << endl;
                SetColor(2, 0);
                cout << first_number << " + " << second_number << " = ";
                SetColor(7, 0);
                string unswer;
                cin >> unswer;
                if (unswer == "quit")
                {
                    cout << "GAME OVER\nScore: " << score << endl;
                    break;
                }
                else if (isnumber(unswer))
                {
                    int number = stoi(unswer);
                    if (lives > 0)
                    {
                        if (first_number + second_number == number)
                        {
                            score++;
                            cout << "right!" << endl;
                        }
                        else
                        {
                            cout << "mistake!" << first_number << " + " << second_number << " = " << first_number + second_number << endl;
                            --lives;
                        }
                    }
                    else
                    {
                        cout << "Lives are over" << endl;
                    }
                }
                else
                {
                    SetColor(4, 0);
                    cout << "ERROR!" << endl;
                    SetColor(7, 0);
                }
            }
            if (lives <= 0)
            {
                cout << "Lives are over\nYou lose\nScore: " << score << endl;
                SAVE save[5];
                cout << "Enter your name";
                cin >> save[4].name;
                save[4].score = score;
                FILE* file;
                fopen_s(&file, FILE_PATH, "rb");
                int po = 0;
                while (fread(&save, sizeof(SAVE), 1, file))
                {
                    save[po].name;
                    save[po].score;
                    po++;
                }
                if (po >= 5)
                    bubbleSortU(save, po - 1);
                else
                    bubbleSortU(save, po);

            }
        }
        else
        {
            SetColor(4, 0);
            cout << "ERROR!" << endl;
            SetColor(7, 0);
        }
    }

    return 0;
}
