#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

typedef struct Stack {
    int *arr;
    int top;
}Stack;

void createstack(Stack **stack, int n)
{
    (*stack)->arr = (int *)malloc(sizeof(int)*n);
    (*stack)->top=-1;
}

void push(Stack **stack, int m){
    (*stack)->arr[++(*stack)->top]=m;
}
int pop(Stack **stack){
    return (*stack)->arr[(*stack)->top--];
}
void insertAtbottom(Stack **stack, int item){

    if((*stack)->top==-1)
    {
        push(stack, item);
    }
    else
    {
        int temp = pop(stack);
        insertAtbottom(stack, item);
        push(stack, temp);
    }


}

void reversestack(Stack **stack)
{
    if((*stack)->top!=-1){

        int temp = pop(stack);
        reversestack(stack);
        insertAtbottom(stack,temp);

    }
}

int main()
{
    Stack *stack = new Stack();
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    createstack(&stack,n);

    for(int i=0;i<n;i++){
        push(&stack, arr[i]);
    }
    cout<<"Initial Stack"<<endl;
    while(stack->top!=-1)
    {
        cout<<pop(&stack);
    }
    for(int i=0;i<n;i++){
        push(&stack, arr[i]);
    }
    cout<<"\nFinal Stack"<<endl;
    reversestack(&stack);
    while(stack->top!=-1)
    {
        cout<<pop(&stack);
    }


}

