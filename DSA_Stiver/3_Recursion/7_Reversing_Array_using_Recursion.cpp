#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }

    // Swap the first and last elements
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursive call with incremented start and decremented end
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse the array
    reverseArray(arr, 0, n - 1);

    // Print the reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
