#include<iostream>

using namespace std;

struct node{
        int data;
        node* left;
        node* right;
};

class BST{
    private:
    node* root;

    node* insertion(int x, node* t){
        if(t == NULL)        {
            t = new node;
            t->data = x;
            t->left = NULL;
			t->right = NULL;
        }
        else if(x < t->data)
            t->left = insertion(x, t->left);
        else if(x > t->data)
            t->right = insertion(x, t->right);
        return t;
    }

    node* findMin(node* m)    {
        if(m == NULL)
            return NULL;
        else if(m->left == NULL)
            return m;
        else
            return findMin(m->left);
    }

    node* deletion(int x, node* t){
        node* temp;
        if(t == NULL) //best case
            return NULL;
        // If the key we want to deleted is smaller than the root's key, 
    	// then it lies in left subtree 
        else if(x < t->data) 
            t->left = deletion(x, t->left);
        // If the key to be deleted is greater than the root's key, 
    	// then it lies in right subtree 
        else if(x > t->data)
            t->right = deletion(x, t->right);
        // if key is same as root's key, then This is the node 
    	// to be deleted 
        else{
            temp = t;
            // node with only one child or no child 
            if(t->left == NULL)
                {
                    t = t->right;
                    delete temp;
                    return t;
                }
            else if(t->right == NULL)
                {
                    t = t->left;
                    delete temp;
                    return t;
                }
        }

        temp = findMin(t->right); // node with two children
        t->data = temp->data; // Copy the inorder successor's content to this node 
        t->right = deletion(t->data, t->right); // Delete the inorder successor 

        return t;
    }

    void inorder(node* t){
        if(t == NULL)
            return;
        inorder(t->left);
        cout << t->data << " ";
        inorder(t->right);
    }

    node* find(node* t, int x){
        if(t == NULL)
            return NULL;
        else if(x < t->data)
            return find(t->left, x);
        else if(x > t->data)
            return find(t->right, x);
        else
            return t;
    }

public:
    BST(){
        root = NULL;
    }


    void insert(int x){
        root = insertion(x, root);
    }

    void remove(int x){
        root = deletion(x, root);
    }

    void display(){
        inorder(root);
        cout << endl;
    }

    void search(int x){
        node* n = find(root, x);

        if(n == NULL)
            cout << x << " is not found!" << endl;
        else
            cout << x << " is Found" << endl;
    }
};

int main(){
	
	
	
    BST t;
    t.insert(20);
    t.insert(25);
    t.insert(15);
    t.insert(10);
    t.insert(30);   
    t.insert(35);
    t.insert(55);
    t.display();
	
	cout << "\nSearches for 30: " <<endl;
    t.search(30);
    t.display();
    cout << "\nRemoves 20: ";

    t.remove(20);
    t.display();
    
    cout << "\nRemoves 25: ";
    t.remove(25);
    t.display();
    
    cout << "\nRemoves 30: ";
    t.remove(30);
    t.display();
    
    cout << "\nSearches for 30 and 25: " <<endl;
    t.search(30);
    t.search(25);
}
