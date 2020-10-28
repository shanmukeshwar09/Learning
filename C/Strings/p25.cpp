// Letter repeated more number of times

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

    int strlen = str.length();

    str = tolwrcase(str , strlen);

    int freq[26];

    for (int i = 0; i < 26; i++) freq[i] = -1;

    for (int i = 0; i < strlen; i++) {
        if ((int) str[i] >= 97 && (int) str[i] <= 122) {
            freq[((int) str[i]) - 97]++;
        }
    }

    int higher = -1;
    int index;

    for (int i = 0; i < 26; i++) {
        if (higher == -1 && freq[i] > -1) {
            higher = freq[i];
            index = i;
        } else if (freq[i] > higher) {
            higher = freq[i];
            index = i;
        }
    }

    if (higher == -1 || higher == 0) cout << "No highest characters";
    else cout << "Highest letter repeated : " << (char) (index + 97);

    return 0;
}