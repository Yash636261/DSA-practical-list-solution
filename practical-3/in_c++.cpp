#include<iostream>
using namespace std;
int top=-1, stack[100],n,choice,x,pos,val;
void push()
{
    if(top>=n-1)
    {
        cout<<"\n\tSTACK is over flow";
    }
    else
    {
        cout<<"enter the element you want to insert:"<<endl;
        cin>>x;
        top++;
        stack[top]=x;
    }
}
void pop(){
  if( top<0 )
    cout<<"your stack is underflaw.";
  else
    cout<<"element poped";
    top--;
}
void peep(){
    cout<<"the top most element is "<<stack[top]<<endl;
}
void change()
{
    cout<<"enter the position for which you want to change:"<<top<<endl;
    cin>>pos;
    cout<<"enter the new value:"<<endl;
    cin>>val;
    if(top==-1){
        cout<<"stack is underflow.";
    }
    else{
        stack[pos]=val;
    }
}
void display()
{
    if(top>=0)
    {
        cout<<"\n The elements in STACK \n";
        for(int i=top; i>=0; i--)
            cout<<"\n"<<stack[i];
    }
    else
    {
        cout<<"\n The STACK is empty";
    }
}
int main()
{
    top=-1;
    cout<<"\n Enter the size of STACK[MAX=100]:";
    cin>>n;
    cout<<"\n\t STACK OPERATIONS USING ARRAY";
    cout<<"\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEP\n\t 4.CHANGE\n\t 5.DISPLAY\n\t 6.EXIT";
    do
    {
        cout<<"\n Enter the Choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                peep();
                break;
            }
            case 4:
            {
                change();
                break;
            }
            case 5:
            {
                display();
                break;
            }
            case 6:
            {
                cout<<"\n\t EXIT POINT ";
                break;
            }
            default:
            {
                cout<<"\n\t Please Enter a Valid Choice(1/2/3/4/5)";
                break;
            }
                
        }
    }
    while(choice!=6);
    return 0;
}
