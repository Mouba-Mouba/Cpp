#include <iostream>
using namespace std;
void swapVars(int &, int &);
int main() {
    int a = 5;
    int b = 7;
    cout << "Before swap" << endl;
    cout << "a = " << a << endl << "b = " << b << endl;
    swapVars(a, b);
    cout << "After swap" << endl;
    cout << "a = " << a << endl << "b = " << b << endl;
    return 0;
}
void swapVars(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}
