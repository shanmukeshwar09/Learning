// Count number of vowels in a sentence

#include <iostream>
using namespace::std;

int main() {
    string str;
    int count = 0;
    char vowels[10] = {'A', 'E' , 'I' , 'O' , 'U' , 'a' , 'e' , 'i' , 'o' , 'u'};

    cout << "Enter any sentence : ";
    getline(cin , str);

    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; j < 10; j++) if (str[i] == vowels[j]) count++;
    }

    cout << "Vowels in the sentence : " << count;

    return 0;
}