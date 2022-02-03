#include <iostream>
using namespace std;

int funcmax(int arr[], int n) {
    int ans = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > ans) {
            ans = arr[i];
        }
    }
    return ans;
}

int main() {
    int arr[10] = {4, 1, 8, 2, 0, 3, 7, 5, 6, 9};
    int maxnum = funcmax(arr, 10);
    cout << "Maximum number in the array = " << maxnum << endl;
    return 0;
}