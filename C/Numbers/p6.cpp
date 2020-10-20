// check whether the number follows fibonacci series

// given number 'n' is ficonabbi if 5 * n * n + 4 or 5 * n * n - 4 
// or both of them is a perfect square root

#include <iostream>
#include <math.h>

using namespace::std;

bool perfectSquare(int num) {
    int x = sqrt(num);
    return (x * x == num);
}

int main() {
    int num;

    cout << "Enter an integer : ";
    cin >> num;

    cout << num << " is a ";

    if(perfectSquare(5 * num * num + 4) || perfectSquare(5 * num * num - 4)) {
        cout << "fibonocci";
    } else {
        cout << "not a fibonocci";
    }
    cout << " number";
}
