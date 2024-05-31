// Reverse Array Elements

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[n], b[n];

    // Taking input
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Reversing array
    for (int i = 0; i < n; i++) {
        b[i] = a[n - 1 - i];
    }

    // Printing reversed array
    cout << "The reversed array is: ";
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
