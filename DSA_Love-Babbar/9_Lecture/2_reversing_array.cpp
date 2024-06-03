//Revrsing an array using function

#include<iostream>
using namespace std;

// Function to reverse an array
void reverse(int arr[], int n) {
    int start = 0, end = n - 1;

    // Loop to swap elements from start to end
    while (start <= end) {
        swap(arr[start], arr[end]); // Swap the elements
        start++; // Move start index forward
        end--;   // Move end index backward
    }
}

// Function to print an array
void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print each element
    }
    cout << endl;
}

int main() {
    // Initializing two arrays
    int arr[6] = {40, 50, 60, 70, 80, 90};
    int brr[5] = {99, 100, 101, 102, 103};

    // Reversing the entire array 'arr'
    reverse(arr, 6);
    // Reversing only the first 3 elements of array 'arr'
    reverse(arr, 3);
    // Reversing the entire array 'brr'
    reverse(brr, 5);
    // Reversing only the first 2 elements of array 'brr'
    reverse(brr, 2);

    // Printing the arrays after reversing
    cout << "Array 'arr' after reversing:" << endl;
    printarray(arr, 6); // Print the entire array 'arr'
    cout << "First 3 elements of array 'arr' after reversing again:" << endl;
    printarray(arr, 3); // Print the first 3 elements of array 'arr'
    cout << "Array 'brr' after reversing:" << endl;
    printarray(brr, 5); // Print the entire array 'brr'
    cout << "First 2 elements of array 'brr' after reversing again:" << endl;
    printarray(brr, 2); // Print the first 2 elements of array 'brr'

    return 0;
}
