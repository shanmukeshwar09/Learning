// first 2 max numbers in an array

#include <iostream>
using namespace::std;

int main() {

    int len;
    double max1 , max2;

    cout << "Input length : ";
    cin >> len;

    double arr[len];

    for (int i = 0; i < len; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> arr[i];
    }

    max1 = max2 = arr[0];

    for (int i = 0; i < len; i++) if (max1 < arr[i]) max1 = arr[i];

    for (int i = 0; i < len; i++) {
        if (max1 != arr[i]) if (max2 < arr[i]) max2 = arr[i];
    }

    cout << "Max 1 = " << max1;
    cout << "\n";
    cout << "Max 2 = " << max2;

    return 0;
}