// Split a sentence with the given characher

#include <iostream>
using namespace::std;

int main() {

    string str;
    char ch;

    cout << "Input a sentence : ";
    getline(cin , str);

    cout << "Enter a character to split : ";
    cin >> ch;

    string s1 , s2;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            for (int j = 0; j < i; j++) s1 += str[j];
            for (int j = i; j < str.length(); j++) s2 += str[j];
            break;
        }
    }

    cout << "String 1 = " << s1;
    cout << "\n";
    cout << "String 2 = " << s2;

    return 0;
}