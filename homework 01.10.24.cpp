#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 10;
    int matrix[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < MAX_SIZE; i++) {
        for (int j = 0; j < MAX_SIZE; j++) {
            matrix[i][j] = (i + 1) * (j + 1);
        }
    }

    cout << "  ";
    for (int i = 1; i <= MAX_SIZE; i++) {
        cout << " " << i << "\t";
    }
    cout << endl;

    for (int i = 0; i <= MAX_SIZE * 3; i++) {
        cout << "---";
    }
    cout << endl;

    for (int i = 0; i < MAX_SIZE; i++) {
        cout << (i + 1) << "|";
        for (int j = 0; j < MAX_SIZE; j++) {
            cout << " " << matrix[i][j] << "\t";
            
        }
        cout << endl;
    }

    return 0;
}
