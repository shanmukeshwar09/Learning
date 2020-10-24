// Find angles between angles in a triangle

#include <iostream>
#include <math.h>
using namespace::std;

int main() {
    double s1 , s2 , s3;

    cout << asin(0.5);

    cout << "Enter length of \n";

    cout << "Side 1 : ";
    cin >> s1;

    cout << "Side 2 : ";
    cin >> s2;

    cout << "Side 3 : ";
    cin >> s3;

    cout << "Angle A : " << acos((pow(s2 , 2) + pow(s3 , 2) - pow(s1 , 2)) / (2 * s2 * s3));
    cout << " , ";
    cout << "Angle B : " << acos((pow(s1 , 2) + pow(s3 , 2) - pow(s2 , 2)) / (2 * s1 * s3));
    cout << "  , ";
    cout << "Angle C : " << acos((pow(s1 , 2) + pow(s2 , 2) - pow(s3 , 2)) / (2 * s1 * s2));

    return 0;
}