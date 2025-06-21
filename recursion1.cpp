#include<iostream>
using namespace std;
void cum (int p){
    if(p==0) return ;
    cout<<p;
    cum(p-1);
}
int main(){
    int n;
    cin>>n;
    cum(n);

}