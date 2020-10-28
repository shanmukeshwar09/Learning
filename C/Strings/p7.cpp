// Upper to lower case and lower to Upper case

#include <iostream>
using namespace::std;

int main() {

    string str;
    string newstr;

    cout << "Enter a sentence : ";
    getline (cin , str);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((int) str[i] >= 97 && (int) str[i] <= 122) {
            newstr += (char) ((int) str[i] - 32);
        } else if ((int) str[i] >= 65 && (int) str[i] <= 90) {
            newstr += (char) ((int) str[i] + 32);
        } else {
            newstr += str[i];
        }
    }

    cout << "Updated String : " << newstr;

    return 0;
}