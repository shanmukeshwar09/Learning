// Print reverse of a string

#include <iostream>
using namespace::std;

int main() {

    string str;
    string newstr;

    cout << "Input a sentence : ";
    getline(cin , str);

    int len = str.length();

    for (int i = 0; i < len; i++) {
        newstr += str[len - 1 - i];
    }

    cout << "Reverse of a string = " << newstr;

    return 0;
}