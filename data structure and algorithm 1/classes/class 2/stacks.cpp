#include <iostream>
#include <iomanip>
using namespace std;


struct Staff{
int id;
string name;
string faculty;
int age;
};


class Stack{
private:
    int size;
    int idx;
    Staff *staffs;

    
public:


    Stack(int size)
    {
        this->size = size;
        idx = 0;
        staffs = new Staff[size];
    }


    bool isEmpty()
    {
        if(idx-1 < 0) return true;
        else return false;
    }


    bool isFull()
    {
        if(idx == size) return true;
        else return false;
    }


    Staff top() {
        Staff staff;
        if(isEmpty())
        {
            cout << "Stack is empty" << endl;
        }
        else{
            
            staff = staffs[idx-1];
        }


        return staff;
    }


    void push(int id, string name, string faculty, int age)
    {
        if(isFull())
        {
            cout << "Stack is full" << endl;
            return;
        }
        else
        {
            Staff staff;
            staff.id = id;
            staff.name = name;
            staff.faculty = faculty;
            staff.age = age;


            staffs[idx] = staff;
            idx++;
            cout << "inserted" << endl;
        }
    }


    Staff pop()
    {
        Staff staff;
        if(isEmpty())
        {
           cout << "Stack is empty" << endl;
        }
        else{
            
             staff = staffs[idx-1];
            idx--;
        }


        return staff;
    }




};


int main()
{
    Stack s(2);


    if(s.isEmpty())
        cout << "Stack is empty" << endl;
    

    cout << "Insert element 1" << endl;
    s.push(1, "an", "kict", 24);


    cout << "Insert element 2" << endl;
    s.push(2, "juwaidi", "kict", 56);


    cout << "Insert element 3" << endl;             // if you run the program, it will show stack is full
    s.push(3, "hello", "world", 76);
//

    cout << "----------------------------------------------------------" << endl;


    cout << "The top of stack is: " << endl;
    Staff staff = s.top();
    cout << "ID: " << staff.id << endl
         << "Name: " << staff.name << endl
         << "Faculty: " << staff.faculty << endl
         << "Age: " << staff.age << endl;
    cout << endl;


    staff = s.pop();
    cout << "Current pop from stack is: " << endl;
    cout << "ID: " << staff.id << endl
         << "Name: " << staff.name << endl
         << "Faculty: " << staff.faculty << endl
         << "Age: " << staff.age << endl;
         
          cout << "The top of stack is: " << endl;
    		staff = s.top();
    cout << "ID: " << staff.id << endl
         << "Name: " << staff.name << endl
         << "Faculty: " << staff.faculty << endl
         << "Age: " << staff.age << endl;
    cout << endl;


    cout << endl;


    staff = s.pop();
    cout << "Current pop from stack is: " << endl;
    cout << "ID: " << staff.id << endl
         << "Name: " << staff.name << endl
         << "Faculty: " << staff.faculty << endl
         << "Age: " << staff.age << endl;
//
//
    staff = s.top();                                                //this time it will print stack is empty and assign random value.
    cout << "Current top of stack is: " << endl;
    cout << "ID: " << staff.id << endl
         << "Name: " << staff.name << endl
         << "Faculty: " << staff.faculty << endl
         << "Age: " << staff.age << endl;

    return 0;
}
