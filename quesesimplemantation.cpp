#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    //printing all t he elements of a queue;
    // for(int i=0;i<q.size();i++){
    //     int x=q.front();
    //     cout<<x<<" ";
    //     q.pop();
    //     q.push(x);

    // }
    

    //reversing a queue using stack
    stack<int> st;
    while(q.size()>0){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    while(st.size()>0){
        int x=st.top();
        st.pop();
        q.push(x);
    }
    for(int i=0;i<q.size();i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);

    }
    return 0;
}
