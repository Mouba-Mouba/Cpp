#include <iostream>
using namespace std;
struct Node
{
        string data;
        struct Node* left, *right;
        Node(string data)
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
        struct Node *root = new Node("Ali");
        root->left = new Node("Ahmed");
        root->right = new Node("Alwi");
        root->right->left = new Node("Che_Salmi");
        root->right->right = new Node("Dalilah");
        root->right->left->left = new Node("Farid");
        root->right->left->right = new Node("Eliza");
        root->right->right->left = new Node("Ramlee");
        root->right->right->right = new Node("Sharifah");
        root->right->right->left->left = new Node("Yahya");
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
