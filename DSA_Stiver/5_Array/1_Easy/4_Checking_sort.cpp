#include<iostream>
using namespace std;

int checking_sort(int arr[],int n){
    int min,i,c=0;
    min = arr[0]; 

    //Ascending order
    for(i=1; i<n; i++){
        if(min<arr[i] ){

            c++;
            // max = arr[i];
            }

    }

    if(c==n-1)
        cout << " The array is sorted in ascending order ";
    else{
    int max = arr[0];
    int d=0;
    //Descending order
    for(i = 1; i < n; i++){
        if(max > arr[i]){
            d++;
            // max = arr[i];
        }
    }
    if(d==n-1)
        cout << " The array is sorted in Descending order ";
    else{
         cout << "The array is not sorted ";
    }
    }
    
    
}
int main(){
    int i,n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of array : ";
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }   
    checking_sort(arr,n);
    return 0;
}