#include <iostream>
using namespace std;

void print(int arr[], int rev[], int n) {
    for (int i = 0; i < n; i++) {
        rev[n - i - 1] = arr[i];
    }
    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) {
        cout << rev[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n], rev[n];
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    print(arr, rev, n);
    return 0;
}
