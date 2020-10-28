// Concatinate two strings

#include <iostream>
using namespace::std;

int main() {

    string str1 , str2;

    cout << "Input string 1 : ";
    getline(cin , str1);

    cout << "Input string 2 : ";
    getline(cin , str2);

    cout << "Concatinated strings = " << str1 + str2;

    return 0;
}