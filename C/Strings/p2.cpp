// Count the number of vowels in a string

#include <iostream>
#include <string.h>
using namespace::std;

int main() {
    string str;
    int count = 0;

    cout << "Input a String : ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }

    if (count > 0) {
        cout << "There are " << count << " number of vowels";
        return 0;
    }

    cout << "There are no vowels in the given string";

    return 0;
}