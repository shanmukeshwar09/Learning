// Sum of series in AP

#include <iostream>
using namespace::std;

int main() {
    int num;
    double start;
    double difference;

    cout << "Enter first term : ";
    cin >> start;

    double sum = start;

    cout << "Enter the difference : ";
    cin >> difference;

    cout << "Enter the number of terms : ";
    cin >> num;

    cout << sum << " , ";

    for (int i = 0; i < num; i++) {
        sum += difference;
        cout << sum;
        if (i != num - 1) cout << " , ";
    }

    return 0;
}