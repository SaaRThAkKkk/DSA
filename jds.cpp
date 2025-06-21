#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    int sum=0;
    while (a<=n){
        sum=sum+a;
        a++;
    }
    
    cout<<"the required sum is:"sum;
    return 0;
}