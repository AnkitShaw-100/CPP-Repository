#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start =  mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    } 
    return -1;
}

int main(){
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {3, 5, 7, 9, 11};

    int evenIndex = binary_search(even, 6, 6);
    cout << "Index of 6 is " << evenIndex << endl;

    int oddIndex = binary_search(odd, 5, 5);
    cout << "Index of 5 is " << oddIndex << endl;

    return 0 ;
}
