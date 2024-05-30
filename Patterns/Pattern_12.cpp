/*  
   1 2 3 4 5
   1 2 3 4
   1 2 3
   1 2
   1   

*/


#include <iostream>
using namespace std;

int main() {
    int i,j,n;
    cout << "Enter the limit : " <<endl ;
    cin >> n ;
    for(i = n; i > 0; i--){
        for(j = 1; j <= n; j++){
            cout << j << " ";    
        }
        n--;
        cout << "\n";
    }
    return 0;
}

