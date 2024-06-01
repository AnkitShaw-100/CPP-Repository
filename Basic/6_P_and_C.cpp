// Permutation and Combination 


#include <iostream>
using namespace std;

int combination() {
    int n, r;
    cout << "Enter the n for Combination C(n,r) : ";
    cin >> n;
    cout << "Enter the r for Combination C(n,r) : ";
    cin >> r;

    int x = n - r;

    // Factorial of n!
    int fact_of_n = 1;
    for (int i = 1; i <= n; i++) {
        fact_of_n *= i;
    }

    // Factorial of r!
    int fact_of_r = 1;
    for (int i = 1; i <= r; i++) {
        fact_of_r *= i;
    }

    // Factorial of (n - r)!
    int fact_of_x = 1;
    for (int i = 1; i <= x; i++) {
        fact_of_x *= i;
    }

    // Answer
    int c = fact_of_n / (fact_of_r * fact_of_x);

    return c;
}

int permutation() {
    int n, r;
    cout << "Enter the n for Permutation P(n,r) : ";
    cin >> n;
    cout << "Enter the r for Permutation P(n,r) : ";
    cin >> r;

    int x = n - r;

    // Factorial of n!
    int fact_of_n = 1;
    for (int i = 1; i <= n; i++) {
        fact_of_n *= i;
    }

    // Factorial of (n - r)!
    int fact_of_x = 1;
    for (int i = 1; i <= x; i++) {
        fact_of_x *= i;
    }

    int b = fact_of_n / fact_of_x;

    return b;
}

int main() {
    int ans_one = combination();
    cout << "The answer of combination is : " << ans_one << endl;
    int ans_two = permutation();
    cout << "The answer of permutation is : " << ans_two << endl;
}
