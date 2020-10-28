// Number of times a letter repeated in a sentence

// A - Z => 65 - 90;
// a - z => 97 - 122

#include <iostream>
using namespace::std;

int main() {

    string str;
    

    cout << "Enter any sentence : ";
    getline(cin , str);

    int count = 0;

    int freq[52];

    for (int i = 0; i < 26; i++) freq[i] = 0;

    for (int i = 0; str[i] != '\0'; i++) {
       
        if ((int) str[i] >= 97) {
            int temp = (int) str[i];
            temp = -97 + (int) str[i];
            freq[temp]++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 1) cout << (char)(65 + i) << " : " << freq[i] << "\n";
    }

    return 0;
}