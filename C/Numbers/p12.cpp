// Check wheter the given number is perfect or not

// Rule : Sum of the Numbers divisible from  1 - (n - 1)

#include <iostream>
using namespace::std;

int main() {
    int num;
    int sum = 0;

    cout << "Enter an integer : ";
    cin >> num;

    for (int i = 1; i <= num / 2; i++) {
        if(num % i == 0) sum += i;
    }

    cout << num;

    if (sum == num) cout << " is a perfect number";
    else cout << " is not a perfect number";
}