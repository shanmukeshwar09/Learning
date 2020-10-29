// Find first small letter in string

#include <iostream>
using namespace::std;

int main() {

    string str;

    cout << "Input a sentence : ";
    getline(cin , str);

    for (int i = 0; i < str.length(); i++) {
        if ((int) str[i] >= 97) {
            cout << "First lowercase character : " str[i];
            break;
        }
    }

    return 0;
}