#include <iostream>
#include <string.h>

using namespace std;

/*struct staff{
        string name;
        int stfn;
        string fd;
};
class StaffList{

        private:
                staff arr[10];  //Stack size
                int count;
        public:
         StaffList()
                {
                        arr[0].name="Zulfakar";
                        arr[0].stfn=149;
                        arr[0].fd="Law";
                        arr[1].name="Ooi Ji Woo";
                        arr[1].stfn=637;
                        arr[1].fd="Agriculture";
                        arr[2].name="Abdullah";
                        arr[2].stfn=721;
                        arr[2].fd="Economics";
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
        }
          staff pop()
        {
                staff a;
                if (count==-1){
                        a.stfn=0;
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
        StaffList obj;
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
                        if(n.stfn==0)
                                cout<<"Sorry Stack is Empty!\n";
                        else
                        cout<<"\nName: "<<n.name<<"\nStaff Number: "<<n.stfn<<"\nFaculty Division: "<<n.fd;
                        }
                else if(choice==4)
                        break;
                else cout<<"Enter correct choice!";
        }
}*/
#include<iostream>
#include<string>
using namespace std;
struct node {
int value;
node* left;
node* right;
};
node* createNode(int child){

node* newNode = new node;
newNode->value = child;
newNode->left = NULL;
newNode->right = NULL;

return newNode;
}
void insertLeft(node *root, int child) {
root->left = createNode(child);
}
void insertRight(node *root, int child){
root->right = createNode(child);
}
void inorder(node* root){
if(root == NULL) return;
inorder(root->left);
cout << root->value << " / ";
inorder(root->right);
}
void preorder( node* root){
if(root == NULL) return;
cout << root->value << " / ";
preorder(root->left);
preorder(root->right);
}
void postorder(node* root) {
if(root == NULL) return;
postorder(root->left);
postorder(root->right);
cout << root->value << " / ";
}
int main(){
node* root = createNode(55);
insertLeft(root,31 );
insertRight(root, 63);
insertLeft(root->left, 17);
insertRight(root->right, 40);
insertRight(root->left->right, 22);
insertRight(root->left->right->right, 22);

cout << "Inorder traversal :  " << endl;
inorder(root);
cout << "" << endl;
cout << "\nPreorder traversal :"<< endl;
preorder(root);
cout << "" << endl;
cout << "\nPostorder traversal :"<< endl;
postorder(root);
}




