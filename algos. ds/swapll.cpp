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
void swaplist(int x1, int y1)
{
    node *temp,*prev1,*prev2, *x, *y;
    prev1 = NULL;
    prev2 = NULL;
    temp=head;
    int flag1 = 1, flag2 = 1;
    while(temp!=NULL)
    {
        if(temp->a!=x1 && temp->a!=y1)
        {
            //both not found.
            if(flag1 == 1 && flag2 == 1)
            {
                prev1 = temp;
                prev2 = temp;
                temp=temp->next;

            }
            if(flag1 == 0 && flag2 == 1)
            {
                prev2 = temp;
                temp=temp->next;

            }
            if(flag1 == 1 && flag2 == 0)
            {
                prev1 = temp;
                temp=temp->next;

            }
        }
        if(temp->a == x1)
        {
            flag1 = 0;
            x = temp;
            //y yet not found.
            if(flag2 == 1)
            {
                prev2 = temp;
                temp=temp->next;

            }
            else
            {
                break;

            }
        }
        if(temp->a == y1)
        {
            flag2 = 0;
            y = temp;
            //x yet not found.
            if(flag1 == 1)
            {
                prev1 = temp;
                temp=temp->next;
            }
            else
            {
                break;

            }
        }

    }

    //now prev1 and prev2 are previous nodes to x and y.
    if(x != head && y!=head)
    {
        prev1->next = y;
        node *temp1 = y->next;

        y->next = x->next;

        prev2->next = x;

        x->next = temp1;

    }
    if( x == head)
    {
        node *y1 = y;
        node *temp1 = y->next;
        y->next = x->next;
        prev2->next = x;
        x->next = temp1;
        head = y1;

    }
    if( y == head)
    {
        node *x1 = x;
        node *temp1 = x->next;
        x->next = y->next;
        prev1->next = y;
        y->next = temp1;
        head = x1;

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
    swaplist(1,4);
    traverse();


}
