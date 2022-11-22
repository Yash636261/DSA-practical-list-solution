#include<iostream>
using namespace std;
int queue[100],n,head=-1,tail=-1,option,x;
void enqueue(){
    if(head==tail+1){
        cout<<"queue is full"<<endl;
        return;
    }
    else if(tail==n-1){
        cout<<"queue is full"<<endl;
    }
    if((tail+1)%n==head) {
        return;
    }
	if(head==-1){
        head=0;
    }
	cout<<"enter the elemet you want to insert:"<<endl;
	cin>>x;
	tail=(tail+1)%n;
	queue[tail]=x;
}
void dequeue(){
	if(head==-1){ 
		cout<<"queue is empty"<<endl;
        return;
	}
	cout<<"elemet deleted:"<<queue[head]<<endl;
	head=(head+1)%n;
    if(head==tail){
        head=tail=-1;
    }
}
void display()
{
    if (head == -1)
    {
        cout<<"\nQueue is Empty"<<endl;
        return;
    }
    cout<<"\nElements in Circular Queue are: "<<endl;
    if (tail >= head)
    {
        for (int i = head; i <= tail; i++)
            cout<<" "<<queue[i];
    }
    else
    {
        for (int i=head; i<n; i++)
            cout<<" "<<queue[i];
  
        for (int i=0; i<=tail; i++)
            cout<<" "<<queue[i];
    }
    cout<<endl;
}
  
int main(){
	cout<<"enter the size of the queue:"<<endl;
	cin>>n;
    cout<<"what operation you want to do[1-4]:\n 1.insert \n 2.delete \n 3.display \n 4.exit"<<endl;  
	do{
        cout<<"enter operaion:"<<endl;
        cin>>option;
		switch(option)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			cout<<"exit...."<<endl;
			break;
		default:
			cout<<"enter the valid options[1-4]"<<endl;
			break;
		}
	}while(option!=4);
	return 0;
}
