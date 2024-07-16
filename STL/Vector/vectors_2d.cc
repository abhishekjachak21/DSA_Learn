
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare and initialize a 3x4 matrix with all elements set to 0
    int rows = 3, cols = 4;
    vector<vector<int>> matrix(rows, vector<int>(cols, 0));

    // Fill the matrix with some values
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            matrix[i][j] = i * cols + j + 1;
        }
    }

    // Print the matrix
    // for(int i = 0; i < rows; ++i) {
    //     for(int j = 0; j < cols; ++j) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    cout << matrix[0][3] << " ";

    return 0;
}

