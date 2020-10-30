// Array pair which when added will be = nearest or = 0

#include <iostream>
using namespace::std;

int main() {

    int len;
    double temp , result;
    double sum[2];

    cout << "Input length : ";
    cin >> len;

    double arr[len];

    for (int i = 0; i < len; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> arr[i];
    }

    sum[0] = arr[0];
    sum[1] = arr[1];

    result = sum[0] + sum[1];
    
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