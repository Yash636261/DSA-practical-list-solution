#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        data=d;
        prev=NULL;
        next=NULL;
    }
};
void insertBeg(Node* &head){
    int data;
    cout<<"enter data"<<endl;
    cin>>data;
    Node* temp=new Node(data);
    temp->next=head;
    if(head!=NULL)
        head->prev=temp;
    head=temp;
}
void insertAtTail(Node* &head){
    int data;
    cout<<"enter data"<<endl;
    cin>>data;
    Node* temp=new Node(data);
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
    curr=temp;
}
void deleteHead(Node* &head){
    Node* temp=head;
    head=head->next;
    head->prev=NULL;
}
void deleteprev(Node* &head){
    int pos;
    cout<<"enter the pos at you want to insert"<<endl;
    cin>>pos;
    if(pos==1){
        deleteHead(head);
    }
    else{
        Node* curr=head;
        Node* pre=NULL;
        int cnt=1;
        while(cnt<pos-1){
            pre=curr;
            curr=curr->next;
            cnt++;
        }
        pre->next=curr->next;
        curr->next->prev=curr->prev;
        curr->next=NULL;
        curr->prev=NULL;
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
    Node* head= new Node(10);
    Node* temp1= head->next = new Node(20);
    Node* temp2= temp1->next = new Node(30);
    Node* temp3= temp2->next = new Node(40);
    temp1->prev=head;
    temp2->prev=temp1;
    temp3->prev=temp2;
    int opt;
    cout<<"chose the operation you want to do in existing linked list[10->20->30->40]:\n1.Insert a node at the front of the linked list.\n2. Insert a node at the end of the linked list. \n3. Delete a first node of the linked list. \n4. Delete a node before specified position. \n5. print\n6. exit"<<endl;
    do{
        cout<<"enter the opration"<<endl;
        cin>>opt;
        switch(opt){
            case 1:
                insertBeg(head);
                break;
            case 2:
                insertAtTail(head);
                break;
            case 3:
                deleteHead(head);
                break;
            case 4:
                deleteprev(head);
                break;
            case 5:
                print(head);
                break;
        }
    }while(opt!=6);
}
