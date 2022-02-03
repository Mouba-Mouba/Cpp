#include <iostream>
using namespace std;
int main() {
    int hours;
    cout << "Enter no. of hours: ";
    cin >> hours;
    int ans;
    if (hours > 40) {
        ans = 40 * 50 + (hours - 40) * 60;
    }
    else {
        ans = hours * 50;
    }
    cout << "Wages = RM " << ans << endl;
}