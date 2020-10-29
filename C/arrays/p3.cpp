// Maximum and Minimum of given numbers

#include <iostream>
using namespace::std;

int main() {

    int len;
    double min;
    double max;

    cout << "Input length : ";
    cin >> len;

    double arr[len];

    for (int i = 0; i < len; i++) {
        cout << "element : " << i + 1 << " : ";
        cin >> arr[i];
    }

    max = min = arr[0];

    for (int i = 0; i < len; i++) {
        if (min < arr[i]) min = arr[i];
        else if (max > arr[i]) max = arr[i];
    }

    cout << "Minimum : " << min;
    cout << "\n";
    cout << "Maximum : " << max;

    return 0;
}