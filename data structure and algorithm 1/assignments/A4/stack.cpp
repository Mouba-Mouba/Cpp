// C++ program to evaluate value of a postfix expression
#include <iostream>
#include <string.h>

using namespace std;

struct staff{
        string name;
        int stfn;
        string fd;
        int age ;
};
class StaffArray{

        private:
                staff arr[10];  //Stack size
                int count;
        public:
         StaffArray()
                {
                        arr[0].name="Zulfakar";
                        arr[0].stfn=149;
                        arr[0].fd="Law";
                        arr[0].age=50;
                        arr[1].name="Ooi Ji Woo";
                        arr[1].stfn=637;
                        arr[1].fd="Agriculture";
                        arr[1].age=42;
                        arr[2].name="Abdullah";
                        arr[2].stfn=721;
                        arr[2].fd="Economics";
                        arr[2].age=26;
                        count=2;
                }
          void push()
        {
                if (count==9){                     // Checking stack overflow condition
                        cout<<"Sorry Stack is full!\n";
                        return;}
                count++;
                cout<<"Enter Name: ";
                cin>>arr[count].name;
                cout<<"Enter Staff Number: ";
                cin>>arr[count].stfn;
                cout<<"Enter Faculty/Division: ";
                cin>>arr[count].fd;
                cout<<"Enter Age: ";
                cin>>arr[count].age;
        }
          staff pop()
        {
                staff a;
                if (count==-1){
                        a.age=0;
                return a;}
                return(arr[count--]);
        }
          void display()
        {
                if(count==-1){
                        cout<<"Stack is empty, Nothing to display! ";
                        return;}

                int index=count;
                for(int i=index;i>=0;i--)
                        cout<<"\nName: "<<arr[i].name<<"\nFaculty/Division: "<<arr[i].fd;
        }
};
int main()
{
        StaffArray obj;
        int choice;
        while(true){
                cout<<"\n\n1.Dispaly name and faculty division of all elements\n2.Push()\n3.Pop()\n4.exit()";
                cout<<endl;
                cin>>choice;
                if (choice==1)
                        obj.display();
                else if(choice==2)
                        obj.push();
                else if(choice==3){
                        staff n=obj.pop();
                        if(n.age==0)
                                cout<<"Sorry Stack is Empty!\n";
                        else
                        cout<<"\nName: "<<n.name<<"\nStaff Number: "<<n.stfn<<"\nFaculty Division: "<<n.fd<<"\nAge: "<<n.age;
                        }
                else if(choice==4)
                        break;
                else cout<<"Enter correct choice!";
        }
}

