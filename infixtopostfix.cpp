#include<iostream>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
string solve(string val1,char ch,string val2){
    string s="";
    s+=val1;
    s+=val2;
    s.push_back(ch);
    return s;
}
int main(){
    string s="(7+9)*4/8-3";
    stack<string> val;
    stack<char> op;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else{
            if(op.size()==0 ) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                  char ch=op.top();//ye operator mil gya
                  op.pop();
                  string val2=val.top();
                  val.pop();
                  string val1=val.top();
                  val.pop();
                  string ans=solve(val1,ch,val2);
                  val.push(ans);
                }
                op.pop();//popping the opening bracket as well
              }
            else if (prio(s[i])>prio(op.top())) op.push(s[i]);
            
            else{
                while(op.size()>0 && prio(s[i]) <= prio(op.top())){
                    char ch=op.top();//ye operator mil gya
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans=solve(val1,ch,val2);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    //the stack still might not be empty
    //jb tk stack empty na ho jaye solve krte rho
    while(op.size()>0){
        char ch=op.top();//ye operator mil gya
        op.pop();
        string val2=val.top();
        val.pop();
        string val1=val.top();
        val.pop();
        string ans=solve(val1,ch,val2);
        val.push(ans);
    }
    cout<<val.top();
}