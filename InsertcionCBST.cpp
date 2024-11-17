#include<iostream>
#include<queue>
using namespace std;

struct Node
{
    int inst;
    Node* left;
    Node* right;
    Node(int it)
    {
        inst=it;
        left=NULL;qwe 
        right=NULL;
    }
};

Node* Insert(Node* Node, int inst)
{
    if(Node==NULL)
    return new Node(inst);

    if(Node->inst==inst)
    return Node;

    if(Node->inst<inst)
    {
        Node->right= Insert(Node->right, inst);
    }

    else
    {
        Node->left= Insert(Node->left, inst);
        return Node;
    }
}
