#include <iostream>
using namespace std;

int selection_sort(int arr[], int n){
    int min,i,j,temp;
    for(i = 0; i < n; i++){
        min = i;
        for(j = i+1; j < n; j++) {
        if(arr[j]<arr[min]){
           min = j;
        }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
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
    selection_sort(arr,n);
    return 0 ;
}