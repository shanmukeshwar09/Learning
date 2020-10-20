// Factorial of a number using recursion

#include <iostream>
using namespace::std;

int factorial(int num) {
    if (num == 1) return 1;
    return num * factorial (num -1);
}

int main() {
    int num;

    cout << "Enter an integer : ";
    cin >> num;

    cout << "Factorial of " << num << " : " << factorial(num);
    return 0;
}