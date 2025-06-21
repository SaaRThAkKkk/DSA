//with brackets bhi same hi bnega bs brackets wle code ko edit kr lena
#include<iostream>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
string solve(string val1,char ch,string val2){
    string s="";
    s.push_back(ch);
    s+=val1;
    s+=val2;
    return s;
}
    
int main(){
    string s="2+6*4/8-3";
    stack<string> val;//ye string data type ka hoga
    stack<char> op;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57){//s[i] is a digit s[i] ki ascii val se pta lgaenge ki number h ki nii
            val.push(to_string(s[i]-48));
        }
        else{// s[i] is an operator
            if(op.size()==0 || prio(s[i])>prio(op.top())) op.push(s[i]);
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