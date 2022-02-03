#include <iostream>
#include <math.h>

using namespace std;
double a;
double b;
double c;
double result1;
double X1;
double X2;
int main()
{
    cout << "how to resolve an equation" << endl ;
    cout << " enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout << "enter c: ";
    cin >> c;
    result1= (b*b)-(4*a*c);
    cout << "result1="<<(b*b)-(4*a*c)<< endl ;

    if (result1>0) {
        X1=-b+sqrt(result1)/2*a;
        X2=-b-sqrt(result1)/2*a;
        cout << "X1= "<<X1<<endl;
        cout << "X2= "<<X2<<endl;

    }
    else if(result1<0){

        cout << "No solution";
    }
    else {

        X1=-b/2*a;
        X2=-b/2*a;

        cout << "Unique solution X= "<<X1;
    }
    return 0;
}
