// numbers repeated odd number of times

#include <iostream>
using namespace::std;

int main() {

    int len;

    cout << "Input length : ";
    cin >> len;

    double arr[len];
    double clone[len];

    for (int i = 0; i < len; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < len; i++) clone[i] = 0;
    
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (i != j) {
                if (arr[i] == arr[j]) {
                    arr[i] = 0;
                    arr[j] = 0;
                }
            }
        }   
    }

    cout << "Repeated Odd number of times : ";
    
    for (int i = 0; i < len; i++) if (arr[i] != 0) cout << arr[i] << " ";

    return 0;
}