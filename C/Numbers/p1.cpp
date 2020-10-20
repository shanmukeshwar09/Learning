// Sum of "N" numbers

#include <iostream>
using namespace::std;

int main() {

    int num;
    int result = 0;

    cout << "Input number : ";
    cin >> num;

    for (int i = 1; i <= num; i++) result += i;

    cout << "Sum of N numbers : " << result;
}