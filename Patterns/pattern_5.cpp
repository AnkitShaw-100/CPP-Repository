/*
   a
   b b
   c c c
   d d d d
   e e e e e

*/
#include <iostream>
using namespace std;

int main() {
    char i,j;
    int n;
    cout << "Enter the limit : " <<endl ;
    cin >> n ;
    if(n<27 && n>1){
        for(i=97; i<(97+n); i++){
            for(j=97; j<=i; j++){
                cout << i << " ";
            }
            cout << "\n";
        }
    }
    else{
    return 0;
    }
}