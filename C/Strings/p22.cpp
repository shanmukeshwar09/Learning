// Replace substring

#include <iostream>
using namespace::std;

int checkforstr(string str , string substr , int strlen , int substrlen) {

    bool check = false;

    int start = 0;

    for (int i = 0; i < strlen; i++) {
            if (str[i] == substr[0]) {
                check = true;
                start = i;
                for (int j = 1; j < substrlen; j++) {
                    if (str[i + j] != substr[j]) {
                        check = false;
                        break;
                    }
                }
                if (check) break;
            }
    }
    if (check) return start;
    return 0;
}

int main() {

    string str;
    string substr;
    string repstr;

    cout << "Input a sentence : ";
    getline(cin , str);

    cout << "Enter a substring to replace with : ";
    getline(cin , substr);

    int strlen = str.length();
    int substrlen = substr.length();

    int start = checkforstr(str , substr , strlen , substrlen);

    if (start == 0) {
        cout << "Substring not found";
        return 0;
    }

    cout << "Enter replaced string : ";
    getline(cin , repstr);

    int repstrlen = repstr.length();

    int newstrlen = strlen - substrlen + repstrlen;
    string newstr[newstrlen];
    for (int i = 0 , j = 0 , diff = 0; i < newstrlen; i++ , j++) {
        if (i == start) {
            diff = substrlen - 1;
            for (int k = 0; k < repstrlen; k++) {
                newstr[i] = repstr[k];
                if (k != repstrlen - 1) i++;
            }
        } else newstr[i] = str[j + diff];
    }
    for (int i = 0; i < newstrlen; i++) cout << newstr[i];

    return 0;
}