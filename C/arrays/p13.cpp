// Average in the even points

// Largest difference between 2 arrays

#include <iostream>
using namespace::std;

int main() {

    int len;
    int count = 0;
    double sum = 0;

    cout << "Input a length : ";
    cin >> len;

    double arr[len];

    for (int i = 0; i < len; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (int i = 1; i < len; i += 2) {
        sum += arr[i];
        count++;
    }

    cout << "Average = " << (double) (sum / count);
        
    return 0;
}