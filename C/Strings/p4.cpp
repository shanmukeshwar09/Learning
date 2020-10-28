// Number of words in a sequence

#include <iostream>
using namespace::std;

int main() {

    int count = 0;
    string str;

    cout << "Enter any String : ";
    getline(cin , str);

    for (int i = 0; str[i] != '\0'; i++) if (str[i] == ' ') count++;

    cout << "Number of words = " << ++count;

    return 0;
}