#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    // Transpose the matrix
    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 3; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Reverse each row
    for (int i = 0; i < 3; ++i) {
        int start = 0, end = 2;
        while (start < end) {
            int temp = matrix[i][start];
            matrix[i][start] = matrix[i][end];
            matrix[i][end] = temp;
            ++start;
            --end;
        }
    }

    cout << "Matrix after 90-degree rotation:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}
