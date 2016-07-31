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
    stack->arr = (int *)malloc(sizeof(int)*n);
    stack->top=-1;
}

void push(int m)
{
    stack->arr[++stack->top]=m;
}

int pop(){
    return stack->arr[stack->top--];
}

int main()
{
    stack = new Stack;
    int n;cin>>n;
    createstack(n);
    char exp[] = "231*+9-";
    cout<<"Postfix expression: "<<exp<<endl;
    for(int i=0;i<strlen(exp);i++)
    {
        if(exp[i]!='+'&&exp[i]!='*'&&exp[i]!='-'&&exp[i]!='/'){
            push(exp[i]-'0');

        }
        else{
            int val1 = pop();
            int val2 = pop();
            switch(exp[i]){

                case '+' : push(val2+val1);break;
                case '-' : push(val2-val1);break;
                case '*' :push(val2*val1);break;
                case '/' : push(val2/val1);break;
            }
        }


    }
    while(stack->top!=-1){
        cout<<"Result"<<pop();
    }

}
