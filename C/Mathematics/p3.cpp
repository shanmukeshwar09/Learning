// Find Quadrant with the help of coordinates

#include <iostream>

using namespace::std;

int main() {
    float x , y;

    cout << "Enter X coordinate : ";
    cin >> x;

    cout << "Enter Y coordinate : ";
    cin >> y;

    cout << "Axis point lies on ";

    if (x > 0 && y > 0) cout << "1st";
    else if (x > 0 && y < 0) cout << "4nd";
    else if (x < 0 && y > 0) cout << "2nd";
    else if (x < 0 && y < 0) cout << "3rd";
    else cout << "null";

    cout << " Quadrant";
    
}