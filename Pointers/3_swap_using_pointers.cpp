//Swap using pointers

#include <iostream>
using namespace std;

void swapNumbers(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int a = 5, b = 10;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swapNumbers(&a, &b);

    cout << "\nAfter swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
