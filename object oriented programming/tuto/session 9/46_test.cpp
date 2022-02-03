#include <iostream>
using namespace std;
void incbytwo(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        arr[i] += 2;
    }
}
int main() {
    int arr[5] = {2, 6, 3, 8, 1};
    incbytwo(arr, 5);
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout <<endl;
    return 0;
}