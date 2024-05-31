/*  
    * * * * *
    * * * *
    * * * 
    * *
    *  

*/


#include <iostream>
using namespace std;

int main() {
    int i,j,n;
    cout << "Enter the limit : " <<endl ;
    cin >> n ;
    for(i = n; i > 0; i--){
        for(j = 1; j <= n; j++){
            cout << "* ";    
        }
        n--;
        cout << "\n";
    }-
    return 0;
}

