#include <iostream>
using namespace std;

int main() {
    int mat[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    cout << "Spiral Order Traversal:" << endl;

    int rows = 3, cols = 3;
    int layer = (min(rows, cols) + 1) / 2;

    for (int i = 0; i < layer; ++i) {
        for (int j = i; j < cols - i; ++j)
            cout << mat[i][j] << " ";
        for (int j = i + 1; j < rows - i; ++j)
            cout << mat[j][cols - i - 1] << " ";
        for (int j = cols - i - 2; j >= i && (rows - i - 1 != i); --j)
            cout << mat[rows - i - 1][j] << " ";
        for (int j = rows - i - 2; j > i && (cols - i - 1 != i); --j)
            cout << mat[j][i] << " ";
    }

    return 0;
}
