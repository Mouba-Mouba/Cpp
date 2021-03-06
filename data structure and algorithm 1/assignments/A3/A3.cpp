#include <iostream>
#include <iostream>

using namespace std;

//class definitin
class StaffList {
   private:
   string name;
   string staff_number;
   string faculty   ;
   int age;
public :
       StaffList( string name, string staff_number, string faculty , int age   ){

           this->name = name;
           this->staff_number = staff_number;
           this->faculty = faculty;
           this->age = age;

       }
       //getters
       string getName()
       {
           return name;
       }

       string getStaff_number()
       {
           return staff_number;
       }

       string getFaculty()
       {
           return faculty;
       }

       int getAge()
       {
           return age;
       }



        //setters
       void setName(string name)
       {
           this->name = name;
       }

       void setStaff_number(string staff_number)
       {
           this->staff_number = staff_number;
       }

       void setFaculty(string faculty)
       {
           this->faculty = faculty;
       }

       void setAge(int age)
       {
           this->age = age;
       }

       //member function


       // displayStaffList
       void displayStaffList()
       {

           cout << "name :" << name <<endl;
           cout << "faculty :" << faculty <<endl;
       }
};

// main
int main(){

   StaffList a = StaffList("Min Ho", "143", "Medicine" , 30);
   StaffList b = StaffList("Ji Woo", "437", "Agriculture" , 42);
   StaffList c = StaffList("Fattah", "321", "Aeronautic" , 26);

   cout << "displaying staff A" <<endl;
   a.displayStaffList();

   cout << endl << "displaying staff B" <<endl;
   b.displayStaffList();

   cout << endl<< "displaying staff C" <<endl;
   c.displayStaffList();

   return 1;

}
