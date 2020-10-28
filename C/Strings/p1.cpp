// To know whether the character is vowel or not

#include <iostream>
#include <string.h>
using namespace::std;

int main() {

    char ch;

    cout << "Enter a Character : ";
    cin >> ch;
    
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is an vowel";
        return 0;
    }

    cout << ch << " is not an vowel";

    return 0;
}