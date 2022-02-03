#include <iostream>
using namespace std;
int main() {
    int arr[5];
    for (int i = 0; i < 5; ++i) {
        cout << "Enter an integer: ";
        cin >> arr[i];
    }

    int minint = arr[0];
    for (int i = 1; i < 5; ++i) {
        if (arr[i] < minint) {
            minint = arr[i];
        }
    }

    cout << "Smallest integer = " << minint << endl;
    return 0;
}