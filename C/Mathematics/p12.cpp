// Add two equations

#include <iostream>

using namespace::std;

void print(double arr[] , int size) {
    for (int i = 0; i <= size; i++) {
        cout << arr[i] << "x^" << size - i;
        if (i != size) cout << " + ";
    }
}

int main() {
    int deg1;
    int deg2;

    cout << "Highest degree of equation 1 : ";
    cin >> deg1;

    double arr1[deg1];

    cout << "Coefficients of equation 1 \n";

    for (int i = 0; i <= deg1; i++) {
        cout << "degree of " << deg1 - i << " : ";
        cin >> arr1[i];
    }

    print(arr1 , deg1);

    cout << "\nHighest degree of equation 2 : ";
    cin >> deg2;

    double arr2[deg2];

    cout << "Coefficients of equation 2 \n";

    for (int i = 0; i <= deg2; i++) {
        cout << "degree of " << deg2 - i << " : ";
        cin >> arr2[i];
    }

    print(arr2 , deg2);

    cout << "\nAddition of polymomials : ";

    if (deg1 > deg2) {
        for (int i = deg1 - deg2; i <= deg1; i++) arr1[i] += arr2[i - (deg1 - deg2)];
        print(arr1 , deg1);
        cout << "case - 1";
    } else if (deg1 < deg2) {
        for (int i = deg2 - deg1; i <= deg2; i++) arr2[i] += arr1[i - (deg2 - deg1)];
        print(arr2 , deg2);
        cout << "case - 2";
    } else {
        for (int i = 0; i <= deg1; i++) arr1[i] += arr2[i];
        print(arr1 , deg1);
        cout << "case - 3";
    }

    return 0;
}