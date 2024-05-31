//Counting Even and Odd Numbers in an Array

#include <iostream>
using namespace std;

int main() {
    int n, even = 0, odd = 0;
    cout << "Enter the size of array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "Total even elements found are: " << even << endl;
    cout << "Total odd elements found are: " << odd << endl;

    return 0;
}
