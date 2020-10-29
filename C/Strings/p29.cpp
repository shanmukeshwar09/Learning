// Number of charachers required to make a string palindrome

#include <iostream>
using namespace::std;

string reverse(string str , int len) {
    string temp;
    for (int i = len - 1; i >= 0; i--) temp += str[i];
    return temp;
}

int main() {

    string str;

    cout << "Input a string : ";
    cin >> str;

    int strlen = str.length();

    string res = str;

    
    if (strlen % 2 == 0) res += reverse(str , strlen);
    else res += reverse(str , strlen - 1);

    cout << "Result : " << res;

    return 0;
}