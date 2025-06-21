#include<iostream>
using namespace std;

void subset(string str , string s ){
    
    if(str == ""){
        cout<<s<<endl;
        return;
    }
    char ch =str[0];
    subset(str.substr(1),s+ch);
    subset(str.substr(1),s);

}

int main(){
    string str = "abc";
    subset(str,"");
}