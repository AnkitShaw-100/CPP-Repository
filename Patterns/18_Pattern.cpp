/*  
        1
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1

*/

#include <iostream>
using namespace std;

int main() {
    int n, i, j, k, value;
    cout << "Enter the limit: ";
    cin >> n;

    for (i = 0; i <= n; i++) {
        for (k = 1; k <= (n - i); k++) {
            cout << " ";
        }
        value = 1; 
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                value = 1;
            } else {
                value = value * (i - j + 1) / j;
            }
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}
