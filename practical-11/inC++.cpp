#include<iostream>
using namespace std;
void search(int arr[],int n){
    int x,low=0,high=n-1,mid;
    cout<<"enter the element you want to search:"<<endl;
    cin>>x;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            cout<<"element found at index"<<mid;
            return;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
}
int main(){
    int arr[10],n;
    cout<<"enter the number of element you want to enter in an array in sorted manner."<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    search(arr,n);
    return 0;
}
