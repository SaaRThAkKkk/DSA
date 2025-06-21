#include<iostream>
#include<vector>
using namespace std;
bool pallindrome(string s){
    int i=0;
    int j=s.length()-1;
    bool flag=false;
    while(i<=j){
        if(s[i]==s[j]){
            i++;
            j--;
            flag=true;
        }
        return flag;
        
    }
}
int main(){
    vector<string> words = {"abc","car","ada","racecar","cool"};
    // int n=words.size();
    // cout<<n;
    int n=1000021;
     string str=to_string(n);
     cout<<str;

    // bool flag=pallindrome(str);
    // cout<<flag;
}