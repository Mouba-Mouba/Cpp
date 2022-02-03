#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    struct employee {
        string ename;
        int eid;
        double rate;
        int hours;
    };

    employee myEmp;

    cout << "Enter employee details" << endl;
    cout << "Name: ";
    cin >> myEmp.ename;
    cout << "Employee ID: ";
    cin >> myEmp.eid;
    cout << "Rate: ";
    cin >> myEmp.rate;
    cout << "Hours: ";
    cin >> myEmp.hours;

    double sal = myEmp.hours * myEmp.rate;

    cout << endl << endl << "Employee details" << endl;
    cout << "Name: "<< myEmp.ename << endl;
    cout << "Employee ID: " << myEmp.eid << endl;
    cout << fixed << showpoint << setprecision(2) << "Salary: RM" << sal << endl;
    return 0;
}