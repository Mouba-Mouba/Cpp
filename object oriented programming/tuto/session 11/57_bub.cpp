#include <iostream>
using namespace std;
int main() {
    int arr[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }
    int n = 10;
    //bubble sort
    bool flag = true;
    for (int i = 0; i < n - 1; ++i) {
        for (int i = 0; i < n - 1; ++i) {
            if (arr[i] > arr[i + 1]) {
                flag = false;
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        if (flag) {
            break;
        }
    }
    cout << "Sorted array" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}