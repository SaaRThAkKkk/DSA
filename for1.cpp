#include <iostream>
using namespace std;
int main(){
    int a;
    int sum=0;
    cin >> a;
    for(int b=1;b<=a;b++){
        sum=sum+b;
    }   
    
    cout<<"the sum is"<<sum;
    return 0; 
}