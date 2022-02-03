#include <iostream>
using namespace std;

int sumton(int n) {
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans += i;
    }
    return ans;
}

int main() {
    
    int n;
    do {
        cout << "Enter a positive integer (0 to end): ";
        cin >> n;
        if (n > 0) {
            int ans = sumton(n);
            cout << "Sum to " << n << " is " << ans << endl;
        }
    } while (n > 0);

    return 0;
}