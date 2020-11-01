// Arrange rows and colums in sorted order

#include <iostream>
using namespace::std;

int main() {

    int r , c;
    double temp;

    cout << "Input Rows : ";
    cin >> r;

    cout << "Input Columns : ";
    cin >> c;

    int len = r * c;
    double arr[len];

    cout << "Input elements \n";

    for (int i = 0; i < len; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> arr[i];
    }

    // Sorting rows

    for (int i = 0; i < len; i += r) {
        for (int j = 0; j < r; j++) {
            if (i != j) {
                if (arr[i + j] < arr[i + j + 1]) {
                    temp = arr[i + j];
                    arr[i + j] = arr[i + j + 1];
                    arr[i + j + 1] = temp;
                }
            }
        }
    }

    for (int i = 0; i < len; i += r) {
        for (int j = 0; j < r; j++) {
            cout << arr[i + j] << " ";
        }
        cout << "\n";
    }

    return 0;
}