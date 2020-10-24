// Sum series 1^2 + 2^2 + 3^2 + ...... + n^2

#include <iostream>
#include <math.h>

using namespace::std;

int main() {

    double start , length , temp , sum = 0;

    cout << "Start number : ";
    cin >> start;

    cout << "Lenght : ";
    cin >> length;

    for (int i = start; i < start + length; i++) {
        temp = pow(i , 2);
        sum += temp;
        cout << temp << " ";
    }

    cout << "= " << sum;

    return 0;
}