// Checking for a palindrome

#include <iostream>
using namespace::std;

string tolwcase(string str) {
    string newstr;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((int) str[i] < 97) newstr += (char) ((int) str[i] + 32);
        else newstr += str[i];
    }
    return newstr;
}

int main() {

    string str;
    bool flag = true;

    cout << "Input a string : ";
    cin >> str;

    str = tolwcase(str);

    int len = str.length();

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = false;
            break;
        } 
    }

    if (flag) {
        cout << "Given String is a palindrome";
        return 0;
    }

    cout << "Given string is not a palindrome";

    return 0;
}