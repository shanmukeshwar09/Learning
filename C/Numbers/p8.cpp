// To know whether the given is prime or not

#include <iostream>

using namespace::std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Enter an integer : ";
    cin >> num;

    cout << num;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    if(isPrime) cout << " is a prime number";
    else cout << " is not a prime number";
}