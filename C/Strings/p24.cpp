// Consecutive vowel words in a sentence

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

bool vowelExists(string str) {

    int len = str.length();
    bool check1 = false;
    bool check2 = false;

    char vowels[10] = {'A', 'E' , 'I' , 'O' , 'U' , 'a' , 'e' , 'i' , 'o' , 'u'};

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 10; j++) {
            if (str[i] == vowels[j]) {
                check1 = true;
                if (i != len - 1) {
                    for (int k = 0; k < 10; k++) {
                        if (str[i + 1] == vowels[k] ) {
                            check2 = true;
                            break;
                        }
                    }
                    if (check2) break;
                }
            }
        }
        if (check1 && check2) break;
        else {
            check1 = false;
            check2 = false;
        }
    }
    return check1 && check2;
}

int main() {

    string str;

    cout << "Input a sentence : ";
    getline(cin , str);

    // int strlen = str.length();

    int count = countWords(str);

    string words[count];

    splitWords(str , count , words);

    for (int i = 0; i < count; i++) {
        if (vowelExists(words[i])) cout << words[i] << "\n";
    }

    return 0;
}