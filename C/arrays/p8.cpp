// remove repeated elements in an array

#include <iostream>
using namespace::std;

void merge(double arr[] , int pos , int len , int duplicate) {
    for (int i = pos; i < len; i++) {
        arr[i] = arr[i + 1];
    }
    arr[len - duplicate] = 0;
}

int main() {

    int len;
    int duplicate = 0;

    cout << "Input length : ";
    cin >> len;

    double arr[len];

    for (int i = 0; i < len; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (i != j) {
                if (arr[i] == arr[j]) {
                    merge(arr , i , len , duplicate);
                    duplicate ++;
                }
            }
        }
    }

    cout << "Duplicates : " << duplicate << "\n";

    for (int i = 0; i < len - duplicate; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}