#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

typedef struct Stack {

    char *arr;
    int top;

}Stack;

Stack *stack;

void createstack(int n)
{
    stack->arr = (char *) malloc(n*sizeof(char));
    stack->top=-1;

}

void push(char a)
{
    ++stack->top;
    stack->arr[stack->top]=a;
}

char pop()
{
    return stack->arr[stack->top--];
}
int precedence(char a){
    switch(a)
    {
        case '+': return 1;
        case '-': return 1;
        case '*': return 2;
        case '/': return 2;
        case '^': return 3;

    }
    return -1;
}


int main()
{

    stack = new Stack();
    int n;
    cin>>n;
    createstack(n);
    char aexp[] = "a+b*(c^d-e)^(f+g*h)-i";
    cout<<aexp<<"\n";
    for(int i=0;i<strlen(aexp);i++)
    {
            if(aexp[i]!='+'&&aexp[i]!='-'&&aexp[i]!='*'&&aexp[i]!='/'&&aexp[i]!=')'&&aexp[i]!='('&&aexp[i]!='^'){
                cout<<aexp[i];

            }
            else if(aexp[i]=='('){
                push(aexp[i]);
            }
            else if(aexp[i] == ')')
            {
                while(stack->arr[stack->top]!='(')
                {
                    cout<<pop();
                }
                pop();

            }
            else if(aexp[i]=='+'||aexp[i]=='-'||aexp[i]=='*'||aexp[i]=='/'||aexp[i]=='^'){

                if(precedence(aexp[i]) >= precedence(stack->arr[stack->top]))
                {
                    push(aexp[i]);
                }
                else
                {
                    while((precedence(aexp[i])<precedence(stack->arr[stack->top]))&& (stack->arr[stack->top]!='('))
                    {
                        cout<<pop();
                    }
                    push(aexp[i]);

                }
            }
    }
    while(stack->top!=-1)
    {
            cout<<pop();
    }




}
