// Swap 2 numbers using 3rd variable && without using 3rd variable

#include <iostream>
using namespace::std;

int main() {
    int num1 , num2 , temp;
    
    cout << "Enter num1 : ";
    cin >> num1;
    cout << "Enter num2 : ";
    cin >> num2;

    // Swap with using 3rd variable

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "num1 : " << num1 << "\n" << "Num2 : " << num2;

    cout << "\n";

    // Swap without using 3rd variable

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << "num1 : " << num1 << "\n" << "Num2 : " << num2;

}