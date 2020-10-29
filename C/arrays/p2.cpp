// Sum of +ve and -ve integers

#include <iostream>
using namespace::std;

int main() {

    int len;
    double psum = 0;
    double nsum = 0;

    cout << "Input Length : ";
    cin >> len;

    double arr[len];

    for (int i = 0; i < len; i++) {
        cout << "Element : " << i + 1 << " : ";
        cin >> arr[i];
        if (arr[i] > 0) psum += arr[i];
        else if (arr[i] < 0) nsum += arr[i];
    }

    cout << "Sum of +ve elements : " << psum;
    cout << "\n";
    cout << "Sum of -ve elements : " << nsum;

    return 0;
}