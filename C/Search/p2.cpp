// Binary search without any order

#include <iostream>
using namespace::std;

int main() {

    int len;
    double temp;
    double key;

    cout << "Input length : ";
    cin >> len;

    double arr[len];

    for (int i = 0; i < len; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "Input key : ";
    cin >> key;

    // Sort to ascending order

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (i != j) {
                if (arr[i] < arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    int start = 0 , end = len - 1;
    int mid = (start + end) / 2;

    while (start < end) {
        if (arr[mid] == key) {
            cout << key << " found at position " << mid + 1;
            return 0;
        } else {
            if (key > arr[mid]) start = mid + 1;
            else end = mid - 1;
        }
        mid = (start + end) / 2;
    }

    cout << "key not found";

    return 0;
}