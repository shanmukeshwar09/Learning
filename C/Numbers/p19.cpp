// Maximun prime number below given number

#include <iostream>
using namespace::std;

bool isPrime(int num) {

    bool isPrime = true;

    for (int i = 2; i < num / 2; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main() {
    int num;

    cout << "Enter upper limit : ";
    cin >> num;

    for (int i = num; i > 1; i--) {
        if (isPrime(i)) {
            cout << "Highest prime number : " << i;
            break;
        }
    }

    return 0;
}