
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    // 1. Cartesian plan
   struct point {
        int xa, ya;
        int xb, yb;
        int xc, yc;

    };
    point car;

        cout << "Enter coordinates of vertex #1" << endl;
        cout << "x-coordinate: ";
        cin >> car.xa;
        cout << "y-coordinate: ";
        cin >> car.ya;
        cout << "Enter coordinates of vertex #2" << endl;
        cout << "x-coordinate: ";
        cin >> car.xb;
        cout << "y-coordinate: ";
        cin >> car.yb;
        cout << "Enter coordinates of vertex #3" << endl;
        cout << "x-coordinate: ";
        cin >> car.xc;
        cout << "y-coordinate: ";
        cin >> car.yc;

        double area=(car.xa*(car.yb-car.yc)+car.xb*(car.yc-car.ya)+car.xc*(car.ya-car.yb));
        area = sqrt(pow(area,2));
        area = area/2;
        cout << "Area of the triangle = " << area << endl;

        return 0;
}




