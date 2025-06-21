#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this-> val= val;
        this->next=NULL;
    }
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    // toprint the vlaue of b using its pointer stored in node a
    // cout<<(*(a.next)).val<<endl; // a.next m b ka address h 
    //usse value lane k liye b ki * lgao 
    //ab b ki value mil gyi pr ab b k val print krna  to .val lga do 

    // cout<<(a.next)->val<<endl;
    // cout<<((a.next)->next)->val;

    cout<<(((a.next)->next)->next)->val;

}