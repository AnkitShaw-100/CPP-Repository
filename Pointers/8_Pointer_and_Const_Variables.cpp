// Pointer and Const Variables

#include <iostream>
using namespace std;

int main() {
    int value = 42;
    const int *ptr1 = &value; // Pointer to a const integer
    int const *ptr2 = &value; // Also a pointer to a const integer

    // Accessing the value through a const pointer
    cout << "Value through const pointer: " << *ptr1 << endl;

    // Attempting to modify the value through a const pointer (will cause a compilation error)
    // *ptr1 = 43;

    // Modifying the pointer itself (allowed)
    value = 43;
    cout << "Value through const pointer after modification: " << *ptr1 << endl;

    return 0;
}

