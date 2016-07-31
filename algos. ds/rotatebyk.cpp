#include<iostream>
using namespace std;

typedef struct node
{
    int a;
    struct node *next;

}Node;

node *head, *end1;

void create(){

    node *temp = new Node;
    cin>>temp->a;
    temp->next=NULL;

    if(head == NULL)
    {
        head = temp;
        end1 = temp;

    }
    else
    {
        end1->next = temp;
        end1 = temp;

    }

}

void traverse()
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->a;
        temp=temp->next;

    }

}

void rotatebyk(int k)
{
    node *temp = head;
    for(int i=0;i<k-1;i++)
    {
        temp = temp->next;
    }
    node *ptr = temp->next;
    temp->next = NULL;

   node *temp1 = ptr;
    while(temp1->next!=NULL)
    {
        temp1 = temp1->next;

    }
    temp1->next = head;
    head = ptr;


}


int main()
{
    head = NULL;
    int n;
    cin>>n;
    while(n--)
    {
        create();
    }
    rotatebyk(4);
    traverse();


}

