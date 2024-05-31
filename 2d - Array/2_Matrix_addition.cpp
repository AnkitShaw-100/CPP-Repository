// Perform Matrix Addition

#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3], c[3][3];

    // Input of the first array
    cout << "Enter the elements of the first array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    // Input of the second array
    cout << "Enter the elements of the second array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> b[i][j];
        }
    }

    // Matrix Addition
    cout << "The sum of the two matrices is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
