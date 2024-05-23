#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key) {
    int start = 0, mid, end = n - 1;

    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array in sorted order: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key: " << endl;
    cin >> key;

    int result = binary_search(arr, n, key);
    if (result != -1)
        cout << "Key found at index: " << result << endl;
    else
        cout << "Key not found" << endl;

    return 0;
}
