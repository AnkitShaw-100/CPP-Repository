#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Marks obtained : ";
    cin >> n;
    
    if (n > 100 || n < 0) {
        cout << "Invalid Input";
        return 0;
    }
    if (n > 95) {
        cout << "A+";
    }
    else if (n >= 90) {
        cout << "A";
    }
    else if (n >= 85) {
        cout << "B+";
    }
    else if (n >= 80) {
        cout << "B";
    }
    else if (n >= 75) {
        cout << "C+";
    }
    else if (n >= 70) {
        cout << "C";
    }
    else if (n >= 65) {
        cout << "D+";
    }
    else if (n >= 60) {
        cout << "D";
    }
    else {
        cout << "Fail";
    }

    return 0;
}
