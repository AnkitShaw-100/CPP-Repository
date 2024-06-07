#include<iostream>
using namespace std;
int sorting(int arr[], int n){
    int temp,i,j;
    for(i = 0; i < n-1; i++){
        for(j = 0; j <n-i-1; j++){
            if(arr[j] > arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }

    cout << "The sorted array is : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;    
}
int main(){
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sorting(arr,n);
    return 0 ;
}