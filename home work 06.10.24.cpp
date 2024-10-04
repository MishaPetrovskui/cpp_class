#include <iostream>
#include <time.h>
using namespace std;

void remove(int array[], int& size) {
    for (int i = 0; i < size; ) {
        if (array[i] % 2 != 0) {
            array[i] = array[size - 1];
            --size;
        }
        else {
            i++;
        }
    }
}

int randint(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

int main() {
    srand(time(0));
    const int MAX_SIZE = 100;
    int array[MAX_SIZE];
    int size;

    cout << "Input size array (max " << MAX_SIZE << "): ";
    cin >> size;

    for (int i = 0; i < size; i++) {
        array[i] = randint(0,100);
    }
    for (int i = 0; i < size; i++) {
        cout << array[i] << ", ";
    }
    cout << "\b\b." << endl;
    remove(array, size);

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
