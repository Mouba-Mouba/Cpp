#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a[3][3];
    int b[3][3];
    cout << "Enter numbers of first 3x3 matrix: ";
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            cin >> a[row][col];
        }
    }
    cout << "Enter numbers of second 3x3 matrix: ";
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            cin >> b[row][col];
        }
    }

    int ans[3][3];
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            ans[row][col] = a[row][col] + b[row][col];
        }
    }

    //print answer
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            cout << setw(4) << ans[row][col];
        }
        cout << endl;
    }
    return 0;
}