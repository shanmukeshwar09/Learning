// Checking whether the given number is happy or not

// take a given number , split them and add them by squaring each digit
// continue this process , if it end with 1 = happy , else with 4 then it is unhappy

#include <iostream>
#include <math.h>

using namespace::std;

int compress(int num) {
    if (num == 1 || num == 4) return num;
    int sum = 0;
    while (num > 0) {
        sum += pow(num % 10 , 2);
        num /= 10;
    }
    return compress(sum);
}

int main() {
    int num;
    int temp;
    int sum = 0;

    cout << "Input an integer : ";
    cin >> num;

    compress(num) == 1 ? cout <<  "Happy number" : cout << "Not Happy number";

    return 0;
}