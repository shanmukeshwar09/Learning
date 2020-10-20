// find fibonocci numbers between 0 - "N" numbers

#include <iostream>

using namespace::std;

int main() {
    int num;
    int temp;
    int currentfs = 0;

    int fs1 = 0 , fs2 = 1;

    cout << "Enter integer : ";
    cin >> num;

    cout << fs1 << "\n";
    cout << fs2 << "\n";

    do {
        currentfs = fs1 + fs2;
        if(currentfs < num) cout << currentfs << "\n";
        fs1 = fs2;
        fs2 = currentfs;
    } while (currentfs < num);

    return 0;
}