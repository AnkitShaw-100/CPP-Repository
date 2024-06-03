#include <iostream>
using namespace std;

int main(){
    int SIZE = 3;
    int arr[SIZE] = {10,50,100};
    int *ptrArr[SIZE];

    for(int i = 0; i<SIZE; i++){
        ptrArr[i] = &arr[i];
    }

    for(int i = 0; i < SIZE; i++){
        cout << "Value at  prtArr["<< i <<"] : " << *ptrArr[i] << endl;
    } 
    
    return 0;

}
