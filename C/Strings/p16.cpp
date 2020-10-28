// Sort names in alphabetical order

#include <iostream>
using namespace::std;

string tolwrcase(string name) {
    string newname;
    for (int i = 0; i < name.length(); i++) {
        if ((int) name[i] >= 65 && (int) name[i] <= 90) newname += (char) ((int) name[i] + 32);
        else newname += name[i];
    }
    return newname;
}

int main() { 

    int len;
    string temp;

    cout << "Length of the names : ";
    cin >> len;

    string str[len];

    for (int i = 0; i < len; i++) {
        cout << "Name " << i + 1 << " : ";
        cin >> str[i];
        str[i] = tolwrcase(str[i]);
    }

    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if ((int) str[i][0] > (int) str[j][0]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++) {
        cout << "Name " << i + 1 << " : " << str[i] << "\n";
    }

    return 0;
}