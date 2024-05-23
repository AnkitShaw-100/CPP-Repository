/*
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
*/

#include <iostream>
using namespace std;

int main() {
    int i,j,n;
    cout << "Enter the limit : " <<endl ;
    cin >> n ;
    for(i=n; i>0; i--){
        for(j=n; j>0; j--){
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}






