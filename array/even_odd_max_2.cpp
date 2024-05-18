/* Write a program to find the largest element in an array using a for loop and if-else statements.
   Count Even and Odd Numbers:                                                                   */

#include <iostream>
using namespace std;

int main(){
    int n,i,temp,even=0,odd=0,j;
    cout << "Enter the size of array : ";
    cin >> n;
    int a[n];
    for(i=0; i<n; i++){
         cout << "Enter the elements of array : ";
         cin >> a[i]; 
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
        if(a[j]>a[j+1]){
            temp =a[j+1];
            a[j+1]=a[j];
            a[j] = temp;
        }
    }
    cout<<"The largest element is : " <<a[n-1] <<endl;
    for(i=0; i<n; i++){
       cout << a[i] <<endl;
    }
    for(i=0; i<n; i++){
        if(a[i]%2 == 0){
            even++;
            cout<< "Even found at : " << i+1 <<endl;
        }
        else{
            odd++;
            cout<< "Odd found at : " << i+1 <<endl;
        }
    }
    cout << "Total even element found are : " << even <<endl;
    cout << "Total odd element found are : " << odd <<endl;
}