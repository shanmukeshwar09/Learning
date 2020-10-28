// Reverse words in a string

#include <iostream>
using namespace::std;

string rev(string str) {
    string newstr;
    int len = str.length();
    for (int i = 0; i <= len; i++) newstr += str[len - 1 - i];
    return newstr;
}

string split(int start , int end , string str) {
    string newstr;
    for (int i = start; i <= end; i++) newstr += str[i];
    return newstr;
}

int main() {

    string str;
    string revstr;
    int temp = 0;

    cout << "Input a sentence : ";
    getline(cin , str);

    int len = str.length();

    // Count number of words

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) if (str[i] == ' ') count++ ;

    string words[++count];

    for (int i = 0 , j = 0; i <= len; i++) {
        if (str[i] == ' ') {
            words[j] = rev(split(temp , i - 1 , str));
            j++;
            temp = i + 1;
        } else if (i == len - 1) words[j] = rev(split(temp , i , str));
    }

    for (int i = 0; i < count; i++) cout << words[i] << " ";

    return 0;
}