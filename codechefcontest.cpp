#include<iostream>
using namespace std;
int pow(int x,int y){
    int p=1;
    while(y--){
        p*=x;
    }
    return p;
}
int main(){
    cout<<pow(2,3);
    return 0;

}