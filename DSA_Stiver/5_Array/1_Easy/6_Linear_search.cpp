#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
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
    
    cout << "Enter the key to search: ";
    cin >> key;
    
    int index = linearSearch(arr, n, key);
    
    if (index != -1) {
        cout << "Key found at index: " << index << endl;
    } else {
        cout << "Key not found" << endl;
    }
    return 0;
}
