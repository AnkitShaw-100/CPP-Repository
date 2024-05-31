/*  
    0 
    1 0 
    0 1 0 
    1 0 1 0 
    0 1 0 1 0 
    1 0 1 0 1 0   

*/


#include <iostream>
using namespace std;

int main() {
    int i,j,n;
    cout << "Enter the limit : " <<endl ;
    cin >> n ;
    for(i = n; i > 0; i--){
        for(j = i; j <= n; j++){
            //cout << j ;
            if(j % 2 == 0){
                cout << "0 ";
            }
            else{
                cout << "1 ";
            }
                
        }
        cout << "\n";
    }
    return 0;
}

