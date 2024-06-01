//Lower triangle 

#include<iostream>
using namespace std;

int main(){
    
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
            if(i<j){
                if(arr[i][j] != 0){
                 count ++;
                }
            }
        }
    }
    int sum = 0;
    if(count >= 1){
        cout << "Not a lower triangle " << endl ;
    }
    else{
        cout << "A lower triangle " << endl;
        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
            sum = sum + arr[i][j];
            }
        }
    }

    cout << "The sum of elements of a lower traingle matrix is : " <<sum << endl;

}