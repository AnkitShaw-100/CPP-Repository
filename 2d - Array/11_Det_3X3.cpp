#include <iostream>
using namespace std;

int main() {
    // Declare a 3x3 matrix
    int matrix[3][3];
    
    // Input elements of the matrix
    cout << "Enter the elements of the 3x3 matrix:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // Calculate the determinant of the matrix
    int determinant = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
                    - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
                    + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    // Print the determinant
    cout << "The determinant of the matrix is: " << determinant << endl;

    return 0;
}
