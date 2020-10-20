// To find the given year is a leap year or not

#include <iostream>
using namespace::std;

int main() {
    int num;

    cout << "Input a number : ";
    cin >> num;

    cout << num;

    if(num % 400 == 0) cout << " is a leap year";
    else if (num % 100 == 0) cout << " is not a leap year";
    else if (num % 4 == 0) cout << " is a leap year";
    else cout << " is a not leap year";
}