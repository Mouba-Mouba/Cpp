#include <iostream>
using namespace std;

int odinsum(int [], int);

int main() {
    int arr[1000];
    int n;
    cout << "Enter no. of integers: ";
    cin >> n;
    cout << "Enter " << n << " integer: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    } 
    int ans = odinsum(arr, n);
    cout << "Sum of the integers at odd indices = " << ans << endl;
    return 0;
}

int odinsum(int a[], int n) {
    int su = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 1) {
            su += a[i];
        }
    }
    return su;
}