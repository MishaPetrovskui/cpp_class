#include <iostream>
using namespace std;

int main() 
{
    // Задание 1
    /*
	int a,sum = 0;
    cout << "Input a: ";
    cin >> a;

    for (int i = a; i <= 500; ++i) {
        sum += i;
    }

    cout << "Sum chisel " << a << " do 500: " << sum << endl;
    */
    // Задание 2
    /*
    int x, y, z = 1;
    cout << "Input x: ";
    cin >> x;
    cout << "Input y: ";
    cin >> y;
    for (int i = 0; i < y; ++i) {
        z *= x;
    }
    cout << "Umn chisel " << x << " v stepen " << y << " = " << z << endl;
    */
    // Задание 3
    /*
    int sum = 0, count = 0;

    for (int i = 1; i <= 1000; ++i) {
        sum += i;
        ++count;
    }

    double average = sum / count;

    cout << "Seredne arifmetichne vid 1 do 1000: " << average << endl;
    */
    // Задание 4
    /*
    int a;
    cout << "Vedi znachenie a: ";
    cin >> a;

    if (a >= 1 || a <= 20) {
        long long product = 1;
        for (int i = a; i <= 20; ++i) {
            product *= i;
        }
        cout << "Dobutok chicla ot " << a << " do 20: " << product << endl;
    }
    else {
        cout << "Ne v diapozone ot 1 do 20." << endl;
    }
    */
    // Задание 5
    /*
    int k;
    cout << "Vedit chislo: ";
    cin >> k;

    for (int i = 2; i <= 10; ++i) {
        cout << k << " x " << i << " = " << k * i << endl;
    }
    */

    return 0;
}
