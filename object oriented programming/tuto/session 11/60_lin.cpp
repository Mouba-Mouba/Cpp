#include <iostream>
using namespace std;
int main() {
    int n = 10;
    int arr[n] = {43, 21, 65, 2, 8, 13, 90, 45, 76, 39};
    int k;
    cout << "Enter a positive integer: ";
    cin >> k;
    int ans = -1; 
    for (int i = 0; i < n; ++i) {
        if (arr[i] == k) {
            ans = i; 
            break;
        }
    }
    cout << "Index of element = " << ans << endl;
    return 0;
} 