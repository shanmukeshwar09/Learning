// Combinations nCr = n! / r!(n−r)!
// Permutations nPr = n! / (n-r)!

#include <iostream>

using namespace::std;


int factorial(int num) {
    if (num < 1) return 1;
    return num * factorial(num - 1);
}

int main() {
    int n , r;

    cout << "Enter the value of n : ";
    cin >> n;

    cout << "Enter the value of r : ";
    cin >> r;

    int nfact = factorial(n);
    int rfact = factorial(r);
    int n_minus_r_fact = factorial(n - r);

    cout << "Permutaions = " << nfact / n_minus_r_fact;
    cout << "\n";
    cout << "Combinations = " << nfact / (rfact * n_minus_r_fact);

    return 0;
}
