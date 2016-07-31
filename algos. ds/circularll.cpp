#include<iostream>
using namespace std;

typedef struct node
{
    int a;
    struct node *next;

}Node;

node *head, *end1;

void create()
{
    node *temp = new Node;
    cin>>temp->a;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
        end1 = temp;
    }
    else
    {
        end1->next =temp;
        end1 = temp;

    }

}

void traverse(node *head)
{
    node *temp = head;
    cout<<temp->a<<" ";
    temp = temp->next;
    while(temp!=head)
    {
            cout<<temp->a<<" ";
            temp = temp->next;
    }

}

node *head1,*head2;

void split(node *head)
{

    node *slow = head;
    node *fast = head;

    while(fast->next != head && fast->next->next !=head)
    {
        slow = slow->next;
        fast = fast->next->next;

    }
    head1 = head;
    head2 = slow->next;
    slow->next = head1;

    //for even
    if(fast->next->next =head)
    {
        fast = fast->next;
    }
    fast->next = head2;




}

int main()
{

    head = NULL;
    end1 = NULL;

    int n;
    cin>>n;
    while(n--)
    {
        create();
    }
    end1->next = head;
//    traverse(head);
    head1 = NULL;
    head2 = NULL;

    split(head);

    traverse(head1);
    cout<<"\n";
    traverse(head2);
}
