// Find perfect numbers within a range 1 - 'N' numbers

#include <iostream>
using namespace::std;

bool isPerfect(int num) {

    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {
        if(num % i == 0) sum += i;
    }

    if (sum == num) return true;

    return false;
}

int main() {
    int num;

    cout << "Enter the upper limit : ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        if (isPerfect(i)) cout << i << " ";
    }
}