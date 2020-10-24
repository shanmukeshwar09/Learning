// Sum of series in GP

// a , ar sq , ar cube .......

#include <iostream>
#include <math.h>
using namespace::std;

int main() {
    double first , diff , length;

    cout << "Enter first term : ";
    cin >> first;

    cout << "Enter the difference : ";
    cin >> diff;

    cout << "Enter the Lenght : ";
    cin >> length;

    for (int i = 0; i < length; i++) cout << first * pow(diff , i) << " ";

    return 0;
}