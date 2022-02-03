#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    int n;
    do {
        cout << "Enter a number (0 to stop): ";
        cin >> n;
        sum += n;
    } while (n != 0);
    cout << "Sum = " << sum << endl;
}