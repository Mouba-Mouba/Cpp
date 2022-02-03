#include <iostream>
using namespace std;
int main() {
    int arr[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }
    int n = 10;
    //selection sort
    for (int i = 0; i < n; ++i) {
        int minind = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minind]) {
                minind = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minind];
        arr[minind] = temp;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}