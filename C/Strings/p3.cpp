// Count the number of characters in the string

#include <iostream>
using namespace::std;

int main() {

    string str;
    int count = 0;

    cout << "Input a string : ";
    cin >> str;

    while (str[count] != '\0') {
        count++;
    }

    cout << "Number of characters in " << str << " = " << count;

    return 0;
}