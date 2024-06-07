#include<iostream>
using namespace std;
int insertion_sort(int arr[], int n){
    int temp,i,j;
    for(i = 1; i <= n -1; i++){
        int j = i;
        while(j>0 && arr[j-1]> arr[j]){
            temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    cout << "The sorted array is :";
    for(i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
int main(){
    int n;
    cout << "Enter the size of array : " ;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : ";\
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    insertion_sort(arr, n);
    return 0;
}