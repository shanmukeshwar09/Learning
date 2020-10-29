// to seperate odd and even numbers in an array

 #include <iostream>
 using namespace::std;

 int main() {

    int len;
    int elen = 0 , olen = 0;

    cout << "Input length : ";
    cin >> len;

    int arr[len];

    for (int i = 0; i < len; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> arr[i];
        if (arr[i] % 2 == 0) elen++;
        else olen++;
    }

    int earr[elen] , oarr[olen];

    for (int i = 0, j = 0 , k = 0; i < len; i++) {
        if (arr[i] % 2 == 0) {
            earr[j] = arr[i];
            j++;
        } else {
            oarr[k] = arr[i];
            k++;
        }
    }

    cout << "Even Numbers\n";

    for (int i = 0; i < elen; i++) cout << earr[i] << " ";

    cout << "\n";

    cout << "Odd Numbers\n";

    for (int i = 0; i < olen; i++) cout << oarr[i] << " ";

    return 0;
 }