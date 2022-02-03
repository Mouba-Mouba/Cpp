#include <iostream>
#include <iomanip>
using namespace std;


struct Staff{
char x;
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
        if(!isEmpty())
        {
            staff = staffs[idx-1];
        }
        else{
            cout << "Stack is empty" << endl;
        }


        return staff;
    }


    void push(char x)
    {
        if(isFull())
        {
            cout << "Stack is full" << endl;
            return;
        }
        else
        {
            Staff staff;
            staff.x = x;

            staffs[idx] = staff;
            idx++;
        }
    }


    Staff pop()
    {
        Staff staff;
        if(!isEmpty())
        {
            staff = staffs[idx-1];
            idx--;
        }
        else{
            cout << "Stack is empty" << endl;
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
    s.push('G');
    s.push('e');
    s.push('e');
    s.push('k');





    cout << "----------------------------------------------------------" << endl;


    cout << "The top of stack is: " << endl;
    Staff staff = s.top();
    cout << "ID: " << staff.x << endl;
	    cout << endl;
	    
	staff = s.pop();
    cout << "Current pop from stack is: " << endl;
    cout << " " << staff.x << endl;
	staff = s.pop();
    //cout << "Current pop from stack is: " << endl;
    cout << " " << staff.x << endl;
	staff = s.pop();
    cout << " " << staff.x << endl;
staff = s.pop();
    cout << " " << staff.x << endl;
    return 0;
}
