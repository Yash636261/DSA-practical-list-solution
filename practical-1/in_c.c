#include<stdio.h>
#include<conio.h>
void search(int arr[],int n){
    int s;
    printf("enter element you want to find:");
    scanf("%d",&s);
    for(int i=0;i<n;i++)
        if(arr[i]==s){
            printf("element found ar index:%d \n",i);
            break;}
}
void insert(int arr[],int n)
{ 
    int val,s;
    printf("enter the element you want to add and index:");
    scanf("%d %d",&val,&s);
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
    printf("enter the element you want to delete from the array:");
    scanf("%d",&dlt);
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
    printf("enter the elements of an array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");    
}
int main()
{
    int arr[100],n,operation;
    printf("enter the size of array:");
    scanf("%d",&n);
    get(arr,n);
    printf("enter the operation you want to do[1,2,3]:\n 1. search\n2. insert \n3. delete\n");
    scanf("%d",&operation);  
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
            print(arr,n);
            break;
    }
    return 0;
}
