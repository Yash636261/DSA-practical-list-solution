#include<iostream>
using namespace std;
int queue[100],n,head=-1,tail=-1,option,x;
void enqueue(){
	if(tail==n-1){
		cout<<"queue is full"<<endl;
	}
	else{
		if(head==-1){
			head=0;
		}
		cout<<"enter the elemet you want to insert:"<<endl;
		cin>>x;
		tail++;
		queue[tail]=x;
	}
}
void dequeue(){
	if(head==-1||head>tail){ 
		cout<<"queue is empty"<<endl;
	}
	else{
		cout<<"elemet deleted:"<<queue[head]<<endl;
		head++;
	}
}
void display()
{
    if(tail>=0){
        cout<<"\n The elements in queue \n"<<endl;
        for(int i=head+1; i<=tail; i++){
            cout<<" "<<queue[i];
		}
		cout<<endl;
    }
    else{
        cout<<"\n The queue is empty"<<endl;
    }
}
int main(){
	cout<<"enter the size of the queue:"<<endl;
	cin>>n;
	cout<<"what operation you want to do[1-4]:\n 1.insert \n 2.delete \n 3.display \n 4.exit"<<endl;
	cin>>option;
	do{
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
