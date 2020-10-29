// Delete a specific inteher in an array

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

    double del;

    cout << "Enter element to delete : ";
    cin >> del;

    bool operation = false;

    for (int i = 0; i < len; i++) {
        if (arr[i] == del) {
            operation = true;
            for (int j = i; j < len - 1; j++) {
                arr[j] = arr[j + 1];
            }
            break;
        }
    }

    if (operation) {
        cout << "Deleted\nUpdated Array : ";
        for (int i = 0; i < len - 1; i++) {
            cout << arr[i] << " ";
        }
    }
    else cout << "Element not found";

    return 0;
}