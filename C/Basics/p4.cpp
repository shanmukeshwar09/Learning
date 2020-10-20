// Checking given number is odd or even

#include <iostream>
using namespace::std;

int main() {
    int num;
    cout << "Input an integer : ";
    cin >> num;

    if(num % 2 == 0) cout << num << " is Even number";
    else cout << num << " is Odd number";
}