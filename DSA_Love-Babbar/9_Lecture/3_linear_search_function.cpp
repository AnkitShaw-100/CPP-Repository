#include<iostream>
using namespace std;

int search(int  arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main (){
    int arr[10] = {101,102,103,104,105,106,107,108,109,110};

    cout << "Enter the search element : " << endl;
    int key;
    cin >> key;
    int found = search (arr, 10, key);

    if( found ){
        cout << "Key is present !! " << endl;
    }
    else{
        cout << "Key is absent !! " << endl;
    }

    return 0;
}