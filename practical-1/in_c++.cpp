#include<iostream>
using namespace std;
void search(int arr[],int n){
    int s;
    cout<<"enter element you want to find:";
    cin>>s;
    for(int i=0;i<n;i++)
        if(arr[i]==s){
            cout<<"element found ar index:"<<i;
            break;}
}
void insert(int arr[],int n)
{ 
    int val,s;
    cout<<"enter the element you want to add and index:";
    cin>>val>>s;
    for(int i=0;i<n;i++)
        if(i==s)
        {
            for(int j=n;j>=i;j--)
                arr[j+1]=arr[j];
            arr[i]=val;
            break;
        }
}
void dlt(int arr[],int n)
{ 
    int dlt;
    cout<<"enter the element you want to delete from the array:";
    cin>>dlt;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==dlt)
        {
            for(int j=i;j<n;j++)
            {
                arr[j]=arr[j+1];
            }
            break;
        }
    }
}
void get(int arr[],int n)
{
    cout<<"enter the elements of an array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
}
int main()
{
    int arr[100],n,operation;
    cout<<"enter the size of array:";
    cin>>n;
    get(arr,n);
    cout<<"enter the operation you want to do[1,2,3]:\n 1. search\n2. insert \n3. delete\n";
    cin>>operation;  
    switch(operation)
    {
        case 1:
            search(arr,n);
            break;
        case 2:
            insert(arr,n);
            print(arr,n+1);
            break;
        case 3:
            dlt(arr,n);
            print(arr,n-1);
            break;
    }
    return 0;
}
