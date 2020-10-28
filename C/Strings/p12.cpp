// Comparision of two strings

#include <iostream>
using namespace::std;

int main() {

    string str1 , str2;

    cout << "Input string 1 : ";
    cin >> str1;

    cout << "Input string 2 : ";
    cin >> str2;

    if (str1.length() > str2.length()) cout << "String 1 is greater";
    else if (str1.length() < str2.length()) cout << "String 2 is greater";
    else cout << "Both strings are equal";

    return 0;
}