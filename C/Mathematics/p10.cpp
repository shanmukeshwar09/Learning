// Check whether the given number is a power of the integer 

#include <iostream>

using namespace::std;

int main() {
    int num;
    int base;
    int clone;
    bool isChecked = false;

    cout << "Input an integer : ";
    cin >> num;

    if (num == 0 || num == 1) {
        cout << "0 and 1 can't be checked !";
        return 0;
    }

    clone = num;

    cout << "Input an integer to check perfect power : ";
    cin >> base;

    while (num > 1) {
        if (num % base == 0) isChecked = true; break;
        num /= base;
    }

    if (isChecked) cout << clone << " is a perfect power of " << base;
    else cout << clone << " is not a perfect power of " << base;

    return 0;

}