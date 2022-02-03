#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    struct student {
        string name;
        int matric;
        double cgpa;
    };

    student arr[5];

    //Accept from the user details of five students
    for (int i = 0; i < 5; ++i) {
        cout << "Enter name : ";            cin >> arr[i].name;
        cout << "Enter matric number : " ;  cin >> arr[i].matric;
        cout << "Enter CGPA : ";            cin >> arr[i].cgpa;
        cout << endl;
    }

    //Calculate and print average CGPA
    double average = 0;
    for (int i = 0; i < 5; ++i) {
        average += arr[i].cgpa;
    }
    average /= 5;
    cout << fixed << showpoint << setprecision(2);
    cout << "Average CGPA = " << average << endl;

    //Print names and matric numbers of students with above-averge CGPA
    cout << "Students who have scored above average:" << endl;
    cout << "---------------------------------------" << endl;
    for (int i = 0; i < 5; ++i) {
        if (arr[i].cgpa > average) {
            cout << "Name       : " << arr[i].name << endl;
            cout << "Matric No. : " << arr[i].matric << endl;
            cout << endl;
        }
    }

    return 0;
}

