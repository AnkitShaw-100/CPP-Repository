//Double pointer 

#include <iostream>
using namespace std;

int main(){
    int value = 42;
    int *ptr = &value;
    int **ptrToPtr = &ptr;

    cout << "Value at ptrToPtr : " << **ptrToPtr << endl;

    return 0;
}