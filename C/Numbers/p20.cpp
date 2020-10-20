// Prime numbers between two numbers

#include <iostream>
using namespace::std;

bool isPrime(int num) {
    bool prime = true;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            prime = false;
            break;
        }
    }

    return prime;
}

int main() {
    int lower;
    int upper;

    cout << "Enter lower limit : ";
    cin >> lower;

    cout << "Enter upper limit : ";
    cin >> upper;

    for (int i = lower; i <= upper; i++) {
        if (isPrime(i)) cout << i << " ";
    }

    return 0;
}