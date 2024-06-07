#include<iostream>
using namespace std;

int finding_max(int arr[],int n){
    int temp,i,j;

    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                }
            }
        }
   cout << "The largest element: " << arr[n - 1] << endl;
}
int main(){
    int i,n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enetr the element of array : ";
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    finding_max(arr,n);
    return 0;
}