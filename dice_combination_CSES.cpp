#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
#define mod 1000000007

vector<long long> dp(1000005,-1);

int f(int n){
    if(n==0)return 1;
    if(dp[n]!=-1) return dp[n];
    long long sum=0;
    for(int i=1;i<=6;i++){
        if(n-i<0) break;
        sum=(sum%mod+f(n-i)%mod%mod);
    }
    return dp[n]=sum%mod;
}


int main(){
    int n;
    cin>>n;
    int ans=f(n);
    cout<<ans;
    return 0;
}