// Swap two numbers

#include <iostream>
using namespace::std;

void swap(int *a , int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int a , b;

    cout << "Input a and b : ";
    cin >> a >> b;

    cout << "a = " << a << " , " << "b = " << b << "\n";

    swap (&a , &b);

    cout << "a = " << a << " , " << "b = " << b << "\n";

    return 0;
}