// Calculate the Sum of Each Element in a Matrix

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int a[3][3];

    // Input of the array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    // Sum of each element
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += a[i][j];
        }
    }

    cout << "The sum of each element is: " << sum << endl;

    return 0;
}
