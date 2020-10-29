// Average of an array

#include <iostream>
using namespace::std;

int main() {

    int len;
    double sum = 0;

    cout << "Input length : ";
    cin >> len;

    double arr[len];

    for (int i = 0; i < len; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Average : " << (double) (sum / len);

    return 0;
}