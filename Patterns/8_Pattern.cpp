/*
    5 5 5 5 5
    4 4 4 4 4 
    3 3 3 3 3
    2 2 2 2 2
    1 1 1 1 1
*/

#include <iostream>
using namespace std;

int main() {
    int i,j,n;
    cout << "Enter the limit : " <<endl ;
    cin >> n ;
    for(i=n; i>0; i--){
        for(j=n; j>0; j--){
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}






