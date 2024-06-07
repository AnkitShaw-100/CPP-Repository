#include<iostream>
using namespace std;

int finding_max(int arr[],int n){
    int max, sec_max,i;
    max = arr[0]; 
    for(i=1; i<n; i++){
        if(arr[i]>max){
            sec_max = max;
            max = arr[i];
        }
    }
   cout << "The second largest element: " << sec_max << endl;
}
int main(){
    int i,n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enetr the element of array : ";
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    finding_max(arr,n);
    return 0;
}