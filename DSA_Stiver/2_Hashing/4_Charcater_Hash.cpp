#include <bits/stdc++.h>
using namespace std;

int main() {
    // Prompt the user to enter a string
    string s;
    cout << "Enter a string: ";
    cin >> s;

    // Precompute frequencies of all characters
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    // Prompt the user to enter the number of queries
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    // Handle each query
    while (q--) {
        char c;
        cout << "Enter a character to query: ";
        cin >> c;

        // Fetch and print the frequency of the character
        cout << "Frequency of '" << c << "' is: " << hash[c] << endl;
    }

    return 0;
}
