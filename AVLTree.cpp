#include <iostream>
using namespace std;

struct node
{
public:
    int data;
    node *left;
    node *right;
    int height;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
        height = 1;
    }
};

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftH = height(root->left);
    int rightH = height(root->right);
    return 1 + max(leftH, rightH);

}

node *rightRotate(node *y)
{
    node *x = y->left;
    node *z = x->right;

    x->right = y;
    y->left = z;

    y->height = 1 + max(height(y->left), height(y->right));
    x->height = 1 + max(height(x->left), height(x->right));

    return x;
}
{
    node *x = y->right;
    node *z = x->left;

    x->left = y;
    y->right = z;

    y->height = 1 + max(height(y->left), height(y->right));
    x->height = 1 + max(height(x->left), height(x->right));

    return x;
}

int getBalance(node *n)
{
    if (n == NULL)
        return 0;

    return height(n->left) - height(n->right);
}

node *insert(node *n, int d)
{
    if (n == NULL)
        return new node(d);

    if (d < n->data)
    {
        n->left = insert(n->left, d);
    }
    else if (d > n->data)
    {
        n->right = insert(n->right, d);
    }
    else
    {
        return n;
    }

    int balance = getBalance(n);

    if (balance > 1 && d < n->left->data)
        return rightRotate(n);
    if (balance < -1 && d > n->right->data)
    {
        return leftRotate(n);
    }

    if (balance > 1 && d > n->left->data)
    {
        n->left = leftRotate(n->left);
        return rightRotate(n);
    }

    if (balance < -1 && d < n->right->data)
    {
        n->right = rightRotate(n->right);
        return leftRotate(n);
    }
    return n;
}

void preOrder(node *root)
{
    if (root != nullptr)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main()
{
    node *root = nullptr;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);

    cout << "Preorder traversal : \n";
    preOrder(root);
    return 0;
}
