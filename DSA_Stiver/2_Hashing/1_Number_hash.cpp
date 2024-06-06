#include <bits/stdc++.h>
using namespace std;

int main() {
    // Variable to store the input size of the array
    int n;
    cout << "Enter the size: " << endl;
    cin >> n;

    // Array to store the elements
    int arr[n];
    cout << "Enter the elements of the array (0-12): " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        // Check if the input element is within the valid range (0-12)
        if (arr[i] < 0 || arr[i] > 12) {
            cout << "Invalid input. Please enter numbers between 0 and 12." << endl;
            return 1;  // Exit the program if input is invalid
        }
    }

    // Array to store the frequency of each number
    int hash[13] = {0};

    // Loop through the array and count the frequency of each number
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    // Variable to store the number of queries
    int q;
    cout << "Enter the number of queries: " << endl;
    cin >> q;

    // Loop to handle each query
    while(q--) {
        int number;
        cout << "Enter a number: " << endl;
        cin >> number;

        // Check if the query number is within the valid range (0-12)
        if (number < 0 || number > 12) {
            cout << "Invalid input. Please enter numbers between 0 and 12." << endl;
        } else {
            cout << "Frequency of '" << number << "' is: " << hash[number] << endl;
        }
    }

    return 0;
}
