// Series 1/1 + 1/2 + 1/3 + ....... 1/n

#include <iostream>
using namespace::std;

int main() {
    int num;
    double sum = 0;

    cout << "Enter an Integer : ";
    cin >> num;

    for (int i = 1; i <= num; i++) sum += (double) 1/i;

    cout << "Result : " << sum;

    return 0;
}