// To reverse a number and check for palindrome

#include <iostream>
using namespace::std;

int main() {
    int num;
    int temp;
    int result = 0;

    cout << "Input an integer : ";
    cin >> num;

    temp = num;

    while (num > 0) {
        result = result * 10 + (num % 10);
        num /= 10;
    }

    cout << "Reversed number : " << result;

    cout << "\nGiven Integer is ";
    (temp == result) ? cout << "palindrome" : cout << "not a palindrome";
    
    return 0;
}