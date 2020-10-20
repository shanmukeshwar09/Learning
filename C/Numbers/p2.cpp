// Sum of all digits in a number

#include <iostream>
using namespace::std;

int main() {

    int num;
    int temp;
    int result = 0;

    cout << "Input an Integer to find it's Sum : ";
    cin >> num;

    while (num > 0) {
        temp = num % 10;
        cout << temp;
        result += temp;
        num /= 10;
        if(num > 0) cout << " + ";
    }

    cout << " = " << result;

    return 0;
}