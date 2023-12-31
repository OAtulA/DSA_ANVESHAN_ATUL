#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2, i, j, k;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // If column of first matrix in not equal to row of second matrix,
    // ask the user to enter the size of matrix again.
    while (c1 != r2) {
        cout << "Error! Column of first matrix not equal to row of second." << endl;
        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;
        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

    int a[r1][c1], b[r2][c2], mult[r1][c2];

    // Taking input for first matrix.
    cout << endl << "Enter elements of matrix 1:" << endl;
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c1; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    }

    // Taking input for second matrix.
    cout << endl << "Enter elements of matrix 2:" << endl;
    for (i = 0; i < r2; ++i) {
        for (j = 0; j < c2; ++j) {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    }

    // Initializing elements of matrix mult to 0.
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            mult[i][j] = 0;
        }
    }

    // Multiplying matrix a and b and storing in array mult.
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            for (k = 0; k < c1; ++k) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Displaying the multiplication of two matrices.
    cout << endl << "Output Matrix:" << endl;
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            cout << mult[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
