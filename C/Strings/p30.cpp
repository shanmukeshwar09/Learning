// Anagrams in strings

#include <iostream>
using namespace::std;

int main() {

    string str1 , str2;

    cout << "Input a string 1 : ";
    cin >> str1;

    cout << "Input a string 2 : ";
    cin >> str2;

    int str1len = str1.length();
    int str2len = str2.length();

    if (str1len != str2len) {
        cout << "Failed";
        return 0;
    }

    for (int i = 0; i < str1len; i++) {
        for (int j = 0; j < str2len; j++) {
            if (str1[i] == str2[j]) {
                str1[i] = '\0';
                str2[j] = '\0';
                break;
            }
        }
    }

    if (str1 == str2) cout << "Passed";
    else cout << "Failed";

    return 0;
}