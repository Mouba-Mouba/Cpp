#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter a 3-digit positive integer: ";
    cin >> x;
    int dig1 = x % 10;
    x = x / 10;
    int dig2 = x % 10;
    x = x / 10;
    int dig3 = x;

    cout << "Reversed number is " << dig1 << dig2 << dig3 << endl;
    return 0;
}