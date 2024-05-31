// Calculate Average of Array Elements

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, avg;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[n];

    // Taking input
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    // Calculating average
    avg = sum / n;
    cout << "The average is: " << avg << endl;

    return 0;
}
