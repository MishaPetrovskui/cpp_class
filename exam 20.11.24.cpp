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
            if (correct[j].score < correct[j + 1].score) {
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
    while (true)
    {
        int lives = 3, score = 0, len = 0;
        cout << "WELCOME TO MATH TRENER\nMENU:\n1)Start a game\n0)Exit\nAction: ";
        int action;
        cin >> action;
        system("cls");
        if (action == 0)
            break;
        else if (action == 1)
        {
            string unswer;
            while (lives > 0)
            {
                int first_number = randint(0, 100), second_number = randint(0, 100);
                cout << "\nScore: " << score << "\nLives : " << lives << endl;
                SetColor(2, 0);
                cout << first_number << " + " << second_number << " = ";
                SetColor(7, 0);
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
            if (lives <= 0 || unswer == "quit")
            {
                cout << "Lives are over\nYou lose\nScore: " << score << endl;
                FILE* file;
                fopen_s(&file, FILE_PATH, "a+b");
                fclose(file);
                SAVE save[5], new_save;
                int po = 0;
                fopen_s(&file, FILE_PATH, "r+b");
                while (fread(&save[po], sizeof(SAVE), 1, file) && po < 5)
                    po++;
                fclose(file);
                if (score > save[po-1].score)
                {
                    cout << "Enter your name ";
                    cin >> new_save.name;
                    new_save.score = score;
                    if (po < 5)
                        save[po++] = new_save;
                    else
                        save[--po] = new_save;
                    bubbleSortU(save, po);
                    fopen_s(&file, FILE_PATH, "w+b");
                    for (int i = 0; i < po; i++) {
                        fwrite(&save[i], sizeof(SAVE), 1, file);
                    }
                    fclose(file);
                }
                cout << "Top 5 leaders" << endl;
                fopen_s(&file, FILE_PATH, "r+b");
                for (int i = 0; i < po; i++)
                {
                    cout << save[i].name << " - " << save[i].score << endl;
                }
                fclose(file);
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
