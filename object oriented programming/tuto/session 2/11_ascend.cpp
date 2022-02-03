#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three integers separated by spaces : ";
    cin >> a >> b >> c;
    cout << "In ascending order                       : ";
    int low, mid, hig;
    if (a < b) {
        if (a < c) {
            low = a;
            if (b < c) {
                mid = b;
                hig = c;
            }
            else {
                mid = c;
                hig = b;
            }
        }
        else {
            low = c;
            mid = a;
            hig = b;
        }
    }
    else {
        if (b < c) {
            low = b;
            if (a < c) {
                mid = a;
                hig = c;
            }
            else {
                mid = c;
                hig = a;
            }
        }
        else {
            low = c;
            mid = b;
            hig = a;
        }
    }
    cout << low << " " << mid << " " << hig << endl;
    return 0;
}