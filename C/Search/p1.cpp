// Linear search

#include <iostream>
using namespace::std;

int main() {

    int len;

    cout << "Input length : ";
    cin >> len;

    double arr[len];

    for (int i = 0; i < len; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> arr[i];
    }

    double key;

    cout << "Input key : ";
    cin >> key;

    for (int i = 0; i < len; i++) {
        if (arr[i] == key) {
            cout << key << " found at position " << i + 1;
            return 0;
        }
    }

    cout << "key not found";

    return 0;
}