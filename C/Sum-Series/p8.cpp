// sum series (1 + (1 * 2) + (1 * 2 * 3) + (1 * 2 * 3 * 4) + ........ N)

#include <iostream>
using namespace::std;

int fun(int len) {
    int sum = 1;
    for (int i = 1; i <= len; i++) sum *= i;
    return sum;
}

int main() {

    int num , sum = 0;

    cout << "Enter the number of terms : ";
    cin >> num;

    for (int i = 1; i <= num; i++) sum += fun(i);

    cout << "Result : " << sum;
    
    return 0;
}