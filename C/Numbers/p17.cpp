// Check given number is a magic number

#include <iostream>
using namespace::std;

int compress(int num) {
    if (num < 10) return num;

    int sum = 0;
    while (num > 0) {
    sum += num % 10;
    num /= 10;
    }

    return compress(sum);
}

int main() {
    int num;
    int sum = 0;

    cout << "Input an integer : ";
    cin >> num;

    cout << num;
    
    if(compress(num) == 1) cout << " is a magic number";
    else cout << " is not a magic number";

    return 0;
}