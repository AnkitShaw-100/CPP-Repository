/*   * * * * *
      * * * * *
       * * * * *
        * * * * * 
         * * * * *   
*/


#include <iostream>
using namespace std;

int main() {
    int i,j,k,n;
    cout << "Enter the limit : " <<endl ;
    cin >> n ;
    for(i=0; i<n; i++){
        for(k=0; k<i; k++){
        cout << " ";
        }
        for(j=0; j<n; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}