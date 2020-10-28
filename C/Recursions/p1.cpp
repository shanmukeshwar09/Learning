// Print sum of even numbers in an array using recursion

#include <iostream>
using namespace::std;

int sumOfEven(int arr[] , int size , int sum) {

    if (size > 0) {
        if (arr[size] % 2 == 0) sum += arr[size];
        return sumOfEven(arr , size - 1 , sum);
    } else return sum;
}

int main() {
    int size;

    cout << "Enter the size of an Array : ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++) {
        cout << "Element : " << (i + 1) << " : ";
        cin >> arr[i];
    }

    cout << "Sum of Even numbers in Array : " << sumOfEven(arr , size - 1 , 0);

    return 0;
}