/*  
       *   *
        * *
         *
        * *
       *   *

*/

#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cout << "Enter the limit: ";
    cin >> n;

    // for (i = 1; i <= n; i++) {
    //     for (j = 1; j <= n; j++) {
    //         if ( i == j || (i+j) == n+1) {
    //             cout << "*";
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if ( i == j || (i+j) == n-1) {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
