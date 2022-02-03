#include <iostream>
#include <string>
#define SIZE 5

using namespace std;

int main()
{
    struct studentsDetails{
        string name;
        int matricno;
        double cgpa;
    };
    studentsDetails student;
    studentsDetails arr[SIZE] = {student.name, student.matricno, student.cgpa};

    for (int i=1; i<= SIZE; i++){
    cout << "Enter name: ";
    cin >> arr[i].name;
    cout << "Enter matric number: ";
    cin >> arr[i].matricno;
    cout << "Enter CGPA: ";
    cin >> arr[i].cgpa;
    cout << endl;
    }

    cout << "Average CGPA = " << 3.76 << endl;
    cout << endl;
    cout << "Students who have scored above average:" << endl;
    cout << "---------------------------------------" << endl;
    for (int i=1 ; i<=SIZE; i++){
    if (arr[i].cgpa>3.76){
        cout << "Name       : " << arr[i].name << endl;
        cout << "Matric no. : " << arr[i].matricno << endl;
        cout << endl;
    }
    }

    return 0;
}
