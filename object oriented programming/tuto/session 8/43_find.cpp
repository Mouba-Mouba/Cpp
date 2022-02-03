#include <iostream>
using namespace std;
int main() {
    int arr[6] = {4, 2, 8, 100, 9, 32};

    int k;
    cout << "Enter an integer: ";
    cin >> k;

    int ans;
    bool found = false;
    for (int i = 0; i < 6; ++i) {
        if (arr[i] == k) {
            found = true;
            ans = i;
            break;
        }
    }
    if (!found) {
        ans = -1;
    }

    cout << "Index of " << k << " in my list is " << ans << endl;
    return 0;
    
}