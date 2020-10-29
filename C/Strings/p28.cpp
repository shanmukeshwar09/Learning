// Find all the words ended with given character

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

int main() {

    string str;

    cout << "Input a sentence : ";
    getline(cin , str);

    int strlen = str.length();

    int count = countWords(str , strlen);

    string arr[count];

    splitToWords(str , strlen , arr);

    char c;

    cout << "Input a character to check : ";
    cin >> c;

    for (int i = 0; i < count; i++) {
        if (arr[i][arr[i].length() - 1] == c) cout << arr[i] << " ";
    }

    return 0;
}