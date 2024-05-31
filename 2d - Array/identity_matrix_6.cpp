// Check if a Matrix is an Identity Matrix

#include <iostream>
using namespace std;

int main() {
    int b[3][3], k = 0;

    // Input of the array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> b[i][j];
        }
    }

    // Checking if it is an identity matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                // Check diagonal elements are 1
                if (b[i][j] != 1) {
                    k++;
                }
            } else {
                // Check non-diagonal elements are 0
                if (b[i][j] != 0) {
                    k++;
                }
            }
        }
    }

    if (k == 0) {
        cout << "It is an Identity matrix" << endl;
    } else {
        cout << "It is not an Identity matrix" << endl;
    }

    return 0;
}
