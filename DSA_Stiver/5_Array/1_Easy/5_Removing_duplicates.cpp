#include<iostream>
using namespace std;

int remove_duplicates(int arr[],int n){
    int i=0,j;
    if (n == 0 || n == 1) {
        return n;
    }
    for(int j = 1; j < n; j++){
        // for(j = 0; j < n; j++){        
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
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
    int newSize = remove_duplicates(arr,n);
    cout << "Array after removing duplicates :";
    for(int i = 0; i < newSize; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}