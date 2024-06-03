#include<iostream>
using namespace std;

int main(){
    int i ,size;
    cout << "Enter the size of array : ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of array :";
    for(i=0; i<size; i++){
        cin >> arr[i];
    }
    int start = 0, end = size -1;
    int mid = (start + end) /2;
    while (start < end ){
        if(arr[mid] < arr[mid+1]){
            start =  mid + 1;
        }
        else{
            end = mid;
        }
        mid = (start + end)/2;
    }
    cout << "Peak element index : " << start << endl;
    return 0;
}
