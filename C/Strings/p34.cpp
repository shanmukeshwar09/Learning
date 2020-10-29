// Display all palindrome and non-palindrome words in a sentence

#include <iostream>
using namespace::std;

int countWords(string str , int len) {
    int count = 0;
    for (int i = 0; i < len; i++) if (str[i] == ' ') count++;
    return ++count;
}

void splitToWords(string str , int count , string words[]) {

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

bool isPalindrome(string str) {
    bool check = true;
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            check = false;
            break;
        }
    }
    return check;
}

int main() {

    string str;

    cout << "Input a sentence : ";
    getline(cin , str);

    int strlen = str.length();

    int wordslen = countWords(str , strlen);

    string words[wordslen];

    splitToWords(str , wordslen , words);

    cout << "Palindrome words : \n";

    for (int i = 0; i < wordslen; i++) {
        if (isPalindrome(words[i])) cout << words[i] << " ";
    }

    cout << "\nnon-Palindrome words : \n";

    for (int i = 0; i < wordslen; i++) {
        if (!isPalindrome(words[i])) cout << words[i] << " ";
    }

    return 0;
}