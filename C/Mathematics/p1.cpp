// Areas of triangle , circle , square , rectangle , parallelogram

#include <iostream>
#include <math.h>
using namespace::std;

#define PI 3.14

void rectangle() {

    float length, breadth;

    cout << "Enter length : ";
    cin >> length;

    cout << "Enter breadth : ";
    cin >> breadth;

    cout << "Area of the Rectangle = " << length * breadth;

}

void triangle() {

    //Using Heron's formulae

    float s1 , s2 , s3;

    cout << "Enter side 1 : ";
    cin >> s1;

    cout << "Enter side 2 : ";
    cin >> s2;

    cout << "Enter side 3 : ";
    cin >> s3;

    float s = ( s1 + s2 + s3 ) / 2;

    float area = sqrt(s * (s - s1) * (s - s2) * (s - s3));

    cout << "Area of the Triangle = " << area;

}

void circle() {
    float radius;

    cout << "Enter the radius : ";
    cin >> radius;

    cout << "Area of the circle : " << 2 * PI * radius * radius;
}

void square() {
    float side;

    cout << "Length of the Side : ";
    cin >> side;

    cout << "Area of the square : " << pow(side , 2);
}

void parallelogram() {
    int s1 , s2;

    cout << "Enter side 1 : ";
    cin >> s1;

    cout << "Enter side 2 : ";
    cin >> s2;

    cout << "Area of a parallelogram = " << s1 * s2;
}

int main() {
    int choice;

    cout << "1.Rectangle  2.Triangle  3.Circle  4.Square  5.Parallelogram \n";
    cout << "Choose your choice : ";

    cin >> choice;

    switch (choice) {
        case 1 : rectangle(); break;
        case 2 : triangle(); break;
        case 3 : circle(); break;
        case 4 : square(); break;
        case 5 : parallelogram(); break;
        default : cout << "404 , option unavailable !";
    }
    return 0;
}