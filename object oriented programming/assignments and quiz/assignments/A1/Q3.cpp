#include <iostream>

using namespace std;

int main()
{
    double h , w , BMI;

    cout << "This program calculates BMI" << endl;
    cout << "Enter your height (in m): ";
    cin >> h;
    cout << "Enter your weight (in kg): ";
    cin >> w;
      BMI = w/(h*h);
      if (BMI < 18.5){
        cout << "your BMI is "<< BMI << endl;
        cout << "your Underweight"<< endl;

      }
            else if (BMI >=18.5 || BMI < 25 ){
        cout << "your BMI is "<< BMI << endl;
        cout << "you are normal"<< endl;

      }
                  else if (BMI >=25 || BMI < 30 ){
        cout << "your BMI is "<< BMI << endl;
        cout << "you are Overweight"<< endl;

      }

         else if (BMI >=30 || BMI < 35 ){
        cout << "your BMI is "<< BMI << endl;
        cout << "you are Obese"<< endl;

      }
         else {
        cout << "your BMI is "<< BMI << endl;
        cout << "you are Severely obese"<< endl;

      }
    return 0;
}
