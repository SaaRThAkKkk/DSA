#include<iostream>
#include<climits>
#include<vector>
using namespace std;

vector<int> get_digits(int n){
    vector<int> digits;
    while(n>0){
        if((n%10)!=0) digits.push_back(n%10);//where n%10 is the last digit
        n=n/10;
    }
    return digits;
}
vector<int> dp;//declaring dp globally

int f(int n){
    if(n==0) return 0;// already 0 to 0 steps m reach 0
    if(n<=9) return 1;//already single digit h to seddhe suko minus krke 1 ek step m 
    if(dp[n]!=-1) return dp[n];
    vector<int> v=get_digits(n);//this function will return a vector consisiting digits of n
    int steps=INT_MAX;
    for(int i=0;i<v.size();i++){
        steps=min(steps,f(n-v[i]));//minimum pof the steps requires by removing the ith digit
    }
    return dp[n]=1+ steps;
}

int main(){
    int n;
    dp.resize(1000005,-1);
    cin>>n;
    cout<<f(n);
    return 0;
}
