// Search for a Key Element in a Matrix

#include <iostream>
using namespace std;

int main() {
    int a[3][3], key, c = 0;

    // Input of the array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    // Searching for a key element
    cout << "Enter the key element to be found: ";
    cin >> key;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] == key) {
                c++;
            }
        }
    }

    if (c == 1) {
        cout << "Key found!" << endl;
    } else if (c > 1) {
        cout << "Key found multiple times!" << endl;
    } else {
        cout << "Key not found!" << endl;
    }

    return 0;
}
