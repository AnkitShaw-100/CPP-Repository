//Bubble Sort


#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{   
    int temp;
    for(int i = 1; i<n; i++) {
        for(int j =0; j<n-i; j++) {
            if(arr[j] < arr[j+1]) {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }   
    }
}

int main(){

    int i,n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];

    for(i=0; i<n; i++){
        cin >> arr[i];
    }
    
    bubbleSort(arr, n);

    cout << "The sorted array in descending order : " <<endl ;

    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
