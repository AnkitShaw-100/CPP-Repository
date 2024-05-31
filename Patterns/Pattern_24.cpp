/*
          *
         * *
        *   *
       *     *
      *       *
     *         *
    *           *
     *         *
      *       *
       *     *
        *   *
         * *
          *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the limit: ";
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }

        // Stars and inner spaces
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Spaces
        for (int j = n; j > i; j--) {
            cout << " ";
        }

        // Stars and inner spaces
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
