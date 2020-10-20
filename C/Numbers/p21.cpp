// Arrange zeros to left and one's to right in an array

#include <iostream>
using namespace::std;

int * compress(int arr[] , int start , int size) {
    
    for (int i = start; i < size; i++) {
        arr[start] = arr[start + 1];
    }

    return arr;
}

int main() {
    int size;
    int temp;

    cout << "Enter the size of an array : ";
    cin >> size;

    int array[size];

    cout << "Enter 0 or 1 only";

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << " : ";
        cin >> array[i]; 
    }

    for (int i = 0; i < size; i++) {
        if (array[i] == 1) {
            temp = array[i];
            compress(array , i , size);
            array[size - 1] = temp;
        }
    }

    for (int i = 0; i < size; i++) {
        cout << array[i] << " "; 
    }

    
    return 0;
}