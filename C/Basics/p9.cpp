// Biggest of 3 numbers

#include <iostream>
using namespace::std;

int main() {
    int num1 , num2 , num3;

    string input = "Enter num ";
    string greater = " is greater\n";
    string middle = " is nor greater nor lesser\n";
    string lesser = " is lesser\n";
    
    cout << input << "1 : ";
    cin >> num1;

    cout << input << "2 : ";
    cin >> num2;

    cout << input << "3 : ";
    cin >> num3;

    if (num1 > num2 && num1 > num3) {
        cout << num1 << greater;
        if (num2 > num3) {
            cout << num2 << middle;
            cout << num3 << lesser;
        } else {
            cout << num3 << middle;
            cout << num2 << lesser;
        }
    } else if (num2 > num1 && num2 > num3) {
        cout << num2 << greater;
       if (num1 > num3) {
            cout << num1 << middle;
            cout << num3 << lesser;
        } else {
            cout << num3 << middle;
            cout << num1 << lesser;
        }
    } else {
        cout << num3 << greater;
       if (num1 > num2) {
            cout << num1 << middle;
            cout << num2 << lesser;
        } else {
            cout << num2 << greater;
            cout << num1 << middle;
        }
    }
}