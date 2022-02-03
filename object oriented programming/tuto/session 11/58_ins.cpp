#include <iostream>
using namespace std;
int main() {
    int arr[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }
    int n = 10;
    //insertion sort
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j;
        for (j = i - 1; j >= 0; --j) {
            if (arr[j] > key) {
                arr[j + 1] = arr[j];
            }
            else {
                break;
            }
        }
        j = j + 1;
        arr[j] = key;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}