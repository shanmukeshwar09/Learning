// Print largest and smallest palindrome

#include <iostream>
using namespace::std;

int countWords(string str) {
    int count = 0;
    for (int i = 0; i <= str.length(); i++) if (str[i] == ' ') count ++;
    return ++count;
}

void splitWords(string str , int count , string words[]) {

    int temp = 0;
    int len = str.length();

    for (int i = 0 , j = 0; i < len; i++) {

        if (str[i] == ' ') {
            for (int k = temp; k < i; k++) *(words + j) += str[k];
            temp = i + 1;
            j++;
        }
        else if (i == len - 1) for (int k = temp; k <= i; k++) *(words + j) += str[k];
    }
}

bool palindrome(string word) {
    bool check = true;
    int len = word.length();
    for (int i = 0; i < len / 2; i++) {
        if (word[i] != word[len - 1 - i]) check = false;
    }
    return check;
}

void print(string str[] , int count) {
    for (int i = 0; i < count; i++) cout << str[i] << " ";
}

int main() {

    string str;

    cout << "Input a sentence : ";
    getline(cin , str);

    int count = countWords(str);
    string words[count];

    splitWords(str , count , words);

    string smallPalindrome;
    string largePalindrome;

    for (int i = 0; i < count; i++) {
        if (palindrome(words[i])) {
            if (smallPalindrome.length() == 0 && largePalindrome.length() == 0) {
                largePalindrome = smallPalindrome = words[i];
            } else {
                if (words[i].length() < smallPalindrome.length()) smallPalindrome = words[i];
                if (words[i].length() > largePalindrome.length()) largePalindrome = words[i];
            }
        }
    }

    if (largePalindrome.length() > 0) cout << "Large palindrome = " << largePalindrome;
    cout << " , ";
    if (smallPalindrome.length() > 0) cout << "Small Palindrome = " << smallPalindrome;

    return 0;
}