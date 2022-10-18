#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{   
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
int main()
{
    int arr[]={1,23,4,56,7,87};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"before swapping"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    bubblesort(arr,n);
    cout<<"after swapping"<<endl;
    for(int i=0;i<n;i++)
    {   
        cout<<arr[i]<<endl;
    }
    return 0;
}
