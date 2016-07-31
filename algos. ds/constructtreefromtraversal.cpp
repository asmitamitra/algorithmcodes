#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct node {
    char a;
    struct node *left;
    struct node *right;
}node;

node *root;
char inorder[]={'D','B','E','A','F','C'};
char preorder[] = {'A','B','D','E','C','F'};
int i=0;
node *createNode(char a)
{
    node *n = new node();
    n->a = a;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void preorderfunc(node* root)
{
    if(root!=NULL)
    {
        cout<<" "<<root->a;
        preorderfunc(root->left);
        preorderfunc(root->right);
    }
    else
        return;

}
int binarysearch(int item, int beg, int end1)
{
    int mid = (beg+end1)/2;
    if(item<inorder[mid]){
        binarysearch(item, beg, mid);
    }
    if(item>inorder[mid]){
        binarysearch(item, mid+1, end1);
    }
    if(item == inorder[mid]){
        return mid;
    }
}

node* buildtree(int beg, int end1)
{
    cout<<"in buildtree\n";
    node *temp = createNode(preorder[i]);
    if(beg == end1) {
        i++;
        temp->left = NULL;
        temp->right=NULL;
        return temp;
    }
    if(beg>end1){
        i++;
        return NULL;
    }
    else{
        int index = binarysearch(preorder[i], beg, end1);
        cout<<"Index you get after bin search"<<index<<endl;
        i++;
        temp->left = buildtree(beg,index-1);
        temp->right= buildtree(index+1, end1);
        return temp;
    }
}


int main()
{
    root = buildtree(0, 5);
    preorderfunc(root);

}
