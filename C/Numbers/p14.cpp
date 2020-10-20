// Check whether there are repeated digits in given number

#include <iostream>

using namespace::std;

int main() {

    int num;
    int temp;
    int frequency[9];

    for (int i = 0; i < 10; i++) {
        frequency[i] = 0;
    }

    cout << "Input an integer : ";
    cin >> num;

    while (num > 0) {
        temp = num % 10;
        frequency[temp] ++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if(frequency[i] > 1) cout << i << " : " << frequency[i];
    }

    return 0;
}