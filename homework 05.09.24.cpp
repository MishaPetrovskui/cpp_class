#include <iostream>
using namespace std;

int main() 
{
    int correctAnswers = 0;
    char answer;

    cout << "1. What is the solution to the equation 2x + 3 = 9?\n";
    cout << "A) x = 4\nB) x = 2\nC) x = 3\nD) x = 1\n";
    cout << "Your answer (A, B, C, D): ";
    cin >> answer;

    if (answer == 'C' || answer == 'c') {
        cout << "Correct!\n";
        correctAnswers++;
    } else {
        cout << "Wrong! The correct answer is: B) x = 3\n";
    }

    cout << "\n2. Which expression represents the factored form of x^2 - 9?\n";
    cout << "A) (x + 3)(x + 3)\nB) (x - 3)(x - 3)\nC) (x + 3)(x - 3)\nD) (x + 9)(x - 9)\n";
    cout << "Your answer (A, B, C, D): ";
    cin >> answer;

    if (answer == 'C' || answer == 'c') {
        cout << "Correct!\n";
        correctAnswers++;
    } else {
        cout << "Wrong! The correct answer is: C) (x + 3)(x - 3)\n";
    }

    cout << "\n3. If 3x + 2 = 17, what is the value of x?\n";
    cout << "A) x = 5\nB) x = 4\nC) x = 6\nD) x = 3\n";
    cout << "Your answer (A, B, C, D): ";
    cin >> answer;

    if (answer == 'A' || answer == 'a') {
        cout << "Correct!\n";
        correctAnswers++;
    } else {
        cout << "Wrong! The correct answer is: A) x = 5\n";
    }

    cout << "\n4. What is the value of x in the equation 5x - 7 = 3x + 5?\n";
    cout << "A) x = 6\nB) x = 4\nC) x = 2\nD) x = 5\n";
    cout << "Your answer (A, B, C, D): ";
    cin >> answer;

    if (answer == 'A' || answer == 'a') {
        cout << "Correct!\n";
        correctAnswers++;
    } else {
        cout << "Wrong! The correct answer is: A) x = 6\n";
    }

    cout << "\n5. Simplify the expression: 4(x - 3) + 2x?\n";
    cout << "A) 6x - 12\nB) 4x - 6\nC) 2x - 12\nD) 6x - 6\n";
    cout << "Your answer (A, B, C, D): ";
    cin >> answer;

    if (answer == 'A' || answer == 'a') {
        cout << "Correct!\n";
        correctAnswers++;
    } else {
        cout << "Wrong! The correct answer is: A) 6x - 12\n";
    }

    cout << "\nYou answered " << correctAnswers << " of 5 questions correctly.\n";

    return 0;
}
