#include <iostream>
using namespace std;

void fibonacci(int N, int a = 0, int b = 1) {
    if (N <= 0) {
        return;
    }

    cout << a << " ";

    // Calculate the next Fibonacci number
    int next = a + b;

    // Recursive call with updated values
    fibonacci(N - 1, b, next);
}

int main() {
    int N;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> N;

    cout << "Fibonacci Series up to " << N << " terms: ";
    fibonacci(N);

    return 0;
}
