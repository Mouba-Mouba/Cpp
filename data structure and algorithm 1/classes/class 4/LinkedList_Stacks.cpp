#include <iostream>

using namespace std;
class Stack
{
    private:
        struct Node
        {
            int data;
            Node* link;
        };
        struct Node* top;
    public:
        Stack()
        {
            top=NULL;
        }
        void Push(int x)
        {
            Node* NewNode = new Node();
            NewNode->data = x;
            NewNode ->link = top;
            top = NewNode;
        }
        void Pop()
        {
            Node* temp= top;
            if (top==NULL)
                return;
            top=top->link;
            delete (temp);
        }
        void Print()
        {
            Node* temp = top;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->link;
            }
            cout<<endl;
        }
       
};
int main()
{
    Stack S;
    S.Push(5); 
	S.Print();
    S.Push(6); 
	S.Print();
    S.Push(8); S.Print();
    S.Push(9); S.Print();
    S.Pop();   S.Print();
    S.Pop();   S.Print();
    

    return 0;
}
