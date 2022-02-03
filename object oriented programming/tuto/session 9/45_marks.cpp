#include <iostream>
using namespace std;
#define QUES 5
bool correct[QUES] = {1, 0, 0, 1, 1};
int calcmarks(bool c[], bool a[], int q) {
    int marks = 0;
    for (int ques = 0; ques < q; ++ques) {
        if (c[ques] == a[ques]) {
            ++marks;
        }
    }
    return marks;
}
int main() {
    bool answers[QUES];
    cout << "Enter answers for 5 questions : " ;
    for (int i = 0; i < QUES; ++i) {
        cin >> answers[i];
    }
    int m = calcmarks(correct, answers, QUES);
    cout << "Marks = " << m << endl;
}