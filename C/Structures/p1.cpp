// Simple structure

#include <iostream>
using namespace::std;

struct st {
    int id = 10;
    char c = 'a';
};

int main() {

    st s1 , s2;

    s2.id = 11;

    cout << s1.id;

    cout << "\n";

    cout << s2.id;

    return 0;
}