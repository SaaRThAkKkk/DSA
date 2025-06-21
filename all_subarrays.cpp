#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> f(vector<int>& v,vector<int>& ans,vector<vector<int>>& fans,int idx){
    if(idx==v.size()){
        fans.push_back(ans);
        return fans;
    }
    //calling without includeing that current element
    f(v,ans,fans,idx+1);
    //calling after including taht current element
    ans.push_back(v[idx]);
    f(v,ans,fans,idx+1);
}
int main(){
    vector<int> v={1,2,3};
    int n=v.size();
    vector<int> ans;
    vector<vector<int>> fans;
    f(v,ans,fans,0);
    for(int i=0;i<fans.size();i++){
        for(int j=0;j<fans[i].size();j++){
            cout<<fans[i][j];
        }
        cout<<endl;
    }

}
