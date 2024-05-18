#include <iostream>
using namespace std;

int main(){
    int i,j,sum =0,sum2=0,pro=1;
    int a[3][3],b[3][3],c[3][3];
    
    //Input of Frist array
    cout << "Enter the elements of array : " << endl;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cin >> a[i][j]; 
        }
    }
    
    //Sum of each elements of array 
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            sum = sum + a[i][j]; 
        }
    }
    cout << "The sum of each element is : " <<sum <<endl;
    
    
    //Sum of 2 different matrix
    //Input of second array
    cout << "Enter the elements of 2nd array : " << endl;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cin >> b[i][j]; 
        }
    }
    //Addition
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
          c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "The sum of 2 given matrix is : " <<endl;
    //Priting the 3rd array
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
          cout << c[i][j];
        }
        cout << endl;
    }

    
    //Product 2 different matrix
    int product[3][3] = {0};
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
          c[i][j] = a[i][j] * b[i][j];
        }
    }
    cout << "The product of 2 given matrix is : " <<endl;
    //Priting the 3rd array
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
          cout << c[i][j];
        }
        cout << endl;
    }  
}