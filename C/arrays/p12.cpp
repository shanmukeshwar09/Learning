// Largest difference between 2 arrays

#include <iostream>
using namespace::std;

int main() {

    int len;
    int difference;

    cout << "Input a length : ";
    cin >> len;

    double arr[len];

    for (int i = 0; i < len; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (i != j) {
                if (difference == '\0') difference = arr[i] - arr[j];
                else {
                    if (arr[i] - arr[j] < difference) difference = arr[i] - arr[j];
                }
            }
        }
    }
    
    cout << "Difference : " << difference;
    
    return 0;
}