// Print all the digits in a string

// Numeric digits in a string 0 = 48; 9 = 57;

#include <iostream>
using namespace::std;

int main() {

    string str;
    double sum = 0;

    cout << "Input a sentence : ";
    getline(cin , str);

    for (int i = 0; i < str.length(); i++) {
        if ((int) str[i] >= 48 && (int) str[i] <= 57) {
            cout << str[i] << " ";
            sum += (int) str[i] - 48;
        }
    }

    cout << " = " << sum;

    return 0;
}