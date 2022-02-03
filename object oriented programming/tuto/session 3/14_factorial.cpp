#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n == 0) {   //check if n is 0
        cout << "0! = 1" << endl;
    }
    else {
        int ans = 1;
        for (int i = 1; i <= n; ++i) {
            ans *= i;
        }
        cout << n << "! = " << ans << endl;
    }
    
    return 0;
}