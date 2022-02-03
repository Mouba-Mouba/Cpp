#include <iostream>
#include <iomanip>
#define PI 3.14159

using namespace std;

void inctwo(int &n){
    n = n+2;
}
//write a function that takes an integers n as parameter and returns the following sum 1+2+3+...n
//cylinder
double calcBaseArea(double);
double calcSurfArea(double, double);
double calcvolume(double, double);
int sumton(int n){
        int ans = 0;
        for (int i = 1; i <= n ; ++i){
            ans +=i;
        }
        return ans;
    }
    void countDigits(long long int n){
        int zeros = 0;
        int evens = 0;
        int odds = 0;
        while (n!=0){
            int dig = n % 10;
            n /= 10;
            if (dig == 0){
                zeros++;
            }
            else if (dig % 2 ==0){
                evens++;
            }
            else {
                odds++;
            }
        }
        cout << "Number of 0s: " << zeros << endl;
        cout << "Number of evens: "<< evens <<endl;
        cout << "Number of odds: "<< odds <<endl;
    }
int main()
   //reverse number
/*{
    int n;
    cout << "enter a positive integer, n: ";
    cin >> n;

    cout << "reversed number = ";
    while (n != 0){
        int x = n % 10;
        cout << x;
        n /= 10;
    }
    cout << endl;
    return 0 ;
}*/

/*{
    int n;
    cout << "enter n :";
    cin >> n;
  for (int col = 1; col <= n ; ++ col){
    for (int row = 1 ; row < col ; ++ row){
     cout << '*' ;
    }
    cout << endl;
  }

}*/

/*{
   //write a program that calls your function with n=2,5,100
   int x;
            do {cout << "enter a number x : ";
            cin >> x;
            if (x>0){
            int ans = sumton(x);
            cout << " sum to " << x << " is " << ans << endl;
            }
            }while (x>0);

*/
/*{
    //write a function that takes a long long integer as parameter and print the number of 0s, even digits, and odd digits.
    cout << "1234567890" << endl;
    countDigits(1234567890);
}*/
/*{
    double r, h;
    cout << "Enter radius: ";
    cin >> r;
    cout << "Enter height: ";
    cin >> h;

    double ba = calcBaseArea(r);
    double tsa = calcSurfArea(r, h);
    double vol = calcvolume(r, h);

    cout << "Base area = " << ba;
    cout << "\nTotal surface area = " << tsa;
    cout << "\nvolume = " << vol;

    return 0;
}
   double calcBaseArea(double r){
           double ans = PI * r * r;
           return ans;
   }

   double calcSurfArea(double r, double h){
          double area = 2 * calcBaseArea(r) + 2 * PI * r * h;
          return area;
   }

   double calcvolume(double r, double h){
          double vol = calcBaseArea(r) * h;
          return vol;
   }*/


{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    inctwo(n);

    cout << "Incremented by 2: " << n;

    return 0;
}

