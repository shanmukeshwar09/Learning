// Magic number between 1 - 'n' numbers

#include <iostream>
using namespace::std;

int compress(int num) {

    if (num < 10) return num;
    
    int sum = 0;
    
    while (num > 0) {
    sum += num % 10;
    num /= 10;
    }

    return compress(sum);
}

int main() {
    int num;

    cout << "Enter upper limit : ";
    cin >> num;

    for (int i = 0; i <= num; i++) {
        if(compress(i) == 1) cout << i << " ";
    }
    
}