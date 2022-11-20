#include<iostream>
using namespace std;
void value(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    cout<<"after swapping using call by value a="<<a<<" b="<<b;
}
void refrence(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    cout<<"after swapping using call by refrence a="<<*a<<"  b="<<*b;
}
int main()
{
    int a,b;
    cout<<"enter the value of a and b:"<<endl;
    cin>>a>>b;
    value(a,b);
    refrence(&a,&b);
    return 0;
}
