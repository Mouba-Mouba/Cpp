#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Reversed number = ";
    while (n != 0) {
        int x = n % 10;
        cout << x;
        n /= 10;
    }
    cout << endl;
}