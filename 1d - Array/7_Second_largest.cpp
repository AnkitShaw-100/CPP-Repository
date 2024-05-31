// Find the Second Largest Element in an Array

#include <iostream>
using namespace std;

int main() {
    int n, temp;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[n];

    // Taking input
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sorting the array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "The second largest element is: " << a[n - 2] << endl;

    // Displaying the sorted array
    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
