#include<iostream>


using namespace std;


struct node {
    int data;
    node* left;
    node* right;
};


node* createNode(int value){
    node* newNode = new node;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;


    return newNode;
}


void insertLeft(node *root, int value) {
    root->left = createNode(value);
}




void insertRight(node *root, int value){
    root->right = createNode(value);
}


void inorder(node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << "  ";
    inorder(root->right);
}


void preorder( node* root){
    if(root == NULL) return;
    cout << root->data << "  ";
    preorder(root->left);
    preorder(root->right);
}


void postorder(node* root) {
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << "  ";
}




int main(){
    node* root = createNode(1);
    insertLeft(root, 12);
    insertRight(root, 9);


    insertLeft(root->left, 5);
    insertRight(root->left, 6);
    

    insertLeft(root->right, 7);
    insertRight(root->right, 4);
    
    insertRight(root->right->right, 13);


    cout << "Inorder traversal" << endl;
    inorder(root);


    cout << "\nPreorder traversal \n";
    preorder(root);


    cout << "\nPostorder traversal \n";
    postorder(root);
}
