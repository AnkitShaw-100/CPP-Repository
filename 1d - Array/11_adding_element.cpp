// Inserting an Element into an Array

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
    
    
    cout << "Entered elements of array  is: " << endl;
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << "Enter the index you want to remove and add new element : " << endl;
    cin >> index;

    cout << "Enter the key element to enter : " << endl;
    cin >> key;

    int count = 0;
    for(int i = 0; i < n; i++){
        if(i == index-1){
           count++;
           arr[i] = key;
           break;
        }
    }

    if(count == 0){
        cout << "Index found : " << endl;
    }
    else{
        cout << "Element added successfully !! " << endl;
    }

    for (i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    
}