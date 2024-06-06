#include <iostream>
using namespace std;

int count = 1;

void print(int n){
    if(n == count )
    return;
    n--;
    cout << n << endl;
    print(n);
}
int main(){
    int n;
    cout << "Enter the limit : "<<endl;
    cin >> n;
    print(n);
    return 0;
}