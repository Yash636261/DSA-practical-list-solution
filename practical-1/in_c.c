#include<stdio.h>
#include<conio.h>
void search(int arr[],int n,int s){
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            printf("element found ar index:%d /n",i);
            break;
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
            break;
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
            break;
        }
    }
}
int main()
{
    int arr[100],in,s,delet,v,n;
    printf("enter the size of which array you want:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element you want to find:");
    scanf("%d",&s);
    search(arr,n,s);
    printf("enter the element you want to add and index:");
    scanf("%d %d",&v,&in);
    insert(arr,n,in,v);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("enter the element you want to delete from the array:");
    scanf("%d",&delet);
    dlt(arr,n,delet);
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
