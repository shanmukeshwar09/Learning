// Swap two strings

#include <iostream>
using namespace::std;

int main() {

    string str1 , str2 , temp;

    cout << "Input String 1 : ";
    cin >> str1;

    cout << "Input String 2 : ";
    cin >> str2;

    temp = str1;
    str1 = str2;
    str2 = temp;

    cout << "String 1 : " << str1;
    cout << "\n";
    cout << "String 2 : " << str2;

    return 0;
}