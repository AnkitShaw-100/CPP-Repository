#include <iostream>
using namespace std;

long long fact = 1;
int count = 1;

void print(int n) {
    if (n == 0 || n == 1) {
        cout << "Factorial is : " << 1;
        return;
    }
    if (count == n) {
        cout << "Factorial is : " << fact;
        return;
    }
    count++;
    fact = fact * count;
    print(n);
}

int main() {
    int n;
    cout << "Enter the limit : " << endl;
    cin >> n;
    print(n);
    return 0;
}
