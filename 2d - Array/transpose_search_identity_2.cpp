#include <iostream>
using namespace std;

int main(){
    int i,j;
    int a[3][3],b[3][3];
    
    //Input of Frist array
    cout << "Enter the elements of array : " << endl;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cin >> a[i][j]; 
        }
    }
    // Transpose of a Matrix
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            b[i][j] = a[j][i]; 
        }
    }
    // Printing the Tranpose
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout << b[i][j]; 
        }
        cout << endl;
    }
    


    //Searching key
    int key, c=0;
    cout << "Enter the key element to be found ";
    cin >> key;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(a[i][j]==key){
            c++;
            }   
        }
    } 
    if(c==1){
        cout << "Key found !!"<<endl;
    }
    if(c > 1){
        cout << "Key found multiple times !!"<<endl;
    }
    if(c < 0){
        cout << "Key not found !!" <<endl;
    }
    

    
    
    //Input 2nd array 
    cout << "Enter the elements of array : " << endl;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cin >> b[i][j]; 
        }
    }
    int s,k=0;
    //Checking identity
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if (i == j) {
                // Check diagonal elements are 1
                if (b[i][j] != 1) {
                    k++;
                }
                } 
                else {
                // Check non-diagonal elements are 0
                    if (b[i][j] != 0) {
                        k++;
                    } 
                }
            }
    }
    if(k == 0){
        cout << "Identity matrix" <<endl;
    }
    else{ 
        cout << "Not a Identity matrix" <<endl;
    }   
    return 0;
}