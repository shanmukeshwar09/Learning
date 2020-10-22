// calculate mean , variance and standard deviation

// variance = summation((xi - x) ^ 2) / size

#include <iostream>
#include <math.h>

using namespace::std;

double var(double arr[] , int size) {

    double xi = arr[size / 2];

    double sum = 0;

    for (int i = 0; i < size; i++) sum += pow(xi - arr[i] , 2);

    return sum / size;
}

int main() {
    int size;
    double sum = 0;

    cout << "Input the size of the table : ";
    cin >> size;
    
    double arr[size];

    cout << "Input the values of the table \n";

    for (int i = 0; i < size; i++) {
        cout << "value : " << i + 1 << " : ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Mean = " << (double) sum / size;

    cout << "\n";

    double variance = var(arr , size);

    cout << "variance = " << variance;

    cout << "\n";

    cout << "Standard deviation : " << sqrt(variance);

    return 0;
}