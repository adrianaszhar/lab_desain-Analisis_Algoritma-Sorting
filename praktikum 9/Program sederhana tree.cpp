#include <iostream>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;
        
        node(int value) {
            data = value;
            left = NULL;
            right = NULL;
        }
};

class tree {
    public:
        node* root;
        tree() { root = NULL; }
        
        void insert(int value) {
            root = insert(root, value);
        }
        
        node* insert(node* current, int value) {
            if (current == NULL) {
                return new node(value);
            } else if (value <= current->data) {
                current->left = insert(current->left, value);
            } else {
                current->right = insert(current->right, value);
            }
            return current;
        }
        
        void inorder() {
            inorder(root);
        }
        
        void inorder(node* current) {
            if (current != NULL) {
                inorder(current->left);
                cout << current->data << " ";
                inorder(current->right);
            }
        }
};

int main() {
    tree Tree;
    Tree.insert(10);
    Tree.insert(5);
    Tree.insert(15);
    Tree.inorder();
    
    return 0;
}

