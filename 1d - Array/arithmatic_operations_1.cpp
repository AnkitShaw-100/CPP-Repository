#include <iostream>
using namespace std;

int main(){
    int n,i,sum = 0, product = 1, subtraction = 0;
    cout << "Enter size of array : ";
    cin >> n;
    int a[n];
    for(i=0; i<n; i++){
        cout << "Enter the elements of array : " << endl;
         cin >> a[i]; 
    }
    // Arithmatic Operation
    for(i=0; i<n; i++){
       sum = sum + a[i]; 
       product = product * a[i];
    }
    subtraction = product - sum;
    cout << "The subtraction of addition and product of elements of array is : " << subtraction ;
    return 0; 
}
