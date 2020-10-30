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
                temp = arr[i] + arr[j];
                if (temp < 0) temp = (-1) * temp;
                if (temp < result) {
                    result = temp;
                    sum[0] = arr[i];
                    sum[1] = arr[j];
                }
            }
        }
    }

    cout << "Pair = " << sum[0] << " , " << sum[1];

    return 0;
}