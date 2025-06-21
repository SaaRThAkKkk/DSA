#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if ((a%2==0) && (a%3==0)){
        cout<<"The number is even as well as multiple of 3";
    }
    else{
        cout<<"The number doesn't matches the configuration";
    }l
    return 0;
}