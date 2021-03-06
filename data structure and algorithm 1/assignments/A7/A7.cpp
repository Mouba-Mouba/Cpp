#include<iostream>
using namespace std;
//Binary Search Tree Class
class BST {

    //Structure to create BST node
    struct node {
        int staff_number;
        node* left;
        node* right;
    };
    //Initialising root node
    node* root;
    //Function to empty Binary Search Tree
    node* makeEmpty(node* t) {
        if(t == NULL)
            return NULL;
        {
            makeEmpty(t->left);
            makeEmpty(t->right);
            delete t;
        }
        return NULL;
    }
    //Function to insert node in Binary Search Tree
    node* insert(int x, node* t)
    {
        //If tree is empty insert the node as first node
        if(t == NULL)
        {
            t = new node;
            t->staff_number = x;
            t->left = t->right = NULL;
        }
        //Else if value of node lesser than parent node insert in left subtree
        else if(x < t->staff_number)
            t->left = insert(x, t->left);

        //Else if value of node greater than parent node insert in right subtree
        else if(x > t->staff_number)
            t->right = insert(x, t->right);
        return t;
    }
    //Function to find minimum value in left subtree
    node* findMin(node* t)
    {
        //If root node is NULL return NULL
        if(t == NULL)
            return NULL;
        //If no left subtree is present return root node
        else if(t->left == NULL)
            return t;
        //Else traverse left subtree
        else
            return findMin(t->left);
    }
    //Function to find maximum value in right subtree
    node* findMax(node* t) {
        //If root node is NULL return NULL
        if(t == NULL)
            return NULL;
        //If no right subtree is present return root node
        else if(t->right == NULL)
            return t;
        //Else traverse right subtree
        else
            return findMax(t->right);
    }
    //Function to Delete Node
    node* deletenode(int x, node* t) {
        node* temp;
        //If BST empty return NULL
        if(t == NULL)
            return NULL;
        //If value of node lesser than parent node traverse left subtree
        else if(x < t->staff_number)
            t->left = deletenode(x, t->left);
        //If value of node greater than parent node traverse right subtree
        else if(x > t->staff_number)
            t->right = deletenode(x, t->right);
        else if(t->left && t->right)
        {
            temp = findMin(t->right);
            t->staff_number = temp->staff_number;
            t->right = deletenode(t->staff_number, t->right);
        }
        else
        {
            temp = t;
            if(t->left == NULL)
                t = t->right;
            else if(t->right == NULL)
                t = t->left;
            delete temp;
        }
        return t;
    }
    //To print inorder travel of BST
    void inorder(node* t) {
        //If Node is NULL return
        if(t == NULL)
            return;
        //Else travel left subtree first
        inorder(t->left);
        cout << t->staff_number << " ";
        //Then travel right subtree
        inorder(t->right);
    }
public:
    //Constructor Initialising root as NULL
    BST() {
        root = NULL;
    }
    //Destructor to Empty BST
    ~BST() {
        root = makeEmpty(root);
    }
    //Function to Insert in BST
    void insert(int x) {
        root = insert(x, root);
    }
    //Function to delete in BST
    void deletenode(int x) {
        root = deletenode(x, root);
    }
    //Function to Display BST
    void display() {
        cout<<"The Inorder traversal of BST is : ";
        inorder(root);
        cout << endl;
    }
};
int main() {
    //Staff Object
    BST staff;
    //Calling insert Function
    staff.insert(143);
    staff.insert(437);

    //Calling display function
    staff.display();

    //Calling Delete function
    staff.deletenode(143);
    staff.display();
    return 0;
}
