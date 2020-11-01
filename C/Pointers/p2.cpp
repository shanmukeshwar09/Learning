// Copy one string to another

#include <iostream>
#include <stdlib.h>
using namespace::std;

int main() {

    char *ptr;
    char str[50];

    cout << "Input String : ";
    cin >> str;
    int i = 0;

    // Coping a string

    cout << "Copy of string : ";

    ptr = str;

    while (*(ptr + i) != '\0') {
        cout << *(ptr + i);
        i++;
    }

    cout << "\n";

    // Clone a string

    cout << "Clone of string : ";

    char *clone;

    clone = (char *) malloc(i);

    int j = 0;

    while (j != i) {
        *(clone + j) = *(ptr + j);
        j++;
    }

    i = 0;

    while (*(clone + i) != '\0') {
        cout << *(clone + i);
        i++;
    }


    return 0;
}