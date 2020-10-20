// Find strong numbers from 1 - 'n' numbers

#include <iostream>
using namespace::std;

int factorial (int num) {
    if (num < 1) return 1;
    return num * factorial (num - 1);
}

int main() {
    int num;
    int temp;
    int sum;

    cout << "Input upper limit : ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        sum = 0;
        int clone = i;
        while (clone > 0) {
            sum += factorial(clone % 10);
            clone /= 10;
        }
        if (i == sum) cout << i << " ";
    }

    return 0;
}