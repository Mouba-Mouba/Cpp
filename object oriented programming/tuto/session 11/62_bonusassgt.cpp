#include <iostream>
using namespace std;
int main() {
    //Define struct called point
    struct point {
        double x;
        double y;
    };

    //Ask user to enter three points
    point tri[3];
    for (int i = 0; i < 3; ++i) {
        cout << "Enter coordinates of vertex #" << i + 1 << endl;
        cout << "x-coordinate: "; cin >> tri[i].x;
        cout << "y-coordinate: "; cin >> tri[i].y;
    }

    //Calculate area and print
    double area = abs((tri[0].x*(tri[1].y-tri[2].y) + tri[1].x*(tri[2].y-tri[0].y) + tri[2].x*(tri[0].y-tri[1].y))/2);
    cout << "Area of the triangle = " << area << endl;

    return 0;
}