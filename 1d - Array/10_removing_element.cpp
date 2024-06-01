// Removing an Element from an Array

#include <iostream>
using namespace std;

int main(){
    int n,i,key;
    cout << "Enter the size of array : " ;
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements os array :";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the value to remove from the element : ";
    cin >> key;
    
    int count = 0,index;
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            index = i;
           count++;
           break;
        }
    }

    if(count == 0){
        cout << "Entered key element was not found : " << endl;
    }
    else{
        for(i=index; i < n-1; i++){
            arr[i] = arr[i+1];
        }
        n--;
        cout << "Element removed successfully !! " << endl;
    }

    for (i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    
}