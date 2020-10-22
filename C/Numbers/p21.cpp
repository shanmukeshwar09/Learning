// Arrange zeros to left and one's to right in an array

// Arrange zeros to right and one's to left in an array

#include <iostream>
using namespace::std;

void print(int arr[] , int size) {

    for (int i = 0; i < size; i++) cout << arr[i] << " ";

}

int main() {
    int size;
    int zeros = 0;
    int ones = 0;

    cout << "Enter the size of an array : ";
    cin >> size;

    int array[size];

    cout << "Enter 0 or 1 only" << "\n";

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << " : ";
        cin >> array[i];
        if(array[i] == 0) zeros++;
    }

    for (int i = 0; i < size; i++) {
        if(zeros > 0) {
            array[i] = 0;
            zeros --;
        } else {
            array[i] = 1;
            ones ++;
        }
    }

    cout << "Zeros arranged to the Left : ";

    print(array , size);

    for (int i = 0; i < size; i++) {
        if(ones > 0) {
            array[i] = 1;
            ones--;
        } else array[i] = 0;
    }

    cout << "\n";

    cout << "Zeros arranged to the Right : ";
    
    print(array , size);

    return 0;
}