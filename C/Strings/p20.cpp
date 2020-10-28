// Circulate a sentence

#include <iostream>
using namespace::std;

int main() {

    string str;

    cout << "Input a sentence : ";
    getline(cin , str);

    int len = str.length();

    int count;

    cout << "Enter number of times sentence should circulate : ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        char temp = str[len - 1];
        for (int i = 0; i < len - 1; i++) str[len - 1 - i] = str[len - 2 - i];
        str[0] = temp;
    }
    
    cout << "Circulated sentence : " << str;

    return 0;
}