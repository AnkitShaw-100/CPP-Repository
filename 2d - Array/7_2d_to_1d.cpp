// Flattening a 2D Array into a 1D Array

#include<iostream>
using namespace std;

int main(){
    int i,j,n,m;
    cout << "Enter the row of matrix : " ;
    cin >> n;

    cout << "Enter the coloumn of matrix : ";
    cin >> m;

    int arr[n][m];

    cout << "Enter the elements of array : " << endl;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Entered array is : " << endl;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl ;
    }

    int c = n*m;

    int brr[c];
    int index = 0;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            brr[index] = arr[i][j];
            index++;
        }
    }
    
    cout <<  "1 - D array is : " << endl ;
    for(i=0; i<c; i++){
        cout << brr[i] << " ";
    }

    return 0;
}