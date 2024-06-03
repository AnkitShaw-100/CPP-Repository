// Pointer to Pointer Arithmetic

#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr1 = arr; // Pointer to the first element of the array
    int **ptr2 = &ptr1; // Pointer to a pointer

    // Accessing elements using pointer to pointer
    cout << "Value at **ptr2: " << **ptr2 << endl; // Prints 10

    // Moving the pointer to the next element
    (*ptr2)++; // Move to the next integer
    cout << "Value at **ptr2 after increment: " << **ptr2 << endl; // Prints 20

    return 0;
}
