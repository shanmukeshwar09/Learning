// Roots of a quadratic equation

#include <iostream>
#include <math.h>

using namespace::std;

int main() {
    float a , b , c;

    cout << "Enter a : ";
    cin >> a;

    cout << "Enter b : ";
    cin >> b;

    cout << "Enter c : ";
    cin >> c;

    float discriminent = ((b * b) - 4 * a * c);

    cout << "Roots are ";

    if (discriminent > 0) {
        cout << "real and distinct \n";
        cout << "Root 1 = " << (-b + sqrt(discriminent)) / 2 * a;
        cout << "\n";
        cout << "Root 2 = " << (-b - sqrt(discriminent)) / 2 * a;
    } else if (discriminent == 0) {
        cout << "real and equal \n";
        cout << "Root 1 = " << -b / 2 * a;
        cout << "\n";
        cout << "Root 2 = " << -b / 2 * a;
    } else {
        cout << "Imaginary \n";
        cout << "Root 1 = " << -b / 2 * a << " + i" << sqrt(abs(discriminent)) / 2 * a;
        cout << "\n";
        cout << "Root 2 = " << -b / 2 * a << " - i" << sqrt(abs(discriminent)) / 2 * a;
    }


}