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
void insertBeg(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &head,int data){
    Node* temp=new Node(data);
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    curr=temp;
}
void Insertatpos(Node* &head,int pos,int data)
{
    
    Node* temp=new Node(data);
    if(pos==1){
        temp->next=head;
        return;
    }
    Node* curr=head;
    for(int i=1;i<=pos-2&&curr!=NULL;i++){
        curr=curr->next;
    }
    if(curr==NULL){
        return;
    }
    temp->next=curr->next;
    curr->next=temp;
}
void deleteHead(Node* &head){
    Node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}
void deleteprev(Node* &head,int pos){
    if(pos==1){
        deleteHead(head);
    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<pos-1){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
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
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
int main()
{
    Node* temp= new Node(10);
    Node* head=temp;
    Node* temp1= temp->next = new Node(20);
    Node* temp2= temp1->next = new Node(30);
    Node* temp3= temp2->next = new Node(40);
    int opt;
    cout<<"chose the operation you want to do in existing linked list[10->20->30->40]:\n1.Insert a node at the front of the linked list.\n2. Insert a node at the end of the linked list. \n3. Insert a node at position\n4. Delete a first node of the linked list. \n5. Delete a node before specified position. \n6. Delete a node after specified position.\n7. print\n8. exit"<<endl;
    do{
        cout<<"enter the opration"<<endl;
        cin>>opt;
        switch(opt){
            case 1:
                insertBeg(head,2);
                break;
            case 2:
                insertAtTail(head,50);
                break;
            case 3:
                Insertatpos(head,3,45);
                break;
            case 4:
                deleteHead(head);
                break;
            case 5:
                deleteprev(head,3);
                break;
            case 6:
                deleteafter(head,3);
                break;
            case 7:
                print(head);
                break;
        }
    }while(opt!=8);
}
