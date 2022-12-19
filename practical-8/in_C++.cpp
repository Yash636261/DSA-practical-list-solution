#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int d){
        data=d;
        next=NULL;
    }
    ~Node(){
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};
void insertAtTail(Node* &head,int data){
    Node* temp=new Node(data);
    Node *curr=head;
    while(curr->next!=head){
        curr=curr->next;
    }
    temp->next=head;
    curr->next=temp;
    curr=temp;
}
void insertprev(Node* &head,int pos,int data){
    Node *temp=new Node(data);
    if(pos==1){
        Node* curr=head;
        if(head==NULL)
            temp->next=NULL;
        else
            while(curr->next!=head){
                curr=curr->next;}
            curr->next=temp;
            temp->next=head;
            head=temp;
        return;    
    }
    else{
        Node* curr=head;
        int cnt=1;
        while(cnt<pos-2){
            curr=curr->next;
            cnt++;
        }
        temp->next=curr->next;
        curr->next=temp;
    }
}
void deleteHead(Node* &head){
    if(head==NULL)
        return;
    if(head->next==NULL){
        delete head;
        return;
    }
    head->data=head->next->data;
    Node* temp=head->next;
    head->next=head->next->next;
    //delete temp;
}
void deleteafter(Node* &head,int pos){
    if(pos==1){
        deleteHead(head);
    } 
    else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<pos+1){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void print(Node *head){
    Node *curr=head;
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr!=head);
    cout<<endl;
}
int main(){
    int opt;
    Node* head= new Node(10);
    Node* temp1= head->next = new Node(20);
    Node* temp2= temp1->next = new Node(30);
    Node* temp3= temp2->next = new Node(40);
    temp3->next=head;
    cout<<"1. Insert a node at the end of the linked list.\n2. Insert a node before specified position.\n3. Delete a first node of the linked list.\n4. Delete a node after specified position.\n5. print\n6. exit\n"<<endl;
    do{
        cout<<"enter the operation"<<endl;
        cin>>opt;
        switch(opt){
            case 1:
                insertAtTail(head,50);
                break;
            case 2:
                insertprev(head,3,15);
                break;
            case 3:
                deleteHead(head);
                break;
            case 4:
                deleteafter(head,3);
                break;
            case 5:
                print(head);
                break;
        }
    }while(opt!=6);
}
