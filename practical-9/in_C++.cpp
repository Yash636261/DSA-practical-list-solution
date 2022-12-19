#include<iostream>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
};
void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
void preorder(Node *root){
    if(root!=NULL){
        cout<<root->key<<" ";
        inorder(root->left);
        inorder(root->right);
    }
}
void postorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        inorder(root->right);
        cout<<root->key<<" ";
    }
}
int main(){
    Node *root =new Node(10);
    root->left =new Node(20);
    root->right =new Node(30);
    root->left->left=new Node(40);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
}
