// check whether all the characters in string 1 present in string 2

#include <iostream>
using namespace::std;

string tolwrcase(string str , int len) {
    string newstr;
    for (int i = 0; i < len; i++) {
        if ((int) str[i] >= 65 && (int) str[i] <= 90) newstr += (char) ((int) str[i] + 32); 
        else newstr += str[i];
    }
    return newstr;
}

int main() {

    string s1 , s2;
    bool check = false;

    cout << "Enter String 1 : ";
    cin >> s1;

    int s1len = s1.length();

    cout << "Enter String 2 : ";
    cin >> s2;

    int s2len = s2.length();

    for (int i = 0; i < s1len; i++) {
        check = false;
        for (int j = 0; j < s2len; j++) {
            if (s1[i] == s2[j]) {
                check = true;
                break;
            }
        }
        if (!check) {
            check = false;
            break;
        }
    }

    if (check) cout << "Passed";
    else cout << "Failed";

    return 0;
}