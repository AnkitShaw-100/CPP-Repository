#include <iostream>
using namespace std;

int main(){

    // Taking  input
    int n,i,j,sum = 0,temp;
    cout << "Enter the size of array : " ;
    cin >> n;
    int a[n],b[n];
    for(i=0; i<n; i++){
        cout << "Enter the elements of array : ";
        cin >> a[i];
    }
    
    // Second largest
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
        if(a[j]>a[j+1]){
            temp =a[j+1];
            a[j+1]=a[j];
            a[j] = temp;
        }
    }
    cout<<"The second largest element is : " <<a[n-2] <<endl;

    //Checking the sorted array
    cout << "Sorted array" << endl;
    for(i=0; i<n; i++){
       cout << a[i] <<endl;
    }

    int key , c=0;
    cout << "Enter the key element to be found ";
    cin >> key;  


    //Linear search 
    for(i=0; i<n; i++){
        if(a[i]==key){
            c++;
        }
    }
    if(c==1){
        cout << "Key found !!";
    }
    if(c > 1){
        cout << "Key found multiple times !!";
    }
    if(c < 0){
        cout << "Key not found !!";
    }

    return 0;
}