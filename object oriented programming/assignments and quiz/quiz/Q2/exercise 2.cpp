#include <iostream>
#include <string.h>
#define SIZE 20

using namespace std;
void Grade(int grade){
    if (grade >=80)
        cout << "A" << endl;
    else if (grade >= 75 && grade < 80)
        cout << "A-" << endl;
    else if (grade >= 70 && grade < 75)
        cout << "B+" << endl;
    else if (grade >= 65 && grade < 70)
        cout << "B" << endl;
    else if (grade >= 60 && grade < 65)
        cout << "B-" << endl;
    else if (grade >= 55 && grade < 60)
        cout << "C+" << endl;
    else if (grade >= 50 && grade < 55)
        cout << "C" << endl;
    else if (grade >= 0 && grade < 50)
        cout << "F" << endl;
}
int highscore (int arr[SIZE]){
    int testscore =0;
    for (int i = 0 ; i < SIZE ; ++i){
        if (testscore < arr[i]){
            testscore = arr[i];
        }
    }
    return testscore;
}

void studentData(){
    struct studentType{
        string studentFName, studentLName;
        int testScore;
        char grade;
    };
    studentType student;
    studentType arr[SIZE] = {student.studentFName,student.studentLName,student.testScore};
    int score [SIZE] = {student.testScore};
    string name [SIZE] = {student.studentFName};
    for(int i=0; i<SIZE; i++){
        cout << "FirstName student No " << i+1 << ": ";
        cin >> arr[i].studentFName;
        cout << "LastName student No " << i+1 << ": ";
        cin >> arr[i].studentLName;
        cout << "Test Score student No " << i+1 << ": ";
        cin >> arr[i].testScore;
        Grade(arr[i].testScore);
        score[i] = arr[i].testScore;
        cout << endl;
    }
    for(int i=0; i<SIZE; i++){
        cout << arr[i].studentLName << ", " << arr[i].studentFName << endl;
    }
    cout << "The highest score is: "<<highscore(score)<<endl;
    cout << "Names of the students having the highest test score: " << endl;

}

int main()
{
    studentData();
    return 0;
}
