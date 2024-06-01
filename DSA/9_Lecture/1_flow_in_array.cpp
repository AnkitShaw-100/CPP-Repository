// Program flow in array 
#include<iostream>
using namespace std;

void update(int arr[], int n){
    cout << endl << "Inside the function : " << endl;

    //Updating the array
    arr[0] = 120;

    //Priting the array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
        cout << endl;
    }
    cout << "Going back to main function ---> " << endl;
}

int main() {
    int arr[3] = {98, 99, 100};
    update(arr,3);

    //Printing the uodated array
    cout << endl << "Printing in the main function : " << endl;

    for(int i=0; i<3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}