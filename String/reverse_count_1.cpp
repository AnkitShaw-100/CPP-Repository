// Reverse a String
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str;
    int  i , n=0; 
    cout << "Enter a String : "; 
    cin >> str;

    //Counting the letters
    for (char c : str) {
        if (isalpha(c)) {
            n++;
        }
    }
    cout << "The number of letters are : " << n << endl;


    //Printing the String
    cout << "The string is : " << str <<endl;

    //Printing the reverse String
    reverse(str.begin(), str.end());
    cout << "The reversed string is : " << str << endl;

    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << "The sentence is: " << str << endl;

    
}

