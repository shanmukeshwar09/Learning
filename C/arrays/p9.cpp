// Merge 2 arrays in sorted order

#include <iostream>
using namespace::std;

int main() {

    int len1 , len2;
    double temp;

    cout << "Input length 1 : ";
    cin >> len1;

    cout << "Input length 2 : ";
    cin >> len2;

    double arr1[len1] , arr2[len2];

    cout << "Input Array 1 elements \n";

    for (int i = 0; i < len1; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> arr1[i];
    }

    cout << "Input Array 2 elements \n";

    for (int i = 0; i < len2; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> arr2[i];
    }

    int len3 = len1 + len2;

    double arr3[len3];

    for (int i = 0; i <= len1; i++) {
        if (i == len1) {
            for (int j = i , k = 0; j < len3; j++ , k++) {
                arr3[j] = arr2[k];
            }
        } else {
            arr3[i] = arr1[i];
        }
    }

    for (int i = 0; i < len3; i++) {
        for (int j = 0; j < len3 - 1; j++) {
            if (i != j) {
                if (arr3[i] < arr3[j]) {
                    temp = arr3[i];
                    arr3[i] = arr3[j];
                    arr3[j] = temp;
                }
            }
        }
    }

    for (int i = 0; i < len3; i++) cout << arr3[i] << " ";

    return 0;
}