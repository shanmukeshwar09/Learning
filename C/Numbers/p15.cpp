// Check whether the given number is a strong number

#include <iostream>
using namespace::std;

int factorial (int num) {
    if (num < 1) return 1;
    return num * factorial(num - 1);
}

int main() {
    int num , numClone;
    int temp;
    int sum = 0;

    cout << "Input an integer : ";
    cin >> num;

    numClone = num;

    while (num > 0) {
        sum += factorial(num % 10);
        num /= 10;
    }

    cout << numClone;

    if (numClone == sum) cout << " is a strong number";
    else cout << " is not a strong number";

    return 0;
}