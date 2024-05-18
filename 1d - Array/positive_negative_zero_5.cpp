#include <iostream>
using namespace std;

int main(){

    // Taking  input
    int n,i,j,sum = 0,avg;
    cout << "Enter the size of array : " ;
    cin >> n;
    int a[n],b[n];
    for(i=0; i<n; i++){
        cout << "Enter the elements of array : ";
        cin >> a[i];
    }

    // Count Positive, Negative, and Zero Elements:
    for(i=0; i<n; i++){
        if (a[i]>0){
            cout << "Positive element at : " << i+1 << endl;
        }
        
        if (a[i]<0){
            cout << "Negative element at : " << i+1 << endl;
        }
           
        if (a[i]==0){
            cout << "0 at : " << i+1 << endl;        
        }
    }
}