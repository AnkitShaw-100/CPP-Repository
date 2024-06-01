#include<iostream>
using namespace std;

int pivot_ans(int arr[], int n){

    int start = 0;
    int end = n - 1;
    int mid =  start + (end - start)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start =  mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main(){
    int arr[5] = {99,87,87,67,899};
    cout << "Pivot is " << pivot_ans(arr, 5) << endl;
}