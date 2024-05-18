/* Reverse the elements of an array using a for loop.
Calculate the Average:*/

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
    
    //  Average
    for(i=0; i<n; i++){
        sum = sum + a[i];
        avg = sum / n;
    }
    cout << "The average is : " << avg << endl;
    
    // Reversing array  
    for(i=0; i<n; i++){
        b[i] = a[n-1-i];
    }
    for(i=0; i<n; i++){
        cout << "The reversed array is : " << b[i] << endl; 
    }
}