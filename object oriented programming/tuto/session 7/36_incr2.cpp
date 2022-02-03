#include <iostream>
using namespace std;

void inctwo(int &a) {
    a += 2;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    inctwo(n);
    cout << "Incremented by 2: " << n << endl;
    return 0;
}