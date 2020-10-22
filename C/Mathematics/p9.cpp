// Happy number till 'N'

// to know about happy number , check previous program

#include <iostream>
#include <math.h>

using namespace::std;

bool compress(int num) {
    if (num == 1) return true;
    else if (num == 4) return false;
    int sum = 0;
    while (num > 0) {
        sum += pow(num % 10 , 2);
        num /= 10;
    }
    return compress(sum);
}

int main() {
    int num;

    cout << "Input upper limit : ";
    cin >> num;

    cout << "Happy numbers between 1 and " << num << " : ";

    for (int i = 1; i <= num; i++) {
        if(compress(i)) cout << i << " ";
    }
}