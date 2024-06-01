#include<iostream>
#include<climits> // Include for INT_MIN and INT_MAX
using namespace std;

int maximum_value(int num[], int n){
    int maxi = INT_MIN;  //INT_MIN value : -2147483647

    for(int i=0; i<n; i++){
        maxi = max(maxi, num[i]);
    }
    return maxi;
}


int minimum_value(int num[], int n){
    int mini = INT_MAX;  // INT_MAX value : 2147483647

    for(int i=0; i<n; i++){
        mini = min(mini, num[i]);
    }
    return mini;
}
int main (){

    int size;
    int num[100];
    cout << "Enter the size of array : ";
    cin >> size;

    for(int i=0 ; i<size; i++){
        cin >> num[i];
    }
 
    cout << " Maximum value is " << maximum_value(num, size) << endl;
    cout << " Minimum value is " << minimum_value(num, size) << endl;


    return 0;

}