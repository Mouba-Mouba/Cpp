#include <iostream>
#define PI 3.14159

using namespace std;
int main() {
    double radius;
    
    cout << "Enter radius: ";
    cin >> radius;

    int diam = 2 * radius;
    int circ = 2 * PI * radius;
    int area = PI * radius * radius;

    cout << "Diameter = " << diam;
    cout << "\nCircumference = " << circ;
    cout << "\nArea = " << area << endl;

    return 0;
}