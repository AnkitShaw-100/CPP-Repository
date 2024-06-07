#include <iostream>
using namespace std;

int rotate(int arr[], int n) {
    
    int temp = arr[n - 1];  // Store the last element
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];  // Shift elements to the right
    }
    arr[0] = temp;  // Move the last element to the first position

    cout << "The new array after rotation is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main() {

    int n, key;
    cout << "Enter the size of array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotate(arr, n);
    return 0;
}
