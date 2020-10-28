// Find the first capital letter in the string

#include <iostream>
using namespace::std;

int main() {

    string str;

    cout << "Input a sentence : ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if ((int) str[i] >= 65 && (int) str[i] <= 90) {
            cout << "First capital letter : " << str[i];
            break;
        }
    }

    return 0;
}