#include <iostream>
using namespace std;

int main() {
    int i, j, n;

    cout << "Enter the size of the pattern (odd number): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Please enter an odd number." << endl;
        return 1;
    } else {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if ((i >= 0 && j == ((n / 2) + 1)) || (i == ((n / 2) + 1) && j >= 0)) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
