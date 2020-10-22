// Polynomial equation

#include <iostream>
#include <math.h>

using namespace::std;

int main() {
    int order;
    float x;
    float sum = 0;

    cout << "Order of the equation : ";
    cin >> order;

    float eq[order];

    cout << "Input cooefficient of \n";

    for (int i = 0; i <= order; i++) {
        cout << order - i << " : ";
        cin >> eq[i];
    }

    cout << "value of x : ";
    cin >> x;

    for (int i = 0; i <= order; i++) {
        cout << eq[i];
        sum += eq[i] * pow(x , order - i);
        if (i != order) cout << "x^" << order - i << " + ";
    }
    
    cout << " = " << sum;

    return 0;
}