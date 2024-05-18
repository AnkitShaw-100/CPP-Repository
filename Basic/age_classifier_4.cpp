#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 0 || age > 100) {
        cout << "Invalid age." << endl;
    } else if (age < 13) {
        cout << "You are a child." << endl;
    } else if (age < 20) {
        cout << "You are a teenager." << endl;
    } else if (age < 65) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a senior." << endl;
    }
    return 0;
}
