// Remove repeated characters

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

    string str;

    cout << "Input a sentence : ";
    getline(cin , str);

    int len = str.length();

    str = tolwrcase(str , len);

    int freq[26];

    for (int i = 0; i < 26; i++) freq[i] = 0;

    for (int i = 0; i < len; i++) {
        if ((int) str[i] >= 97 && (int) str[i] <= 122) freq[(int) str[i] - 97]++;
    }

    for (int i = 0; i < len; i++) {
        if ((int) str[i] <= 97 && (int) str[i] >= 122) cout << str[i];
        else if (freq[(int) str[i] - 97] > 0) {
            cout << str[i];
            freq[(int) str[i] - 97] = 0;
        }
    }

    return 0;
}