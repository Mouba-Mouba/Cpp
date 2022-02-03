#include <iostream>
#include <cmath>    //for the pow function
using namespace std;
int main() {
    double a, b, c;
    cout << "Enter coefficient a : ";
    cin >> a;
    cout << "Enter coefficient b : ";
    cin >> b;
    cout << "Enter constant c    : ";
    cin >> c;

    double d = b * b - 4 * a * c;

    if (d < 0) {
        cout << "The equation has no real roots" << endl;
    }
    else if (d == 0) {
        double x = -b / (2 * a);
        cout << "The equation has only one root, " << x << endl;

    }
    else {
        d = pow(d, 0.5);
        double x1 = (-b + d) / (2 * a);
        double x2 = (-b - d) / (2 * a);
        cout << "The equation has two roots, " << x1 << " and " << x2 << endl;
    }
    return 0;
}