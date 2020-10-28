// Find the largest and smallest word in the sentence

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

void print(string str[] , int count) {
    for (int i = 0; i < count; i++) cout << str[i] << " ";
}


int main() {

    string str;
    string hg;
    string lw;

    cout << "Input a sentence : ";
    getline(cin , str);

    int count = countWords(str);

    string words[count];

    splitWords(str , count , words);

    lw = hg = words[0];

    for (int i = 0; i < count; i++) {
        int wlen = words[i].length();
        if (wlen > hg.length()) hg = words[i];
        if (wlen < lw.length()) lw = words[i];
    }

    cout << "Lower : " << lw << " , " << "Higher : " << hg;

    return 0;
}