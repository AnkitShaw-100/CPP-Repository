//Perform Linear Search for a Key Element

#include <iostream>
using namespace std;

int main() {
    int n, key, c = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[n];

    // Taking input
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the key element to be found: ";
    cin >> key;

    // Linear search 
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            c++;
        }
    }

    if (c == 1) {
        cout << "Key found once!" << endl;
    } else if (c > 1) {
        cout << "Key found multiple times!" << endl;
    } else {
        cout << "Key not found!" << endl;
    }

    return 0;
}
