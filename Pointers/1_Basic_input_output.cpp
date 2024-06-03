#include<iostream>
using namespace std;

int main(){

    int i,n;
    cout << "Enter a value : "<< endl;
    cin >> n;
   
    int *ptr = &n;
    
    //Address of n is 
    cout << "Address of n is : " <<endl;
    cout << ptr << " " << endl << endl ;

    //Value of n using pointer
    cout << "Value of n is : " <<endl;
    cout << *ptr << " " << endl << endl;
    

    // Address of ptr  
    // cout << "Value of ptr is : " <<endl;
    // cout << &ptr << " " << endl;
    

    // Printing  the address of array 
    int arr[n];
    cout << "Enter the elements of array : " << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int *ptr1 = &arr[0];
    int *ptr2 = &arr[1];
    int *ptr3 = &arr[2];
    int *ptr4 = &arr[3];
    int *ptr5 = &arr[4];
    
    cout << "Address  of 1st index of array is : " << ptr1 << endl;
    cout << "Address  of 2nd index of array is : " << ptr2 << endl;
    cout << "Address  of 3rd index of array is : " << ptr3 << endl;
    cout << "Address  of 4th index of array is : " << ptr4 << endl;
    cout << "Address  of 5th index of array is : " << ptr5 << endl;

    
    
    // Printing the value of array usinf ptr made
    cout << "Value  of 1st index of array is : " << *ptr1 << endl;
    cout << "Value  of 2nd index of array is : " << *ptr2 << endl;
    cout << "Value  of 3rd index of array is : " << *ptr3 << endl;
    cout << "Value  of 4th index of array is : " << *ptr4 << endl;
    cout << "Value  of 5th index of array is : " << *ptr5 << endl;

    // Priting using for loop
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr6 = a;  // Pointer to the first element of the array
    int m = 5;       // Size of the array

    // Printing the address of each element in the array using a loop
    for(i = 0; i < m; i++) {
        cout << (ptr6 + i) << endl;
    }
    // Printing each element in the array using a loop
    for(i = 0; i < m; i++) {
        cout << *(ptr6 + i) << endl;
    }

    return 0;

}