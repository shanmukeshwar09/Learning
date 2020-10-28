// Limit characters entered by the user

#include <iostream>
using namespace::std;

int main() {

    string str;
    int count;
    bool check = true;

    cout << "Enter the limit of characters : ";
    cin >> count;

    while (check) {
        cout << "Input a string : ";
        cin >> str;

        if (str.length() <= count) check = false;
        else cout << "Limit exceeded , try again \n";
    }

    return 0;
}