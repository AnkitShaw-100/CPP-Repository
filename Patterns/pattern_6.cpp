/*
   1 2 3 4 5
   6 7 8 9 10
   11 12 13 14 15
   16 17 18 19 20 
   21 22 23 24 25

*/
#include <iostream>
using namespace std;

int main() {
    int i,j,n,k=1;
    cout << "Enter the limit : " <<endl ;
    cin >> n ;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << k << " " ;
            k++;
        }
        cout << "\n";
    }
    return 0;
}
