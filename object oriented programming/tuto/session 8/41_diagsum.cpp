#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    //This is not the same matrix as we had used in class
    int matrix[4][4] = {{4, 3, 6, 8}, {5, 2, 1, 9}, {6, 1, 8, 1}, {3, 7, 5, 4}};
    int ans = 0; 

    //Naive solution
    for (int row = 0; row < 4; ++row) {
        for (int col = 0; col < 4; ++col) {
            if (row == col) {
                ans += matrix[row][col];
            }
        }
    }

    //Better solution
    // for (int i = 0; i < 4; ++i) {
    //     ans += matrix[i][i];
    // }

    //Printing the matrix and the result
    cout << endl;
    for (int row = 0; row < 4; ++row) {
        for (int col = 0; col < 4; ++col) {
            cout << setw(4) << matrix[row][col];
        }
        cout << endl;
    }
    cout << endl << "Sum of diagonal elements = " << ans << endl;
    return 0;
}