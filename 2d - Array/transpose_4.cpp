// Transpose of a Matrix

#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3];

    // Input of the array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    // Transpose of the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            b[i][j] = a[j][i];
        }
    }

    // Printing the transpose
    cout << "The transpose of the matrix is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
