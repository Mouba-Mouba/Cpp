#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;
    int ans = 0;
    while (n > 0) {
        int dig = n % 10;
        ans += dig;
        n /= 10;
    }
    cout << "Sum of digits: " << ans << endl;
    return 0;
}