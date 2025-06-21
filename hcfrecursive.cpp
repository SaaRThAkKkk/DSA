#include<iostream>
using namespace std;
int hcf(int a, int b){
    if(b%a==0) return a;
    else return hcf(b%a,a);
}
int main(){
    cout<<hcf(27,45);
}