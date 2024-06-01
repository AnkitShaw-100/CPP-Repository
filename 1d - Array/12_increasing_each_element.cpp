// Implement a program to find the increase each element in an array.

#include<iostream>
using namespace std;

int main(){
    int i,n,index,key;

    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array : "<< endl;
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter the number you want to add to each element of the array : " <<endl ;
    cin >> key;
    int brr[n];
    for(i=0; i<n; i++){
        brr[i] = arr[i] + key;
    }

    cout << "New array is: "<< endl;

    for(i=0; i<n; i++){
        cout << brr[i] << " ";
    }
   
   return 0;
}