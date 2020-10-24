// Series 1/1! + 2/2! + 3/3! + ..... N/N!

#include <iostream>
using namespace::std;

int factorial (int num) {
    if (num < 1) return 1;
    return num * factorial(num - 1);
}

int main() {
    int num;
    double sum = 0;

    cout << "Enter an Integer : ";
    cin >> num;

    for (int i = 1; i <= num; i++) sum += (double) i / factorial (i);

    cout << "Result : " << sum;

    return 0;
}