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

int main()
{
    head = NULL;
    int n;
    cin>>n;
    while(n--)
    {
        create();
    }
    traverse();

}
