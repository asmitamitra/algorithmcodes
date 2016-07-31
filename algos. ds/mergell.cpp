#include<iostream>
using namespace std;

typedef struct node
{
    int a;
    struct node *next;
}Node;

node * create(node *head, node *end1){

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



int main()
{

        node *head1, *end1, *head2, *end2;

        head1 = NULL;
        head2 = NULL;
        end1 = NULL;
        end2 = NULL;
        int n;
        cin>>n;
        int m = n;
        cout<<m;
        while(n--)
        {
            head1 = create(head1, end1);
        }
        traverse(head1);

        while(m--)
        {
            head2 = create(head2, end2);
        }

        traverse(head2);
}
