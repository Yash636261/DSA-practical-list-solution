#include<bits/stdc++.h>
#define max 100
using namespace std;
char stack[max];
char infix[max],postfix[max];
int top=-1;

void pop()
{
    if(top<=-1)
    {
        cout<<"\n\t Stack is under flow";
    }
    else
    {
        cout<<"\n\t The popped elements is ";
        top--;
    }
}

void push(int x)
{
    if(top>=strlen(infix)-1)
    {
        cout<<"\n\tSTACK is over flow";
        
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

void intopost(){
    int j=0;
    char temp,next;
    for(int i=0;i<strlen(infix);i++)
    {
        switch(temp){
            case '(':
                push(temp);
                break;
            case ')':
                while((next=pop()) != '(')
                    postfix[j++]=next;
                    break;
            case '+':
            case '-':
            case '*':
            case '/':
                while(!isempty() )
            default:
                postfix[j++]=temp;
        }
    }
}

int main()
{
    cout<<"enter the infix expression:"<<endl;
    gets(infix);
    intopost();
}
