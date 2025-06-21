#include<iostream>// a=5 b=10 c=7
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(b>c){
            cout<<b;
        }else if(b<c){
            if(c>a){
                cout<<a;
            }else if(c<a){
                cout<<c;
            }

        }
    }
    else if(b>a){
        if(b<c &&  c>a){
            cout<<b;
        }else if(a>c && b>c){
            cout<<a;
        }else if(c>a && c<b){
            cout<<c;
        }
    }
    return 0;
}