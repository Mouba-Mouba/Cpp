#include <iostream>
#include <cmath>
using namespace std;
double calcMean(int x1, int x2, int x3, int x4, int x5) {
    double ans = (x1+x2+x3+x4+x5) / 5;
    return ans;
}
double calcSD(int x1, int x2, int x3, int x4, int x5) {
    int x = calcMean(x1, x2, x3, x4, x5);
    double ans = sqrt((pow(x1-x, 2) + pow(x2-x, 2) + pow(x3-x, 2) + pow(x4-x, 2) + pow(x5-x, 2))/5);
    return ans;
}
int main() {
    int x1, x2, x3, x4, x5;
    cout << "This program calculates mean and standard deviation of five integers" << endl;
    cout << "Enter the five integers separated by spaces: " ;
    cin >> x1 >> x2 >> x3 >> x4 >> x5;
    double m = calcMean(x1, x2, x3, x4, x5);
    double sd = calcSD(x1, x2, x3, x4, x5);
    cout << "Mean = " << m << endl;
    cout << "Standard deviaton = " << sd << endl;
    return 0;
}