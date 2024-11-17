#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node* buildTree() {
    int data;
    cout << "Enter the data (-1 for NULL): ";
    cin >> data;

    if (data == -1) {
        return nullptr;
    }

    node* root = new node(data);

    cout << "Enter the data to insert to the left of " << data << endl;
    root->left = buildTree();

    cout << "Enter the data to insert to the right of " << data << endl;
    root->right = buildTree();

    return root;
}

void PostOrder(node* root) {
    if (root == nullptr) {
        return;
    }

    PostOrder(root->left);

    PostOrder(root->right);

    cout << root->data << " ";
}

int main() {
    cout << "Building the binary tree...\n";
    node* root = buildTree();

    cout << "\nPostOrder Traversal: ";
    PostOrder(root);
    cout << endl;

    return 0;
}