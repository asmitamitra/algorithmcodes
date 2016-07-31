#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct node {

    int a;
    struct node *left;
    struct node *right;
}node;

typedef struct Stack {

    node **arr;
    int top;

}Stack;

Stack *stack;

node *createNode(int a)
{
    node *newnode = new node();
    newnode->a = a;
    newnode->left=NULL;
    newnode->right = NULL;
    return newnode;
}

void createstack(int n)
{
    stack->arr =(node **)malloc(sizeof(node*)*n);
    stack->top =-1;
}
void push(node *newnode){
    stack->arr[++stack->top]=newnode;
}
node *pop(){
    return stack->arr[stack->top--];
}

void inorder(node *root)
{
    cout<<"Are you inorder\n";
    stack = new Stack();
    createstack(5);
    node *temp = root;
    push(temp);
    temp=temp->left;
    while(stack->top!=-1)
    {
            if(temp!=NULL){
                     //cout<<"Are you inide while\n";
                    push(temp);
                    //cout<<"Pushing onto stack"<<temp->a<<endl;
                    temp=temp->left;

            }

            if(stack->top!=-1 && temp==NULL)
            {
                //cout<<"are you in pop"<<endl;
                node *t1 = pop();
                cout<<t1->a<<" ";
                temp = t1->right;
            }
    }
}
void preorder(node *root)
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
int main()
{
    node *root=createNode(2);
    root->left=createNode(1);
    root->right=createNode(3);
    root->left->left=createNode(4);
    root->left->right=createNode(5);

    inorder(root);
    //preorder(root);
}
