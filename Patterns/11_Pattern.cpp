/*  
      1
     2 2
    3 3 3
   4 4 4 4 

*/


#include <iostream>
using namespace std;

int main() {
    int i,j,k,n;
    cout << "Enter the limit : " <<endl ;
    cin >> n ;
    for(i = 1; i < n; i++){
        for(k = n-1; k > i ; k--){
            cout << " ";     
        }
        for(j = 1; j <= i ; j++){
            cout << i << " " ;     
        }
        cout << "\n";
    }
    return 0;
}
