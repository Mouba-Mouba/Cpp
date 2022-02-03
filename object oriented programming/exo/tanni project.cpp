#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <iomanip>

using namespace std;
int main()
{
    cout << "\t\t***Menu***"<<endl;
    cout << "1 => Magazine "<<endl;
    cout << "2 => Comics "<<endl;
    cout << "3 => Exit "<<endl;

    cout <<"\nPlease enter a valid number: ";
    int choice, num, money;
    string list[] = {"World Politics", "Sports Today     ", "Vogue           ", "World Outlook", "Forbes Business"};
    int price[] = {8,8,8,7,4};
    int quantity[] = {20,20,20,20,20};

    string list1[] = {"James Bond Girl Machine", "Billo and Big Fish      ", "Infinity             ", "Pinki                  ", "Spiderman                "};
    int price1[] = {5,5,5,4,4};
    int quantity1[] = {20,20,20,20,20};

    cin >> choice;
    switch(choice)
    {
    case 1:
        cout << "-----------------------------------------------" << endl;
        cout << "You have select Magazine" << endl << endl;
        cout << "No       Name \t\t Price \t\t Quantity" << endl;

        for(int i=0; i<5; i++)
            cout << i+1 <<"  " << list[i] << "\t  RM" << price[i] << "\t\t    " << quantity[i]<<endl;
        cout << "\nChoose your magazine and enter a valid number from 1 to 5: ";
        cin >> num;
        if(num == 1)
        {
            cout << "\nYou have chosen " << list[0]<<endl;
            cout << "The price is: RM" << price[0]<<endl;
            cout << "Enter the money: ";
            cin >> money;
            if(money<price[0])
            {
             cout << "We are sorry the money is less" << endl;
             exit(1);
            }
            else
                cout << "The remain money is: RM" << money-price[0] << endl;
            cout << "----------------------------------------------"<<endl;
            cout << "Thank you and come again" << endl<<endl;
        }
        else if(num == 2)
        {
            cout << "\nYou have chosen " << list[1]<<endl;
            cout << "The price is: RM" << price[1]<<endl;
            cout << "Enter the money: ";
            cin >> money;
            if(money<price[1])
            {
             cout << "We are sorry the money is less" << endl;
             exit(1);
            }
            else
                cout << "The remain money is: RM" << money-price[1] << endl;
            cout << "----------------------------------------------"<<endl;
            cout << "Thank you and come again" << endl<<endl;
        }
        else if(num == 3)
        {
            cout << "\nYou have chosen " << list[2]<<endl;
            cout << "The price is: RM" << price[2]<<endl;
            cout << "Enter the money: ";
            cin >> money;
            if(money<price[2])
            {
             cout << "We are sorry the money is less" << endl;
             exit(1);
            }
            else
                cout << "The remain money is: RM" << money-price[2] << endl;
            cout << "----------------------------------------------"<<endl;
            cout << "Thank you and come again" << endl<<endl;
        }
        else if(num == 4)
        {
            cout << "\nYou have chosen " << list[3]<<endl;
            cout << "The price is: RM" << price[3]<<endl;
            cout << "Enter the money: ";
            cin >> money;
            if(money<price[3])
            {
             cout << "We are sorry the money is less" << endl;
             exit(1);
            }
            else
                cout << "The remain money is: RM" << money-price[1] << endl;
            cout << "----------------------------------------------"<<endl;
            cout << "Thank you and come again" << endl<<endl;
        }
        else if(num == 5)
        {
            cout << "\nYou have chosen " << list[4]<<endl;
            cout << "The price is: RM" << price[4]<<endl;
            cout << "Enter the money: ";
            cin >> money;
            if(money<price[4])
            {
             cout << "We are sorry the money is less" << endl;
             exit(1);
            }
            else
                cout << "The remain money is: RM" << money-price[4] << endl;
            cout << "----------------------------------------------"<<endl;
            cout << "Thank you and come again" << endl<<endl;
        }
        else
        {
            cout << "We're Sorry Invalid input :p "<<endl<<endl;
            exit(1);
        }
        break;

    case 2:
        cout << "-----------------------------------------------" << endl;
        cout << "You have select Comics" << endl << endl;
        cout << "No       Name \t\t\t Price \t\t Quantity" << endl;

        for(int i=0; i<5; i++)
            cout << i+1 <<"  " << list1[i] << "\t  RM" << price1[i] << "\t\t    " << quantity1[i]<<endl;
        cout << "\nChoose your magazine and enter a valid number from 1 to 5: ";
        cin >> num;
        if(num == 1)
        {
            cout << "\nYou have chosen " << list1[0]<<endl;
            cout << "The price is: RM" << price1[0]<<endl;
            cout << "Enter the money: ";
            cin >> money;
            if(money<price1[0])
            {
             cout << "We are sorry the money is less" << endl;
             exit(1);
            }
            else
                cout << "The remain money is: RM" << money-price1[0] << endl;
            cout << "----------------------------------------------"<<endl;
            cout << "Thank you and come again" << endl<<endl;
        }
        else if(num == 2)
        {
            cout << "\nYou have chosen " << list1[1]<<endl;
            cout << "The price is: RM" << price1[1]<<endl;
            cout << "Enter the money: ";
            cin >> money;
            if(money<price1[1])
            {
             cout << "We are sorry the money is less" << endl;
             exit(1);
            }
            else
                cout << "The remain money is: RM" << money-price1[1] << endl;
            cout << "----------------------------------------------"<<endl;
            cout << "Thank you and come again" << endl<<endl;
        }
        else if(num == 3)
        {
            cout << "\nYou have chosen " << list1[2]<<endl;
            cout << "The price is: RM" << price1[2]<<endl;
            cout << "Enter the money: ";
            cin >> money;
            if(money<price1[2])
            {
             cout << "We are sorry the money is less" << endl;
             exit(1);
            }
            else
                cout << "The remain money is: RM" << money-price1[2] << endl;
            cout << "----------------------------------------------"<<endl;
            cout << "Thank you and come again" << endl<<endl;
        }
        else if(num == 4)
        {
            cout << "\nYou have chosen " << list1[3]<<endl;
            cout << "The price is: RM" << price1[3]<<endl;
            cout << "Enter the money: ";
            cin >> money;
            if(money<price1[3])
            {
             cout << "We are sorry the money is less" << endl;
             exit(1);
            }
            else
                cout << "The remain money is: RM" << money-price1[1] << endl;
            cout << "----------------------------------------------"<<endl;
            cout << "Thank you and come again" << endl<<endl;
        }
        else if(num == 5)
        {
            cout << "\nYou have chosen " << list1[4]<<endl;
            cout << "The price is: RM" << price1[4]<<endl;
            cout << "Enter the money: ";
            cin >> money;
            if(money<price1[4])
            {
             cout << "We are sorry the money is less" << endl;
             exit(1);
            }
            else
                cout << "The remain money is: RM" << money-price1[4] << endl;
            cout << "----------------------------------------------"<<endl;
            cout << "Thank you and come again" << endl<<endl;
        }
        else
        {
            cout << "We're Sorry Invalid input :p "<<endl<<endl;
            exit(1);
        }
        break;

    case 3:
        cout << "You have decided to exit :(" <<endl<<endl;
        exit(1);
    default:
        cout << "We're Sorry Invalid input :p " <<endl<<endl;
    }
}
