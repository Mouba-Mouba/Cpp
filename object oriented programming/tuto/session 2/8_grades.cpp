#include <iostream>
using namespace std;
int main() {
    int mark;
    cout << "Enter a mark: ";
    cin >> mark;
    cout << "Grade: ";
    if (mark <= 100 && mark >= 0) {
        if (mark >= 81) {
            cout << "A";
        }
        else if (mark >= 71) {
            cout << "B";
        }
        else if (mark >= 61) {
            cout << "C";
        }
        else if (mark >= 51) {
            cout << "D";
        }
        else {
            cout << "F";
        }
        cout << endl;
    }
    else {
        cout << "Invalid mark\n";
    }

}