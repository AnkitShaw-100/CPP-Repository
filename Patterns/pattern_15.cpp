/*  
    * * * * *
    * * * *
    * * *
    * *
    *
    *
    * *
    * * *
    * * * *
    * * * * * 

*/


#include <iostream>
using namespace std;

int main() {
    int i,j,n;
    cout << "Enter the limit : " <<endl ;
    cin >> n ;
    int m = n;
    for(i = n; i > 0; i--){
        for(j = 1; j <= n; j++){
            cout << "* ";    
        }
        n--;
        
        cout << "\n";
    }
    for(i = 1; i <= m; i++){
        for(j = 1; j <= i; j++){
            cout << "* ";    
        }
        cout << "\n";
    }
    return 0;
}