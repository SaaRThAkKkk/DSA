#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Linkedlist: public Node{
public:
    Linkedlist* head;
    Linkedlist* tail;
    int size;
    Linkedlist(){
        head=tail=NULL;
        int size=0;
    }
    
    void InsertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void diaplay(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }

};
int main(){
    Linkedlist ll;
    ll.InsertAtEnd(10);
    ll.diaplay();
    ll.InsertAtEnd(20);
    ll.diaplay();

}