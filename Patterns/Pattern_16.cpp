/*  
    * * * * * * * * * 
    * * * *   * * * *
    * * *       * * *
    * *           * *
    *               *
    *               *
    * *           * *
    * * *       * * *
    * * * *   * * * *
    * * * * * * * * * 

*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the limit: ";
    cin >> n;

    // Upper part
    for (int i = 0; i <= n / 2; i++) {
        // Left side stars
        for (int j = 0; j < n / 2 - i; j++) {
            cout << "* ";
        }
        // Spaces in the middle
        for (int j = 0; j < 2 * i; j++) {
            cout << "  ";
        }
        // Right side stars
        for (int j = 0; j < n / 2 - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower part
    for (int i = n / 2; i >= 0; i--) {
        // Left side stars
        for (int j = 0; j < n / 2 - i; j++) {
            cout << "* ";
        }
        // Spaces in the middle
        for (int j = 0; j < 2 * i; j++) {
            cout << "  ";
        }
        // Right side stars
        for (int j = 0; j < n / 2 - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

    
