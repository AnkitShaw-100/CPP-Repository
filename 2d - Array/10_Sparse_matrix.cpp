// sparse matrix : one in which the number of 0 entries is greater than the number of non-zero elements.

#include<iostream>
using namespace std;

int main (){

    int i , j , n, m;

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

    int count = 0;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(arr[i][j] == 0){
                count++;
            }
        }
    }

    if(count > (n*m)/2){
        cout << "Sparse matrix " << endl ;
    }
    else {
        cout << "Not a Sparse matrix " << endl;
    }
}