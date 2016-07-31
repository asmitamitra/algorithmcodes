#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

typedef struct Stack {

    char *arr;
    int top1;
    int top2;

}Stack;

Stack *stack;

void createstack(int n) {

    stack->arr = (char *)malloc(sizeof(char)*n);
    stack->top1 = -1;
    stack->top2=n;

}

void push1(char m)
{
    if(stack->top2 - stack->top1 > 1){
            stack->arr[++stack->top1]=m;
    }
    else{
        cout<<"Overflow";
    }
}
void push2(char m)
{

    if(stack->top2 - stack->top1 > 1){
            stack->arr[--stack->top2]=m;
    }
    else{
        cout<<"Overflow";
    }
}
char pop1()
{
    return stack->arr[stack->top1--];

}
char pop2()
{
    return stack->arr[stack->top2++];
}

int main()
{
    stack = new Stack();

    int n;
    cin>>n;
    createstack(n);
    push1('5');
    push2('10');
    push2('15');
    push1('11');
    push2('7');
    cout<<pop1()<<endl;
    push2('w');
    cout<<pop2();



}
