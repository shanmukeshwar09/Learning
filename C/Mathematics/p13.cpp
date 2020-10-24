// Multiply two equations

#include <iostream>

using namespace::std;

void print(double arr[] , int size) {
    for (int i = 0; i <= size; i++) {
        cout << arr[i] << "x^" << size - i << " + ";
    }
}

int main(int argc, char const *argv[]) {
    int len1 , len2;

    cout << "Enter the highest degree of eq1 : ";
    cin >> len1;

    double arr1[len1];

    for (int i = 0; i <= len1; i++) {
        cout << "cooefficient of " << len1 - i << " : ";
        cin >> arr1[i];
    }

    cout << "Enter the highest degree of eq2 : ";
    cin >> len2;

    double arr2[len2];

    for (int i = 0; i <= len2; i++) {
        cout << "cooefficient of " << len1 - i << " : ";
        cin >> arr2[i];
    }

    double arr3[len1 * len2];

    if (len1 > len2) {
        int diff = len1 - len2;
        for (int i = 0; i <= len1; i++) {
            for (int j = 0; j <= len2; j++) {
                arr3[i * j] = arr2[i] * arr1[j];
            }
        }
    }

    print(arr3 , len1 * len2);

    return 0;
}
