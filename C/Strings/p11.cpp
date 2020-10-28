// Search substring

#include <iostream>
using namespace::std;

bool search(int start , int length , string str , string substr) {
    bool success = false;
    for (int i = start; i < start + length; i++) success = str[i] == substr[i - start];
    return success;
}

int main() {

    string str;
    string substr;
    bool flag = false;

    cout << "Enter a string : ";
    getline(cin , str);

    cout << "Enter substring to search : ";
    cin >> substr;

    int substrlen = substr.length();
    char start = substr[0];

    for (int i = 0; i < str.length() - substrlen; i++) {
        if (str[i] == start) flag = search(i , substrlen , str , substr);
    }

    if (flag) {
        cout << "Search successful";
        return 0;
    }

    cout << "Search unsuccessful";

    return 0;
}