#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct node {
    int a;
    struct node *right;
    struct node *left;
}Node;

Node *root;

Node* createNode(int a)
{
    Node *node = new Node();
    node->a = a;
    node->left= NULL;
    node->right = NULL;
    return node;
}

void preorder(Node *root)
{
    if(root!=NULL)
    {
        cout<<" "<<root->a;
        preorder(root->left);
        preorder(root->right);
    }
    else
        return;

}
void postorder(Node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<" "<<root->a;
    }
    else
        return;

}
void inorder(Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<" "<<root->a;
        inorder(root->right);

    }
    else
        return;

}
int max(int a, int b)
{
    return (a>=b)?a:b;
}

int height(node *tree)
{
    if(tree == NULL)
    {
        return 0;
    }
    return 1+max(height(tree->left), height(tree->right));
}

int diameter(node *tree)
{
    if(tree == NULL)
    {
        return 0;
    }
    int lheight = height(tree->left);
    int rheight = height(tree->right);
    int ldiameter = diameter(tree->left);
    int rdiameter = diameter(tree->right);
    return max(lheight+rheight+1, max(ldiameter, rdiameter));
}
int main()
{
    root = createNode(3);
    root->left = createNode(4);
    root->right = createNode(5);
    root->left->left = createNode(6);
    root->left->right = createNode(9);
    root->left->right->right = createNode(7);
    root->left->right->right->left= createNode(1);
    root->left->right->right->right= createNode(2);
    root->left->right->right->right->right= createNode(8);
    preorder(root);
    cout<<"\n";
    inorder(root);
    cout<<"\n";
    postorder(root);

    cout<<"Diameter of tree:"<<diameter(root);

}
