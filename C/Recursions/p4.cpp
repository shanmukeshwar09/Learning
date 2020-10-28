// Checking for repeated digits using recursion

#include <iostream>
using namespace::std;

int * check(int num , int freq[]) {
    if (num < 1) return freq;
    int temp;
    while (num > 0) {
        temp = num % 10;
        freq[temp]++;
        num /= 10;
    }
    return check(num , freq);
}

int main() {
    int num;
    int *ptr;

    cout << "Enter an Integer : ";
    cin >> num;

    int freq[10];

    for (int i = 0; i < 10; i++) freq[i] = 0;

    ptr = check(num , freq);

    for (int i = 0; i < 10; i++) {
        if (*(ptr + i) > 1) {
            cout << i << " : " << *(ptr + i) << "\n";
        }
    }
    return 0;
}