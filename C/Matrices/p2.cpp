// Tweaking N matrices

#include <iostream>
using namespace::std;

// Add N matrices

void addm() {

    int row , column;

    cout << "Input length of row and column : ";
    cin >> row >> column;

    double m[3][row][column];
    int input;
    int count = 2;

    for (int i = 0; i < 3; i++) {
        if (i == 2) {
            for (int j = 0; j < row; j++) {
                for (int k = 0; k < column; k++) {
                    m[i][j][k] = m[i - 2][j][k] + m[i - 1][j][k];
                }
            }
        } else {
            cout << "Element of Matrix " << i + 1 << "\n";

            for (int j = 0; j < row; j++) {
                for (int k = 0; k < column; k++) {
                    cout << "element [" << j << "][" << k << "] : ";
                    cin >> m[i][j][k];
                }
            }
        }
    }

    while (true) {

        cout << "Addition of Matrices \n";

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cout << m[2][i][j] << " ";
            }
            cout << "\n";
        }

        cout << "0. exit \n1. continue : ";
        cin >> input;

        if (input == 0) break;

        count ++;

        cout << "Element of Matrix " << count << "\n";

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cout << "element [" << i << "][" << j << "] : ";
                cin >> m[1][i][j];
                m[2][i][j] += m[1][i][j];
            }
        }
    }
}

void subm() {

    int row , column;

    cout << "Input length of row and column : ";
    cin >> row >> column;

    double m[3][row][column];
    int input;
    int count = 0;

    for (int i = 0; i < 3; i++) {
        if (i == 2) {
            for (int j = 0; j < row; j++) {
                for (int k = 0; k < column; k++) {
                    m[i][j][k] = m[i - 2][j][k] - m[i - 1][j][k];
                }
            }
        } else {
            cout << "Element of Matrix " << i + 1 << "\n";

            for (int j = 0; j < row; j++) {
                for (int k = 0; k < column; k++) {
                    cout << "element [" << j << "][" << k << "] : ";
                    cin >> m[i][j][k];
                }
            }
        }
    }

    while (true) {

        cout << "Addition of Matrices \n";

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cout << m[2][i][j] << " ";
            }
            cout << "\n";
        }

        cout << "0. exit \n1. continue : ";
        cin >> input;

        if (input == 0) break;

        cout << "Element of Matrix 2\n";

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cout << "element [" << i << "][" << j << "] : ";
                cin >> m[1][i][j];
                m[2][i][j] -= m[1][i][j];
            }
        }
    }
}

void mulm() {

    int r1 , c1 , r2 , c2;
    double sum = 0;

    cout << "Input length of row and column of M1 : ";
    cin >> r1 >> c1;

    cout << "Input length of row and column of M2 : ";
    cin >> r2 >> c2;

    double m1[r1][c1] , m2[r2][c2] , m3[r1][c2];

    if (r2 != c1) {
        cout << "Cannot multiply matrices";
        return;
    }

    cout << "Element of Matrix 1\n";

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cout << "element [" << i << "][" << j << "] : ";
            cin >> m1[i][j];
        }
    }

    cout << "Element of Matrix 2\n";

    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cout << "element [" << i << "][" << j << "] : ";
            cin >> m2[i][j];
        }
    }

    int input;
    int count = 2;

    cout << "Multiplication of Matrices\n";

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < r1; k++)
                sum += m1[i][k] * m2[k][j];

            m3[i][j] = sum;
            sum = 0;
        }
    }

    while (true) {

    cout << "Multiplication of Matrices \n";

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++)
                cout << m3[i][j] << " ";
            cout << "\n";
        }

        cout << "0.Exit  1.Continue \n";
        cin >> input;
        count++;

        cout << "Input length of row and column of M" << count << " : ";
        cin >> r2 >> c2;

        if (r2 != c1) {
            cout << "Cannot multiply matrices";
            return;
        }

        if (input == 0) break;

        cout << "Element of Matrix 2\n";

        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                cout << "element [" << i << "][" << j << "] : ";
                cin >> m2[i][j];
            }
        }

        double clone[r2][c2];

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                for (int k = 0; k < r1; k++)
                    sum += m3[i][k] * m2[k][j];

                clone[i][j] = sum;
                sum = 0;
            }
        }
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                m3[i][j] = clone[i][j];
            }
        }
    }
}

int main() {

    int choice;

    cout << "1.Add  2.Substract  3.Multiply \n";
    cout << "Input your choice : ";
    cin >> choice;

    switch (choice) {
        case 1 : addm(); break;
        case 2 : subm(); break;
        case 3 : mulm(); break;
        default : break;
    }

    return 0;
}