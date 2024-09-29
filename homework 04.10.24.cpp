#include <iostream>
using namespace std;

int stepen(int a, int b)
{
    int result = 1;
    while (b > 0) {
        result *= a;
        --b;
    }
    return result;
}

int suma(int a, int b)
{
    int result = 0;
    for (int i = a; i <= b; i++) {
        result += i;
    }
    return result;
}

int isPerfect(int number) {
    int sum = 0;
    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }
    if (sum == number) {
        return number;
    }
    else {
        return 0;
    }
}

void card(char rank, char suit) {
    cout << " _________ " << endl;
    cout << "|         |" << endl;
    cout << "|   " << rank << "     |" << endl;
    cout << "|         |" << endl;
    cout << "|    " << suit << "    |" << endl;
    cout << "|         |" << endl;
    cout << "|_________|" << endl;
}

bool LuckyNumber(int number) {
    if (number < 100000 || number > 999999) {
        return false;
    }
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < 3; ++i) {
        sum1 += number % 10;
        number /= 10;
    }

    for (int i = 0; i < 3; ++i) {
        sum2 += number % 10;
        number /= 10;
    }
    return sum1 == sum2;
}

int main() {
    //Задание 1
    /*
    int a, b;
    cout << "Int osnvu: ";
    cin >> a;
    cout << "Int stepen: ";
    cin >> b;
    cout << stepen(a, b);
    */
    //Задание 2
    /*
    int a, b;
    cout << "Int min diapazon: ";
    cin >> a;
    cout << "Int max diapozon: ";
    cin >> b;
    cout << suma(a, b);
    */
    //Задание 3
    /*
    int a, b;
    cout << "Int min meja intervalu: ";
    cin >> a;
    cout << "Int max meja intervalu: ";
    cin >> b;

    cout << endl;

    for (int i = a; i <= b; ++i) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
    */
    //Задание 4
    /*
    char rank, suit;
    cout << "Int kartu(naprimer, 'A', '2', '3', ..., 'K'): ";
    cin >> rank;
    cout << "Int mast karti(naprimer, '♠', '♥', '♦', '♣'): ";
    cin >> suit;
    card(rank, suit);
    */
    //Задание 5
    /*
    int number;
    cout << "Int shestiznachnoe chislo: ";
    cin >> number;

    if (LuckyNumber(number)) {
        cout << number << " yeto shaslive chislo." << endl;
    }
    else {
        cout << number << " yeto neshaslive chislo." << endl;
    }
    */
    return 0;
}
