#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() {
    // Variable to store the input string
    string s;
    cout << "Enter a string :" << endl;
    cin >> s;

    // Array to store the frequency of each character (a-z)
    int hash[26] = {0};

    // Loop through the string and count the frequency of each character
    for(int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    // Variable to store the number of queries
    int q;
    cout << "Enter the number of queries:" << endl;
    cin >> q;

    // Loop to handle each query
    while(q--) {
        char c;
        // Uncomment the line below if you want to prompt for each character input
        cout << "Enter a character : " << endl;
        cin >> c;

        cout << "Frequency of '" << c << "' is: " << hash[c-'a'] << endl;
    }
    return 0;
}
