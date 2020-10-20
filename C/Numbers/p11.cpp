// Armstrong number between 1 and 'N' numbers

#include <iostream>

using namespace::std;

bool checkArmstrong (int num) {
    int temp , result = 0;
    int numClone = num;

    while (num > 0) {
        temp = num % 10;
        result += temp * temp * temp;
        num /= 10;
    }

    if (numClone == result) return true;

    return false;
}

int main() {
    int num;

    cout << "Enter an integer : ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        if (checkArmstrong(i)) cout << i << " ";
    }
}