#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> dp;
vector<int> coins;

int f(int x){
    if(x==0) return 0;
    if(dp[x]!=-2) return dp[x];
    int result=INT_MAX;
    for(int i=0;i<coins.size();i++){
        if(x-coins[i]<0) continue;//agr coin ka size amout se hi bda h to recursion call ni lgayenge
        result=min(result,f(x-coins[i]));
    }
    if(result==INT_MAX) return dp[x]=INT_MAX;
    return dp[x]= 1+result;
}
int main(){
    int n,x;
    cin>>n;
    cin>>x;
    dp.resize(1000006,-2);
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        coins.push_back(p);
    }
    int ans=f(x);
    if(ans==INT_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;
    return 0;
}