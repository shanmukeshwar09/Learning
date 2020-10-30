// Union and Intersection

// Pending program

#include <iostream>
using namespace::std;

int main() {

    int len[4];
    int count = 0;

    for (int i = 0; i < 2; i++) {
        cout << "Input length " << i + 1 << " : ";
        cin >> len[i];
    }

    double arr1[len[0]] , arr2[len[1]];

    len[2] = len[0] + len[1];

    double arr3[len[2]];

    len[3] = len[0] > len[1] ? len[0] : len[1];

    double intersection[len[2]];

    cout << "Input Array 1 \n";

    for (int i = 0; i < len[0]; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> arr1[i];
        arr3[i] = arr1[i];
    }

    cout << "Input Array 2 \n";

    for (int i = 0; i < len[1]; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> arr2[i];
        arr3[i + len[0] - 1] = arr2[j];
    }

    cout << "Intersection Elements : ";

    for (int i = 0 , k = 0; i < len[0]; i++) {
        for (int j = 0; j < len[1]; j++) {
           if (arr1[i] == arr2[j]) {
               cout << arr1[i] << " ";
               intersection[k] = arr1[i];
               count++;
           }
        }
    }

    cout << "\n";

    cout << "Union Elements : ";

    // for (int i = 0; i < len[0]; i++) {
    //     for (int j = 0; j <= count; j++) {
    //         if (arr1[i] == intersection[j]) {
    //             arr1[i] = 0
    //         }
    //     }
    // }

    return 0;
}