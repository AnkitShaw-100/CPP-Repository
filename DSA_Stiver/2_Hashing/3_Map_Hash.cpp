#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precompute the frequency of each number using a map
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // Debug: Print the map to verify the counts
    cout << "Frequency map:" << endl;
    for (auto it : mp) {
        cout << it.first << " -> " << it.second << endl;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    while (q--) {
        int number;
        cout << "Enter a number to query: ";
        cin >> number;

        // Check if the number exists in the map
        if (mp.find(number) != mp.end()) {
            cout << "Frequency of '" << number << "' is: " << mp[number] << endl;
        } else {
            cout << "Number '" << number << "' not found in the array." << endl;
        }
    }

    return 0;
}
