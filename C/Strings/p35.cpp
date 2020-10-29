// Remove all the common elements from string 2

#include <iostream>
using namespace::std;

int main() {

    string s1 , s2;

    cout << "Input string 1 : ";
    cin >> s1;

    cout << "Input string 2 : ";
    cin >> s2;

    int s1len = s1.length();
    int s2len = s2.length();

    for (int i = 0; i < s1len; i++) {
        for (int j = 0; j < s2len; j++) {
            if (s1[i] == s2[j]) {
                s2[j] = '\0';
            }
        }
    }

    cout << "Updated String : " << s2;

    return 0;
}