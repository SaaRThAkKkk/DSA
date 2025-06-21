#include<iostream>
using namespace std;
bool Getbit(int n,int pos){
    return ((n & (1<<pos))!=0);
}

int SetBit(int n,int pos){
    return(n|(1<<pos));
}

int ClearBit(int n,int pos){
    int mask=~(1<<pos);
    return (n&mask);
}

int SetBit(int n,int pos,int val){
     int mask=~(1<<pos);
     n=n&mask;//ab naye n m us pos p 0 h
     return(n|(1<<pos));
}
int main(){
    cout<<Getbit(5,2);// ye btaega ki 5 ke second index p kon sa bit h 
    cout<<endl;
    cout<<SetBit(5,1);
    cout<<endl;
    cout<<ClearBit(5,2);
    cout<<endl;
    cout<<SetBit(5,1,1);
}
