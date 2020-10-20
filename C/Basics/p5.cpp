// Print all the odd numbers till 'N'

#include <iostream>
using namespace::std;

int main() {
    int num;

    cout << "Input a number : ";
    cin >> num;

    for(int i = 0; i <= num; i++) 
        if(i % 2 != 0) cout << i << "\n";

    return 0;
}