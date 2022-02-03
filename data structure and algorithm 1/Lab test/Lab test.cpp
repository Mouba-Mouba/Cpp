#include <iostream>
#include <vector>
//Question 5
using namespace std;
/*struct Node
{
        float data;
        struct Node* left, *right;
        Node(float data)
        {
                this->data = data;
                left = right = NULL;
        }
};
// Given a binary tree, print its nodes in inorder
void printInorder(struct Node* node)
{
        if (node == NULL)
                return;
        // first recur on left child
        printInorder(node->left);
        // then print the data of node
        cout << node->data << " ";
        // now recur on right child
        printInorder(node->right);
}
// Driver program to test above functions
int main()
{
        struct Node *root = new Node(7.5);
        root->left = new Node(5.3);
        root->right = new Node(8.2);
        root->right->left = new Node(2.9);
        root->right->left->right = new Node(9.7);
        root->right->right->left = new Node(22.2);
        root->right->right->right = new Node(9.5);
        cout << "\nInorder traversal of binary tree is \n";
        printInorder(root);
        cout << endl;
        return 0;
}
//Question 2
//using structure to store Players
struct Player{
    int id=-1;
};

int main()
{
    //array odd structurer player
    struct Player player[3];
    int count=0;
    //interning element
    player[0].id=596;
    cout<<"inserted!"<<endl;
    player[1].id=132;
    cout<<"inserted!"<<endl;
    player[2].id=328;
    cout<<"inserted!"<<endl;

    for(int i=0;i<3;i++){
      if(player[i].id!=-1){
          count++;
      }
    }

    cout<<"Number of Players :"<<count<<endl;

    for(int i=0;i<3;i++){
      if(player[i].id!=-1){
          cout<<player[i].id<<" ";
      }
    }
    cout<<endl;
    //dropping element
    cout<<"Dropped!"<<endl;
    count=count-1;
    player[0].id=-1;
    cout<<"Number of Players :"<<count<<endl;
    for(int i=0;i<3;i++){
      if(player[i].id!=-1){
          cout<<player[i].id<<" ";
      }
    }

    return 0;
}*/
//Question 1
struct Node
{
        int data;
        struct Node* left, *right;
        Node(int data)
        {
                this->data = data;
                left = right = NULL;
        }
};
void printPostorder(struct Node* node)
{
        if (node == NULL)
                return;
        // first recur on left subtree
        printPostorder(node->left);
        // then recur on right subtree
        printPostorder(node->right);
        // now deal with the node
        cout << node->data << " ";
}
/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct Node* node)
{
        if (node == NULL)
                return;
        /* first recur on left child */
        printInorder(node->left);
        /* then print the data of node */
        cout << node->data << " ";
        /* now recur on right child */
        printInorder(node->right);
}
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct Node* node)
{
        if (node == NULL)
                return;
        /* first print data of node */
        cout << node->data << " ";
        /* then recur on left sutree */
        printPreorder(node->left);
        /* now recur on right subtree */
        printPreorder(node->right);
}
/* Driver program to test above functions*/
int main()
{
        struct Node *root = new Node(55);
        root->left = new Node(31);
        root->right = new Node(63);
        root->right->left = new Node(17);
        root->right->left->right = new Node(40);
        root->right->left->right = new Node(22);
        root->right->left->right->right->right = new Node(24);

        cout << "\nPreorder traversal of binary tree is \n";
        printPreorder(root);
        cout << endl;
        cout << "\nInorder traversal of binary tree is \n";
        printInorder(root);
        cout << endl;
        cout << "\nPostorder traversal of binary tree is \n";
        printPostorder(root);
        cout << endl;
        return 0;
}
//Question 4

using namespace std;

int main(){


	int array[5];
	for (int i=0; i<5; i++){
		cout <<"Integer "<<i+1<<": ";
		cin >> array[i];
		cout <<endl;
	}

	int *p = &array[0];

	cout <<"Elements in the array are:"<<endl;

	for (int i=0; i<5; i++){
		cout << "\nElement " << i+1 <<" contains the value "<<*p << " and is located at " << p << endl;
		p++;
	}

	return 0;
}
