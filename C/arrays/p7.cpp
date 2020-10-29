// Insert an element at a desired position

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

    int pos;

    cout << "Input position between " << 1 << " and " << len << " : ";
    cin >> pos;

    pos -= 1;

    if (!(pos >= 0 && pos <= len -1)) {
        cout << "Invalid Input";
        return 0;
    }

    double newele;

    cout << "Input an element : ";
    cin >> newele;

    double newarr[len + 1];

    for (int i = 0 , j = 0; i <= len; i++) {
        if (i == pos) {
            newarr[i] = newele;
        } else {
            newarr[i] = arr[j];
            j++;
        }
    }

    cout << "Updated array\n";

    for (int i = 0; i <= len; i++) cout << newarr[i] << " ";

    return 0;
}