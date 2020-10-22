// Simple calculator

#include <iostream>

using namespace::std;

int main() {
    int num1 , num2;
    char symbol;

    cout << "Welcome to simple calculator \n";
    cout << "Enter num1 : ";
    cin >> num1;

    cout << "Enter your choice + , - , x , / : ";
    cin >> symbol;

    cout << "Enter num2 : ";
    cin >> num2;

    cout << num1 << " " << symbol << " " << num2 << " = ";

    switch (symbol) {
        case '+' : cout << num1 + num2; break;
        case '-' : cout << num1 - num2; break;
        case 'x' : cout << num1 * num2; break;
        case '/' : cout << num1 / num2; break;
        default : cout << "Undefined !";
    }

    return 0;
}