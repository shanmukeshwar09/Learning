// Print array elements in reverse order using swap method

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

    for (int i = 0; i < len / 2; i++) {
        temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }

    for (int i = 0; i < len; i++) cout << arr[i] << " ";

    return 0;
}