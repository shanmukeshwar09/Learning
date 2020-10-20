// Print all the prime numbers within the given numbers

#include <iostream>

using namespace::std;

bool isPrime(int num) {

    bool check = true;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            check = false;
            break;
        }
    }
    return check;
}

int main() {
    int num;

    cout << "Enter the upper limit : ";
    cin >> num;

    for (int i = 2; i <= num; i++) {
        if (isPrime(i)) cout << i << " ";
    }

    return 0;
}