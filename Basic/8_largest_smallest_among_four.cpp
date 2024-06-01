// Largest and smallest among 4

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    
    cout << "Enter four integers: ";
    cin >> a >> b >> c >> d;

    int largest = a;
    int smallest = a;

    if (b > largest) {
        largest = b;
    } else if (b < smallest) {
        smallest = b;
    }

    if (c > largest) {
        largest = c;
    } else if (c < smallest) {
        smallest = c;
    }

    if (d > largest) {
        largest = d;
    } else if (d < smallest) {
        smallest = d;
    }

    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}
