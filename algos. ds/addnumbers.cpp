#include<iostream>
using namespace std;

typedef struct node {

    int a;
    struct node *next;

}node;

node * head, *end1, *head1, *head2;

node* create(node *head, int a){

    node *temp = new node;
    temp->a = a;
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

    return head;

}

void traverse(node *head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->a;
        temp=temp->next;

    }

}

void add(node *head, node *head1)
{
    node *temp = head;
    node *temp1 = head1;
    int c=0;

    while(temp!=NULL || temp1!=NULL)
    {
        int d1 = temp->a+temp1->a;
        int d2 = d1+c;
        if(d2>=10)
        {
            head2=create(head2,d2-10);
            c=1;

        }
        else
        {
            head2=create(head2,d2);
        }
        temp=temp->next;
        temp1=temp1->next;
    }
    while(temp!=NULL)
    {
        head2=create(head2,temp->a);
        temp=temp->next;
    }
    while(temp1!=NULL)
    {
        head2=create(head2,temp1->a);
        temp1=temp1->next;
    }



}


int main()
{
    head = NULL;
    head=create(head,5);
    head=create(head,6);
    head=create(head,3);

    cout<<"LL1"<<"\n";
    traverse(head);

    end1 = NULL;
    head1 = NULL;

    head1=create(head1,8);
    head1=create(head1,4);
    head1=create(head1,2);

    cout<<"LL2"<<"\n";
    traverse(head1);


    end1 = NULL;
    head2 = NULL;

    add(head, head1);
    traverse(head2);


}
