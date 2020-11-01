// Sort array in ascending order

#include <iostream>
using namespace::std;

int main() {

    int len;
    double temp;

    cout << "Input length : ";
    cin >> len;

    double arr[len];

    for (int i = 0; i < len; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (i != j) {
                if (arr[i] < arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    cout << "Sorted array \n";

    cout << "Ascending Order : ";

    for (int i = 0; i < len; i++) cout << arr[i] << " ";

    cout << "\n";

    cout << "Decending Order : ";

    for (int i = len - 1; i >= 0; i--) cout << arr[i] << " ";

    return 0;
}