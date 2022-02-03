/*#include <iostream>
#include <iomanip>
using namespace std;


struct Staff{
  string name;
  int staff_no;
  string fac_div;
  int age;
};


class StaffArray{
private:
    int size;
    int indx;



public:
    StaffArray(int size)
    {
        this->size = size;
        indx = 0;
        staffs = new Staff[size];
    }


    bool isEmpty()
    {
        if(indx-1 < 0) return true;
        else return false;
    }


    bool isFull()
    {
        if(indx == size) return true;
        else return false;
    }


    Staff top() {
        Staff staff; //create object staff of type Staff
        if(isEmpty())
        {
            cout << "Stack is empty" << endl;
        }
        else{

            staff = staffs[indx-1]; //later, assign staff array of index top
        }


        return staff;
    }


    void push(string a, int b, string c, int d)
    {
        if(isFull())
        {
            cout << "Stack is full" << endl;
            return;
        }
        else
        {
            Staff staff;
            staff.name = a;
            staff.staff_no = b;
            staff.fac_div = c;
            staff.age = d;


            staffs[indx] = staff;
            indx++;
            cout << "INSERTED" << endl<<endl;
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

             staff = staffs[indx-1];
              indx--;
        }


        return staff;
    }

};


int main()
{
    StaffArray stk(3);


    if(stk.isEmpty())
        cout << "Stack is empty" << endl<<endl;


    cout << "Insert element 1" << endl;
    stk.push("Zulfakar", 149 , "Law", 50);


    cout << "Insert element 2" << endl;
    stk.push("Ooi Ji Woo", 637 , "Agriculture", 42);

    cout << "Insert element 3" << endl;
 	stk.push("Abdullah", 721 , "Economics", 26);

	Staff staff = stk.top();

	//print all staffs' detail, at the same time pop them all
	while(!stk.isEmpty())
	{
		staff = stk.pop(); //whenever pop, the popped index that hv been safe in staff will be used
		cout << "Name: " << staff.name << endl
         << "Staff number: " <<staff.staff_no  << endl
         << "Faculty/Division: " <<staff.fac_div<< endl
         << "Age: " << staff.age << endl;
    	cout << endl;
	}


    cout << "----------------------------------------------------------" <<endl;


//    cout <<endl<< "The top of stack is: " << endl;
//    Staff staff = stk.top();
//    cout << "Name: " << staff.name << endl
//         << "Staff number: " << staff.staff_no << endl
//         << "Faculty/Division: " << staff.fac_div << endl
//         << "Age: " << staff.age << endl;
//    cout << endl;
//
//	cout<<"Pop stack once"<<endl;
//	staff = stk.pop();
//	cout<<"POPPED"<<endl<<endl;
//
//    cout<<"Pop stack twice"<<endl;
//    staff = stk.pop();
//   	cout<<"POPPED"<<endl<<endl;
//
//    cout << "Current pop from stack is: " << endl;
// 	cout << "Name: " << staff.name << endl
//         << "Staff number: " << staff.staff_no << endl
//         << "Faculty/Division: " << staff.fac_div << endl
//         << "Age: " << staff.age << endl;
//   	cout << endl;
//
//   	staff = stk.top();
//    cout << "Current top of stack is: " << endl;
//	cout << "Name: " << staff.name << endl
//         << "Staff number: " << staff.staff_no << endl
//         << "Faculty/Division: " << staff.fac_div << endl
//         << "Age: " << staff.age << endl;
//   	cout << endl;
    return 0;
}*/


//Exercise 2
// expression having multiple digit operands
#include <bits/stdc++.h>
using namespace std;

// Stack type
class Stack
{
	public:
	int top;
	unsigned capacity;
	int* array;
};

// Stack Operations
Stack* createStack( unsigned capacity )
{
	Stack* stack = new Stack();

	if (!stack) return NULL;

	stack->top = -1;
	stack->capacity = capacity;
	stack->array = new int[(stack->capacity * sizeof(int))];

	if (!stack->array) return NULL;

	return stack;
}

int isEmpty(Stack* stack)
{
	return stack->top == -1 ;
}

int peek(Stack* stack)
{
	return stack->array[stack->top];
}

int pop(Stack* stack)
{
	if (!isEmpty(stack))
		return stack->array[stack->top--] ;
	return '$';
}

void push(Stack* stack,int op)
{
	stack->array[++stack->top] = op;
}


// The main function that returns value
// of a given postfix expression
int evaluatePostfix(char* exp)
{
	// Create a stack of capacity equal to expression size
	Stack* stack = createStack(strlen(exp));
	int i;

	// See if stack was created successfully
	if (!stack) return -1;

	// Scan all characters one by one
	for (i = 0; exp[i]; ++i)
	{
		//if the character is blank space then continue
		if(exp[i] == ' ')continue;

		// If the scanned character is an
		// operand (number here),extract the full number
		// Push it to the stack.
		else if (isdigit(exp[i]))
		{
			int num=0;

			//extract full number
			while(isdigit(exp[i]))
			{
			num = num * 10 + (int)(exp[i] - '0');
				i++;
			}
			i--;

			//push the element in the stack
			push(stack,num);
		}

		// If the scanned character is an operator, pop two
		// elements from stack apply the operator
		else
		{
			int val1 = pop(stack);
			int val2 = pop(stack);

			switch (exp[i])
			{
			case '+': push(stack, val2 + val1); break;
			case '-': push(stack, val2 - val1); break;
			case '*': push(stack, val2 * val1); break;
			case '/': push(stack, val2/val1); break;

			}
		}
	}
	return pop(stack);
}

int main()
{
	char exp[] = "4 12 10 2 3 ^ + 2* + -";
	cout << evaluatePostfix(exp);
	return 0;
}
// This code is contributed by rathbhupendra
