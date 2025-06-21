#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){//calling the constructor and setting the deafut values
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void levelorderqueues(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
}
int main(){
    Node*a=new Node(1);
    Node*b=new Node(2);
    Node*c=new Node(3);
    Node*d=new Node(4);
    Node*e=new Node(5);
    Node*f=new Node(6);
    Node*g=new Node(7);
    a->left=b;
    a->right=c;
    c->left=d;
    c->right=e;
    b->left=f;
    b->right=g;
    levelorderqueues(a);
}