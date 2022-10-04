#include<iostream>
using namespace std;
void search(int arr[],int n,int s){
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            cout<<"element found ar index:"<<i;
        }
    }
}
void insert(int arr[],int n,int s,int val)
{ 
    for(int i=0;i<n;i++)
    {
        if(i==s)
        {
            for(int j=n;j>=i;j--)
            {
                arr[j+1]=arr[j];
            }
            arr[i]=val;
            return;
        }
    }
}
void dlt(int arr[],int n,int val)
{ 
    for(int i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            for(int j=i;j<n;j++)
            {
                arr[j]=arr[j+1];
            }
            return;
        }
    }
}
int main()
{
    int arr[6]={1,2,3,4,5},in,s,delet,v,n;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter index of element you want to find:";
    cin>>s;
    //int s=2,v=56,n=5;
    search(arr,n,s);
    cout<<endl;
    cout<<"enter the element you want to add and index:";
    cin>>v>>in;
    insert(arr,n,in,v);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"enter the element you want to delete from the array:";
    cin>>delet;
    dlt(arr,n,delet);
    cout<<endl;
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}
