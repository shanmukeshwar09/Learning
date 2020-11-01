// Addition of 2 matrices

#include <iostream>
using namespace::std;

int main() {

    int row1 , column1;
    int row2 , column2;
    double sum = 0;

    cout << "Input length of row_1 and column_1 : ";
    cin >> row1 >> column1;

    cout << "Input length of row_2 and column_2 : ";
    cin >> row2 >> column2;

    if (row1 != row2 && column1 != column2) {
        cout << "Matrices cannot be added !";
        return 0;
    }

    double m1[row1][column1] , m2[row2][column2];

    cout << "Element of Matrix 1\n";

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            cout << "element [" << i << "][" << j << "] : ";
            cin >> m1[i][j];
        }
    }

    cout << "Element of Matrix 2\n";

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            cout << "element [" << i << "][" << j << "] : ";
            cin >> m2[i][j];
        }
    }

    cout << "Addition of Matrices \n";

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            cout << m1[i][j] + m2[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Substraction of Matrices \n";

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            cout << m1[i][j] - m2[i][j] << " ";
        }
        cout << "\n";
    }

    if (row2 != column1) {
        cout << "Matrices cannot be multiplied";
        return 0;
    }

    cout << "Multiplication of Matrices \n";

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            for (int k = 0; k < row1; k++) {
                sum += m1[i][k] * m2[k][j];
            }
            cout << sum << " ";
            sum = 0;
        }
        cout << "\n";
    }

    return 0;
}