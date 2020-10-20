// Check whether given number is armstrong or not

#include <iostream>

using namespace::std;

int main() {
    int num , numClone;
    int temp;
    int result = 0;

    cout << "Enter an integer : ";
    cin >> num;

    numClone = num;

    while (num > 0) {
        temp = num % 10;
        result += temp * temp * temp;
        num /= 10;
    }

    cout << numClone;

    if (result == numClone) cout << " is an armstrong number";
    else cout << " is not an armstrong number";
}