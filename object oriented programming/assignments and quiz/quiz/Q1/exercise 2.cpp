#include <iostream>

using namespace std;

int main()
{
    double payRate, workHours1, workHours2, workHours3, workHours4, workHours5;
  double beforeTaxes, afterTaxes;
  double clothesMoney, schoolMoney;
  double afterMoney;
  double yourBonds, parentsBonds;

    cout << "Enter the pay rate: $";
      cin >> payRate;

    cout << "Enter hours worked for week one: ";
      cin >> workHours1;

        cout << "Enter hours worked for week two: ";
      cin >> workHours2;

        cout << "Enter hours worked for week three: ";
      cin >> workHours3;

        cout << "Enter hours worked for week four: ";
      cin >> workHours4;

        cout << "Enter hours worked for week five: ";
      cin >> workHours5;

    beforeTaxes = payRate *(workHours1 + workHours2 + workHours3 + workHours4 + workHours5);
      cout << "Your income before taxes is $" << beforeTaxes << endl;

    afterTaxes = beforeTaxes * .86;
      cout << "Your income after taxes is $" << afterTaxes << endl;

    clothesMoney = afterTaxes * .10;
      cout << "The money you spend on clothes is $" << clothesMoney << endl;

    schoolMoney = afterTaxes * .01;
      cout << "The money you spend on school supplies is $" << schoolMoney << endl;

    afterMoney = afterTaxes - clothesMoney - schoolMoney;

    yourBonds = afterMoney * .25;
      cout << "The money you spend to buy bonds is $" << yourBonds << endl;

    parentsBonds = yourBonds * .50;
      cout << "The money your parents spend to buy bonds is $" << parentsBonds << endl;
    return 0;
}
