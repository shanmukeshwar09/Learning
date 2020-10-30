// Display array pairs whose sum is a desired input

#include <iostream>
using namespace::std;

int main() {

    int len;

    cout << "Input a length : ";
    cin >> len;

    double arr[len];

    for (int i = 0; i < len; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> arr[i];
    }

    double sum;

    cout << "Input sum = ";
    cin >> sum;

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (i != j) {
                if (arr[i] + arr[j] == sum) {
                    cout << "\n" << arr[i] << " + " << arr[j] << " : " << i << " " << j;
                }
            }
        }
    }
    
    return 0;
}