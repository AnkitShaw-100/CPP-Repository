#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    // Print the original array using pointer arithmetic
    for(int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << *(ptr + i) << " at address " << (ptr + i) << endl;
    }

    // Increment the pointer
    ptr++;
    cout << "\nAfter incrementing the pointer:" << endl;
    cout << "Element at new pointer: " << *ptr << " at address " << ptr << endl;

    // Decrement the pointer
    ptr--;
    cout << "\nAfter decrementing the pointer:" << endl;
    cout << "Element at new pointer: " << *ptr << " at address " << ptr << endl;

    // Adding an integer to the pointer
    ptr = ptr + 3;
    cout << "\nAfter adding 3 to the pointer:" << endl;
    cout << "Element at new pointer: " << *ptr << " at address " << ptr << endl;

    // Subtracting an integer from the pointer
    ptr = ptr - 2;
    cout << "\nAfter subtracting 2 from the pointer:" << endl;
    cout << "Element at new pointer: " << *ptr << " at address " << ptr << endl;

    return 0;
}
