// // frequency of all elements in an array

// #include <iostream>
// using namespace::std;

// int main() {

//     int len;

//     cout << "Input length : ";
//     cin >> len;

//     double arr[len];

//     for (int i = 0; i < len; i++) {
//         cout << "element " << i + 1 << arr[i];
//         cin >> arr[i];
//     }

//     double clone[len] , count[len];

//     for (int i = 0; i < len; i++) count[i] = 0;

//     for (int i = 0 , k = 0; i < len; i++) {
//         if (arr[i] != 0) {
//             for (int j = 0; j < len; j++) {
//                 if (i != j && arr[i] == arr[j] && arr[j] != 0) {
//                     clone[k] = arr[i];
//                     count[k]++;
//                     arr[j] = 0;
//                     k++;
//                 }
//             }
//         }
//     }

//     cout << 

//     return 0;
// }