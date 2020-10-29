// ASCII values of each character

#include <iostream>
using namespace::std;

int main() {

    string str;
    
    cout << "Input a sentence : ";
    getline(cin , str);

    int strlen = str.length();

    for (int i = 0; i < strlen; i++) {
        cout << str[i] << " : " << (int) str[i] << "\n";
    }

    return 0;
}