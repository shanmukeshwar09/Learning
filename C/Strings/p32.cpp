// Print reverse of a number in words

#include <iostream>
using namespace::std;

int countdig(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

void splitdig(int num , int len , int arr[]) {
    for (int  i = 0; i < len; i++) {
        arr[i] = num % 10;
        num /= 10;
    }
}

int main() {

    int num;
    string str[4] = {"hundered" , "thousand" , "lakhs" , "crores"};

    cout << "Input a whole number less than or equal to 6 : ";
    cin >> num;

    int temp = num;

    int diglen = countdig(num);
    int dig[diglen];

    splitdig(num , diglen , dig);

    for (int i = 0; i < diglen; i++) {
        cout << " " << dig[i] << " ";
        switch(diglen - i) {
            case 3 : cout << str[0]; break;
            case 4 : cout << str[1]; break;
            case 5 : cout << str[2]; break;
            case 6 : cout << str[3]; break;
            default : break;
        }
    }

    return 0;
}