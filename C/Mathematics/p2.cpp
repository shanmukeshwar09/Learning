// Input a degree and find sine and cosine value

#include <iostream>
#include <math.h>

using namespace::std;

int main() {
    float radians;

    cout << "Enter the radians : ";
    cin >> radians;

    cout << "The sine value for " << radians << " : " << sin(radians);

    cout << "\n";
    
    cout << "The cosine value for " << radians << " : " << cos(radians);

}