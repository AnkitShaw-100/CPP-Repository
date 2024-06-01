//First and last occurance

#include<iostream>
using namespace std;

int first_occurance(int arr[], int size, int key){
    int start = 0 , end = size-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end){
        if(arr[mid] == key ){
            ans = mid;
            end = mid - 1;
        }    
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1; 
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int last_occurance(int arr[], int size, int key){
    int start = 0 , end = size-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end){
        if(arr[mid] == key ){
            ans = mid;
            start = mid + 1;  // Corrected from end = mid + 1;
        }    
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1; 
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int n ;
    cout << "Enter the size of array: ";
    cin >> n ;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];  // Corrected from arr[i] = n;
    }
    int key;
    cout << "Enter the key element: " ;
    cin >> key ;
    int first = first_occurance(arr, n , key);  // Corrected from arr[n]
    cout << "First occurrence: " << first << endl;
    int last = last_occurance(arr, n , key);  // Corrected from arr[n]
    cout << "Last occurrence: " << last << endl;
}
