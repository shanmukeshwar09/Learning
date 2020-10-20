// sun of all even numbers between two numbers

#include <iostream>
using namespace::std;

int main() {
    int num1 , num2;
    int result = 0;

    cout << "Enter under limit : ";
    cin >> num1;

    cout << "Enter upper limit : ";
    cin >> num2;

    cout << "Even numbers between " << num1 << " and " << num2 << " are : ";

    for (int i = num1 + 1; i < num2; i++) {
        if(i % 2 == 0) cout << i << " ";
    }
}