#include <iostream>
#define PI 3.14159
using namespace std;

double calcBaseArea(double);
double calcSurfArea(double, double);
double calcVolume(double, double);

int main() {
    double r, h;
    cout << "Enter radius: ";
    cin >> r;
    cout << "Enter height: ";
    cin >> h;

    double ba = calcBaseArea(r);
    double tsa = calcSurfArea(r, h);
    double vol = calcVolume(r, h);

    cout << "Base area = " << ba;
    cout << "\nTotal surface area = " << tsa;
    cout << "\nVolume = " << vol << endl;

    return 0;
}

double calcBaseArea(double r) {
    double ans = PI * r * r;
    return ans;
}

double calcSurfArea(double r, double h) {
    double area = 2 * calcBaseArea(r) + 2 * PI * r * h;
    return area;
}

double calcVolume(double r, double h) {
    double vol = calcBaseArea(r) * h;
    return vol;
}