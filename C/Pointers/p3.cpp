// Length of a string

#include <iostream>
using namespace::std;

int main() {

    char str[50];
    int len = 0;

    cout << "Input string : ";
    cin >> str;

    while (*(str + len) != '\0') len++;

    cout << "Length of the string = " << len;
    
    return 0;
}