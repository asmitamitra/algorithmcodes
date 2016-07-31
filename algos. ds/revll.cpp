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
void reverselist()
{
    node *temp, *p1, *p2, *p3;
    temp = head;
    p1 = NULL;
    p2 = head;
    p3 = p2->next;

    while(p3!=NULL)
    {
        p2->next = p1;
        p1 = p2;
        p2 = p3;
        p3 = p2->next;
    }

    p2->next = p1;
    p1 = p2;
    p2 = p3;

    head = p1;
}
void recursivereverse(node *head)
{
    node *first, *rest;

    first = head;
    rest = first->next;

    if(rest == NULL)
        return;

    recursivereverse(rest);
    first->next->next = first;
    first->next = NULL;
    head = rest;
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
    //reverselist();
    recursivereverse(head);
    traverse();
}
