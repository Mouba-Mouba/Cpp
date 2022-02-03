#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int arr[4][4];
    for (int row = 0; row < 4; ++row) {
        cout << "Enter the 4 elements of row #" << row << ": ";
        for (int col = 0; col <4; ++col) {
            cin >> arr[row][col];
        }
    }

    int ans[4] = {0}; // Initializes the first element as 0, and makes the rest of the elements 0 as well
    for (int col = 0; col < 4; ++col) {
        for (int row = 0; row < 4; ++row) {
            ans[col] += arr[row][col];
        }
    }

    cout << "Sum of elements in each column: " << endl;
    for (int i = 0; i < 4; ++i) {
        cout << setw(5) << ans[i];
    }
    cout << endl;
    return 0;

}