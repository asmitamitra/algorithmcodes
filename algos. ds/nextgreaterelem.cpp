#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

typedef struct Stack {
    int *arr;
    int top;

}Stack;

Stack *stack;

void createstack(int n)
{
    stack->arr =(int *)malloc(sizeof(int)*n);
    stack->top =-1;

}
void push(int m){
    stack->arr[++stack->top]=m;

}
int pop()
{
    return stack->arr[stack->top--];
}

void printnge(int a[], int n){
    //cout<<"here";
    //cout<<"pushing onto stack"<<a[0];
    push(a[0]);

    for(int i=1;i<n;i++)
    {
        while(a[i]>stack->arr[stack->top]){
            cout<<pop()<<"-->"<<a[i]<<endl;
        }
        if(stack->arr[stack->top]>a[i]){
            push(a[i]);
        }
    }
    while(stack->top!=-1)
    {
        cout<<pop()<<"-->-1"<<endl;

    }


}

int main()
{
    stack = new Stack();
    int a[] = {4,5,2,25};
    int n;
    n = sizeof(a)/sizeof(a[0]);

    createstack(n);
    printnge(a,n);

}

