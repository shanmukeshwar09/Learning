// Multiplication using addition

#include <iostream>
using namespace::std;

int main() {
    int num1 , num2 , result = 0;

    cout << "Input an Integer : ";
    cin >> num1;

    cout << num1 << " multiplied by : ";
    cin >> num2;

    for(int i = 0; i < num2; i++) result += num1;

    cout << num1 << " x " << num2 << " = " << result;
}