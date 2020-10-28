// Smallest number in an array using recursion

#include <iostream>
using namespace::std;

int check(double arr[] , int size , double smallest) {
    if (size < 0) return smallest;
    if (arr[size] < smallest) smallest = arr[size];
    return check(arr , size - 1 , smallest);
}

int main() {
    int size;

    cout << "Enter the size of an Array : ";
    cin >> size;

    double arr[size];

    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "Result " << check(arr , size - 1 , arr[0]);


    return 0;
}