#include <iostream>
using namespace std;

const int ROWS = 3;
const int COL = 3;

// Function to display the matrix
void displayMatrix(int matrix[ROWS][COL]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COL; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}




int main() {
    // Creating a 2D matrix (3x3)
    // int matrix[ROWS][COL] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };

    int matrix[ROWS][COL] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};



    // Displaying the matrix
    cout << "Matrix:" << endl;
    displayMatrix(matrix);

    return 0;
}
